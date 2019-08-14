
#include <bits/stdc++.h>
using namespace std;
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
// function to display the linked list
void display(Node* head)
{
	while (head != NULL) {
		cout << head->data << " ";
		head = head->next;
	}
	cout<<endl;
}
void append(struct Node** head_ref, struct Node **tail_ref, int new_data)
{
    struct Node* new_node = new Node(new_data);
    if (*head_ref == NULL)
        *head_ref = new_node;
    else
        (*tail_ref)->next = new_node;
    *tail_ref = new_node;
}
Node* insertInMiddle(Node* head, int x);
int main()
{
    int n, k, T, l, x;
    cin>>T;
    while(T--)
    {
        struct Node *head = NULL,  *tail = NULL;
        cin>>n;
        for (int i=0; i<n; i++)
        {
            cin>>l;
            append(&head, &tail, l);
        }
        cin>>x;
        head = insertInMiddle(head, x);
        display(head);
    }
    return 0;
}


/*This is a function problem.You only need to complete the function given below*/
/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/
// function should insert node at the middle
// of the linked list
Node* insertInMiddle(Node* head, int x){
	// Cpde here
	
	
	if(head == NULL){
	  return new Node(x);
	}
	
	
	Node *newNode = new Node(x);
	Node *slow_ptr = head;
	Node *fast_ptr = head->next;
	
	while(fast_ptr != NULL && fast_ptr -> next != NULL ){
	    slow_ptr = slow_ptr -> next;
	    //cout<<slow_ptr -> data<<endl;
	    fast_ptr = fast_ptr -> next -> next;
	}
	
	newNode -> next = slow_ptr -> next;
	slow_ptr -> next = newNode;
	
	return head;
	
}