/*********

https://www.geeksforgeeks.org/function-to-check-if-a-singly-linked-list-is-palindrome/

***********/

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
/*You are required to complete this method */
void reverse(Node **node){
    
    struct Node* prev = NULL;
    struct Node* curr = *node;
    struct Node* next;
    
    while(curr != NULL){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    *node = prev;
}

bool compareLists(Node *first, Node* second){
    
    Node* temp1 = first;
    Node* temp2 = second;
    
    while(temp1 && temp2){
        
        if(temp1->data == temp2->data){
            temp1 = temp1->next;
            temp2 = temp2->next;
        }else{
            return 0;
        }
    }
    
    if(temp1 == NULL && temp2 == NULL){
        return 1;
    }
    return 0;
    
}


bool isPalindrome(Node *head){
    //Your code here
  Node* slow_ptr = head;
  Node* fast_ptr = head;
  Node* second_half , *prev_of_slow_ptr = head;
  Node* mid_node = NULL;
  bool res = true;
  
  if(head != NULL && head->next != NULL){
      
      while(fast_ptr != NULL && fast_ptr->next != NULL){
          fast_ptr = fast_ptr->next->next;
          prev_of_slow_ptr = slow_ptr;
          slow_ptr = slow_ptr->next;
      }
  
  
  if(fast_ptr != NULL){
      mid_node = slow_ptr;
      slow_ptr = slow_ptr->next;
  }
  
  second_half = slow_ptr;
  prev_of_slow_ptr->next = NULL;
  
  reverse(&second_half);
  res = compareLists(head,second_half);
  reverse(&second_half);
  
  if(mid_node != NULL){
      prev_of_slow_ptr->next = mid_node;
      mid_node->next = second_half;
  }else{
      prev_of_slow_ptr->next = second_half;
  }
  }
  return res;
}
