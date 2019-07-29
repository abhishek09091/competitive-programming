/*******

https://www.geeksforgeeks.org/swap-kth-node-from-beginning-with-kth-node-from-end-in-a-linked-list/

********/


/*This is a function problem.You only need to complete the function given below*/
//User function Template for C++
/* Linked List Node structure
   struct Node  {
     int data;
     Node *next;
     Node(int x) {
        data = x;
        next = NULL;
  }
  }
*/
// Should swap Kth node from beginning and Kth
// node from end in list and return new head.
Node *swapkthnode(Node* head, int num, int k){
    // Your Code here
    if(num<k) return head;
    
    if(2*k - 1 == num) return head;
    
    
    Node* x = head;
    Node* x_prev = NULL;
    
    for(int i=1; i<k; i++){
        x_prev = x;
        x = x -> next;
    }
    
    Node* y = head;
    Node* y_prev = NULL;
    
    for(int i=1; i<num - k + 1; i++){
        y_prev = y;
        y = y -> next;
    }
    
    if(x_prev){
        x_prev->next = y;
    }
    
    if(y_prev){
        y_prev->next = x;
    }
    
    Node* temp = x -> next;
    x->next = y->next;
    y->next = temp;
    
    if(k == 1){
        head = y;
    }
    
    if(k == num){
        head = x;
    }
    
    return head;
}
