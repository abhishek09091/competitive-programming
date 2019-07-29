/********

https://www.geeksforgeeks.org/delete-a-node-from-linked-list-without-head-pointer/

*********/

void deleteNode(Node *node)
{
   // Your code here
   
   if(node == NULL){
       return;
   }
   
   
   Node *temp = node -> next;
   
   node -> data = node->next->data;
   node -> next = node ->next -> next;
   
   free(temp);
}