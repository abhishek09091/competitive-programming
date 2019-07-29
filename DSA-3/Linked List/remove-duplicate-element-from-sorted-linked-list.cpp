/**********

https://www.geeksforgeeks.org/remove-duplicates-from-a-sorted-linked-list/

*************/


// root: head node
Node *removeDuplicates(Node *root){
 // your code goes here
 
 Node *curr_node = root;
 
 Node *next_next;
 
 if(curr_node == NULL){
     return root;
 }
 
 while(curr_node -> next != NULL){
     
     if(curr_node->data == curr_node->next->data){
         
         next_next = curr_node->next->next;
         free(curr_node->next);
         curr_node->next = next_next;
     }else{
         curr_node = curr_node -> next;
     }
 }
 
 return root;
 
}