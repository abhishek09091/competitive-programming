/*********

https://www.geeksforgeeks.org/rotate-a-linked-list/

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
}; */
/*  This function should rotate list counter-clockwise
    by k and return new head (if changed) */
Node* rotate(Node* head, int k) {
    // Your code here
    if(k == 0){
        return head;
    }
    
    Node *current = head;
    
    int count = 1;
    
    while(count < k && current != NULL){
        count++;
        current = current->next;
    }
    
    if(current == NULL){
        return head;
    }
    
    Node* kthNode = current;
    
    while(current->next != NULL){
        current = current->next;
    }
    
    current->next = head;
    head = kthNode->next;
    kthNode->next = NULL;
    
    return head;
}
