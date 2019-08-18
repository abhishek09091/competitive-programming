
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<bits/stdc++.h>
using namespace std;
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
bool areIdentical(struct Node *a, struct Node *b);
void push(struct Node** head_ref, int new_data)
{
	struct Node* new_node =new Node(new_data);
	new_node->next = (*head_ref);
	(*head_ref) = new_node;
}
int main()
{
    int T;
    cin>>T;
    while(T--){
        int n1, n2, tmp;
        struct Node *a = NULL;
        struct Node *b = NULL;
        cin>>n1;
        while(n1--){
            cin>>tmp;
            push(&a, tmp);
        }
        cin>>n2;
        while(n2--){
            cin>>tmp;
            push(&b, tmp);
        }
        areIdentical(a, b)?cout<<"Identical"<<endl:cout<<"Not identical"<<endl;
    }
	return 0;
}


/*This is a function problem.You only need to complete the function given below*/
/*
Structure of the node of the linked list is as
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/
// This function should return true if both 
// linked lists are identical else return false.
bool areIdentical(struct Node *head1, struct Node *head2){
    // Code here
    Node *temp1 = head1;
    Node *temp2 = head2;
    
    while(temp1 != NULL && temp2 != NULL){
        
        if(temp1->data != temp2->data){
            return false;
        }
        temp1 = temp1 ->next;
        temp2 = temp2 ->next;
    }
    
    if(temp1 == NULL && temp2 == NULL){
        return true;
    }
    
    return false;
}