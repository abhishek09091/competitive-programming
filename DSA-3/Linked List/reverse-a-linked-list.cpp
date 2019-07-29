/******

https://www.geeksforgeeks.org/reverse-a-linked-list/

********/


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
// Should reverse list and return new head.
Node* reverseList(Node *head){
  // Your code here
    struct Node* prev = NULL;
    struct Node* curr = head;
    struct Node* next;
    
    while(curr != NULL){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    
    return prev;
  
}
