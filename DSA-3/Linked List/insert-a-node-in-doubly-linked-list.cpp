
#include <bits/stdc++.h>
using namespace std;
/* a Node of the doubly linked list */
struct Node
{
  int data;
  struct Node *next;
  struct Node *prev;
  Node(int x)
  {
      data = x;
      next = prev = NULL;
  }
};
void addNode(Node *head, int pos, int data);
Node *insert(Node *head, int x)
{
    if (head == NULL)
    {
        return new Node(x);
    }
    Node *curr;
    for (curr = head; curr->next != NULL; curr = curr->next)
      ;
    Node *temp = new Node(x);
    curr->next = temp;
    temp->prev = curr;
    return head;
}
void printList(Node *head)
{
  // The purpose of below two loops is
  // to test the created DLL
  Node *temp=head;
  if (temp != NULL) {
 
  while (temp->next!=NULL)
    temp=temp->next;
  while (temp->prev!=NULL)
   temp = temp->prev;
  }
  while (temp != NULL)
  {
      printf("%d ",temp->data);
      temp=temp->next;
  }
  
  cout << endl;
}
int main()
{
  int t;
  scanf("%d",&t);
  while(t--)
  {
  Node *head = NULL;   
  int n;
  scanf("%d",&n);
  for(int i=0;i<n;i++){
     int x;
     scanf("%d",&x);
     head = insert(head, x);
  }     
  int pos,data;
  cin>>pos>>data;
  addNode(head, pos, data);
  printList(head);
  }
  return 0;
}

/*This is a function problem.You only need to complete the function given below*/
/* a Node of the doubly linked list 
struct Node
{
  int data;
  struct Node *next;
  struct Node *prev;
  Node(int x) { data = x; next = prev = NULL; }
}; */
/* Function to insert into a Doubly Linked List */
void addNode(Node *head, int pos, int data){

    if(pos == 0){
        
        Node *newNode = new Node(data);
        newNode -> next = head -> next;
        newNode -> prev = head;
        head->next->prev = newNode;
        head->next = newNode;
    }else{
        Node *newNode = new Node(data);
        Node *temp = head;
        for(int i=0; i<pos; i++){
            temp = temp -> next;
        }
        
        newNode -> next = temp -> next;
        newNode -> prev = temp;
        
        if(temp->next){
            temp->next->prev = newNode;
        }
        temp->next = newNode;
    }
}