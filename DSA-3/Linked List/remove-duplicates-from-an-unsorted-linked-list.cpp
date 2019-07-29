/********

https://www.geeksforgeeks.org/remove-duplicates-from-an-unsorted-linked-list/

********/

/*This is a function problem.You only need to complete the function given below*/
/*
The structure of linked list is the following
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/
// Function to remove duplicates from the linked list
// root: root of the linked list
Node *removeDuplicates(Node *root){
 // your code goes here
 
 unordered_set<int> map;
 
 struct Node* curr = root;
 struct Node* prev = NULL;
 
 while(curr != NULL){
     
     if(map.find(curr->data)!= map.end()){
         prev->next = curr->next;
         free(curr);
     }else{
         map.insert(curr -> data);
         prev = curr;
     }
     
     curr = prev -> next;
 }
 
 return root;
}