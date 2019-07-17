//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
    
};
struct Node *newNode(int key){
    struct Node *temp=new Node;
    temp->data=key;
    temp->next=NULL;
    temp->prev=NULL;
    return temp;
}
struct Node *insertNode(struct Node *head,int key)
{
    if(head==NULL)
    head=newNode(key);
    else
    {
        head->next=insertNode(head->next,key);
    }
    return head;
}
void makeDoubly(struct Node *);
void traverse(struct Node *head)
{
    for(struct Node *temp=head;temp!=NULL;temp=temp->next)
    cout<<temp->data<<" ";
    cout<<endl;
}
void printBack(struct Node *head)
{
    if(head==NULL)
    return;
    struct Node *temp=head;
    while(temp->next)
    temp=temp->next;
    
    while(temp!=head)
    {
        cout<<temp->data<<" <- ";
        temp=temp->prev;
    }
    cout<<temp->data;
    cout<<endl;
}
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    struct Node *head=NULL;
	    int n;
	    cin>>n;
	    while(n--)
	    {
	        int x;
	        cin>>x;
	        head=insertNode(head,x);
	    }
	  //  traverse(head);
	    makeDoubly(head);
	    printBack(head);
	    
	}
	return 0;
}
//Position this line where user code will be pasted.
/*This is a function problem.You only need to complete the function given below*/
//User function Template for C++
void makeDoubly(struct Node *head){
    //Your code here
    
    struct Node *temp = head->next;
    struct Node *temp2 = head;
    
    while(temp != NULL){
        
        temp->prev = temp2;
        temp2 = temp;
        temp = temp->next;
    }
    
    return;
}