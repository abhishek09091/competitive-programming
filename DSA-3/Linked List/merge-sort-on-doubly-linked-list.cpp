/***********


https://www.geeksforgeeks.org/merge-sort-for-doubly-linked-list/

************/

#include <bits/stdc++.h>
using namespace std;
struct Node
{
	int data;
	struct Node *next, *prev;
	
	Node (int x){
	    data = x;
	    next = NULL;
	    prev = NULL;
	}
};
//Position this line where user code will be pasted.
void insert(struct Node **head, int data)
{
	struct Node *temp = new Node (data);
	if (!(*head))
		(*head) = temp;
	else
	{
		temp->next = *head;
		(*head)->prev = temp;
		(*head) = temp;
	}
}
void print(struct Node *head)
{
	struct Node *temp = head;
	while (head)
	{
		cout<<head->data<<' ';
		temp = head;
		head = head->next;
	}
	cout<<endl;
	while (temp)
	{
		cout<<temp->data<<' ';
		temp = temp->prev;
	}
	cout<<endl;
}
// Utility function to swap two integers
void swap(int *A, int *B)
{
	int temp = *A;
	*A = *B;
	*B = temp;
}
// Driver program
int main(void)
{
    long test;
    cin>>test;
    while(test--)
    {
        int n, tmp;
        struct Node *head = NULL;
        cin>>n;
        while(n--){
            cin>>tmp;
            insert(&head, tmp);
        }
        head = sortDoubly(head);
        print(head);
    }
	return 0;
}

/*This is a function problem.You only need to complete the function given below*/
/*
Structure of the node of the list is as
struct Node
{
	int data;
	struct Node *next, *prev;
	Node (int x){
	    data = x;
	    next = prev = NULL;
	}
}; */

Node *split(Node *head){
    
    Node *slow = head , *fast = head;
    
    while(fast->next  && fast->next->next ){
        fast = fast->next->next;
        slow = slow->next;
    }
    
    Node *temp = slow->next;
    slow->next = NULL;
    return temp;
    
}

Node *merge(Node *first,Node *second){
    
    if(!first){
        return second;
    }
    
    if(!second){
        return first;
    }
    
    if(first->data < second->data){
        first->next = merge(first->next,second);
        first->next->prev = first;
        first->prev = NULL;
        return first;
    }else{
        second->next = merge(first,second->next);
        second->next->prev = second;
        second->prev = NULL;
        return second;
    }
}

// Function to merge two DLLs
struct Node *sortDoubly(struct Node *head){
	// Your code here
	if(! head || !head->next){
	    return head;
	}
	
	Node *second = split(head);
	
	head = sortDoubly(head);
	second = sortDoubly(second);
	
	return merge(head,second);
	
}


