/*******

https://www.geeksforgeeks.org/write-a-c-program-to-find-the-maximum-depth-or-height-of-a-tree/

********/

/*This is a function problem.You only need to complete the function given below*/
/* Tree node structure  used in the program
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};*/
/* Computes the height of binary tree with given root.  */
int height(Node* node){
   // Your code here
   
   if(node == NULL){
       return 0;
   }else{
       
       int leftHeight = height(node->left);
       int rightHeight = height(node->right);
       
       if(leftHeight > rightHeight){
           return leftHeight + 1;
       }else{
           return rightHeight + 1;
       }
   }
}
