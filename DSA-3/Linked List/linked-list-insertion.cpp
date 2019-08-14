#include <iostream>
using namespace std;
/*Struct of linked list*/
struct Node {
  int data;
  struct Node *next;
  Node(int x) { //the constructor
    data = x;
    next = NULL;
  }
};
void printList(Node *head) { //function to print list
    Node *node = head;
    while (node != NULL) {
      cout << node -> data << ' ';
      node = node -> next;
    }
    cout << endl;
}
Node *insertAtBegining(Node *head, int newData);
Node *insertAtEnd(Node *head, int newData);
int main() {
  int test;
  cin >> test; //number of testcases input
  while (test--) { //while we have testcases we run the loop
    int n, ch, tmp;
    Node *head = NULL; //initially head is null as linked list is empty
    cin >> n;
    for (int i = 0; i < n; i++) {
      cin >> tmp >> ch; 
      if (ch) head = insertAtEnd(head, tmp); 
      else head = insertAtBegining(head, tmp);
    }
    printList(head);
  }
  return 0;
}

/*This is a function problem.You only need to complete the function given below*/
/*Structure of the linked list node is as
struct Node {
  int data;
  struct Node * next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}; */
// function inserts the data in front of the list
Node *insertAtBegining(Node *head, int newData) {
   // Your code here
   Node *temp = new Node(newData);
   
   if(head == NULL){
       return temp;
   }
   
   temp->next = head;
   head = temp;
   return head;
   
}
// function appends the data at the end of the list
Node *insertAtEnd(Node *head, int newData)  {
   // Your code here
   Node *temp = new Node(newData);
   temp->next = NULL;
   if(head == NULL){
       return temp;
   }
   Node *it = head;
   
   while(it->next != NULL){
       it = it->next;
   }
   
   it->next = temp;
   return head;
}
