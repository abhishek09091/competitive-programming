/********

https://www.geeksforgeeks.org/nth-node-from-the-end-of-a-linked-list/

*********/


/*This is a function problem.You only need to complete the function given below*/
/* struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/
/* Should return data of n'th node from the end of linked list.
*  head: head of the linked list
*  n: nth node from end to find
*/
int getNthFromLast(Node *head, int n){
       // Your code here
       Node* main_ptr = head;
       Node* ref_ptr = head;
       
       int count = 0;
       if(head != NULL){
           while(count < n){
               
               if(ref_ptr == NULL){
                   return -1;
               }
               ref_ptr = ref_ptr -> next;
               count++;
           }
           
           while(ref_ptr != NULL){
               main_ptr = main_ptr->next;
               ref_ptr = ref_ptr -> next;
           }
       }
       
       return main_ptr->data;
       
}
