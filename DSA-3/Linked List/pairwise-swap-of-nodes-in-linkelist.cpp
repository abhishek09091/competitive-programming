/********

https://www.geeksforgeeks.org/pairwise-swap-adjacent-nodes-of-a-linked-list-by-changing-pointers-set-2/
https://www.geeksforgeeks.org/pairwise-swap-elements-of-a-given-linked-list-by-changing-links/
https://www.geeksforgeeks.org/pairwise-swap-elements-of-a-given-linked-list/


**********/


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
struct Node* pairwise_swap(struct Node* head){
    // your code here
    if(head == NULL || head->next == NULL){
        return head;
    }
    
    Node* curr = head->next->next;
    Node* prev = head;
    head = head->next;
    head->next = prev;
    
    while(curr != NULL && curr->next != NULL){
        
        prev->next = curr->next;
        prev = curr;
        Node *next = curr->next->next;
        curr->next->next = curr;
        curr = next;
    }
    
    prev->next = curr;
    return head;
}