/*********

https://www.geeksforgeeks.org/find-length-of-loop-in-linked-list/

*********/

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
// Your task is to complete the function this function
// function should return the size of the loop

int countNodes(Node* slow_ptr){
    
    Node* temp = slow_ptr;
    
    int count  = 1;
    
    while(temp-> next != slow_ptr){
        count++;
        temp = temp->next;
    }
    
    return count;
    
}

int countNodesinLoop(struct Node *head){
     // Code here
     
     Node* slow_ptr = head;
     Node* fast_ptr = head;
     while(slow_ptr && fast_ptr && fast_ptr -> next){
         
         slow_ptr = slow_ptr -> next;
         fast_ptr = fast_ptr -> next -> next;
         
         if(slow_ptr == fast_ptr){
             
             return countNodes(slow_ptr);
         }
     }
     
     return 0;
}