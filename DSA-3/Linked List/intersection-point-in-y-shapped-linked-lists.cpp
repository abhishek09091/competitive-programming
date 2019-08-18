/**********

https://www.geeksforgeeks.org/write-a-function-to-get-the-intersection-point-of-two-linked-lists/

**********/
#include<iostream>
#include<stdio.h>
using namespace std;
/* Link list Node */
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
int intersectPoint(struct Node* head1, struct Node* head2);
void append(struct Node** head_ref, struct Node **tail_ref, int new_data)
{
    struct Node* new_node = new Node(new_data);
    if (*head_ref == NULL)
        *head_ref = new_node;
    else
        (*tail_ref)->next = new_node;
    *tail_ref = new_node;
}
/* Driver program to test above function*/
int main()
{
    int T,i,n1, n2, n3,l,k;
    cin>>T;
    while(T--)
    {
        cin>>n1>>n2>>n3;
        struct Node *head1 = NULL,  *tail1 = NULL;
        for(i=1; i<=n1; i++)
        {
            cin>>l;
            append(&head1, &tail1, l);
        }
        struct Node *head2 = NULL,  *tail2 = NULL;
        for(i=1; i<=n2; i++)
        {
            cin>>l;
            append(&head2, &tail2, l);
        }
        struct Node *head3 = NULL,  *tail3 = NULL;
        for(i=1; i<=n3; i++)
        {
            cin>>l;
            append(&head3, &tail3, l);
        }
        if (tail1 != NULL)
        tail1->next = head3;
        if (tail2 != NULL)
        tail2->next = head3;
        cout << intersectPoint(head1, head2) << endl;
    }
    return 0;
}


/*This is a function problem.You only need to complete the function given below*/

/* Linked List Node
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}; */
/* Should return data of intersection point of two linked
   lists head1 and head2.
   If there is no intersecting point, then return -1. */
int getCount(Node *head){
    
    Node *temp = head;
    int count = 0;
    
    while(temp != NULL){
        temp = temp->next;
        count++;
    }
    
    return count;
    
}

int getIntersection(int d,Node *head1,Node *head2){
    
    Node *current1 = head1;
    Node *current2 = head2;
    
    for(int i=0; i<d; i++){
        if(current1 == NULL){
            return -1;
        }
        
        current1 = current1 ->next;
    }
    
    while(current1 != NULL && current2 != NULL){
        
        if(current1 == current2){
            return current1->data;
        }
        
        current1 = current1->next;
        current2 = current2->next;
    }
    
    return -1;
}

int intersectPoint(Node* head1, Node* head2){
    // Your Code Here
    int count1 = getCount(head1);
    int count2 = getCount(head2);
    
    if(count1 > count2){
        int d = count1 - count2;
        return getIntersection(d,head1,head2);
    }else{
        int d = count2 - count1;
        return getIntersection(d,head2,head1);
    }
}
