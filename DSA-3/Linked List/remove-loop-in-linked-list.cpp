/*******

https://www.geeksforgeeks.org/detect-and-remove-loop-in-a-linked-list/

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
/*The function removes the loop from the linked list if present
You are required to complete this method*/

void removeLoop(Node* slow_ptr,Node* head){
    
    Node* ptr1 = slow_ptr;
    Node* ptr2 = slow_ptr;
    
    int k  = 1 , i;
    while(ptr1->next != ptr2){
        ptr1 = ptr1->next;
        k++;
    }
    
    ptr1 = head;
    
    ptr2 = head;
    
    for(i = 0; i<k ; i++){
        ptr2 = ptr2->next;
    }
    
    while(ptr2 != ptr1){
        ptr2 = ptr2->next;
        ptr1 = ptr1->next;
    }
    
    while(ptr2->next != ptr1){
        ptr2 = ptr2->next;
    }
    
    ptr2->next = NULL;
    return;
}

void removeTheLoop(Node *head){
     //Your code here
     
     Node* slow_ptr = head;
     Node* fast_ptr = head;
     
     while(slow_ptr && fast_ptr && fast_ptr->next){
         
         slow_ptr = slow_ptr->next;
         fast_ptr = fast_ptr->next->next;
         
         if(slow_ptr == fast_ptr){
             return removeLoop(slow_ptr,head);
         }
     }
     
     return;
}
