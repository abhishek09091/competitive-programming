/********

https://www.geeksforgeeks.org/check-for-children-sum-property-in-a-binary-tree/

*******/

/*This is a function problem.You only need to complete the function given below*/
/*Complete the function below
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
*/
int isSumProperty(Node *node){
 // Add your code here
 int left_data = 0 , right_data = 0;
 if(node == NULL || (node->left == NULL && node->right == NULL)){
     return 1;
 }else{
     
     if(node->left != NULL){
         left_data = node->left->data;
     }
     
      if(node->right != NULL){
         right_data = node->right->data;
     }
     
     if((node->data == left_data + right_data) && isSumProperty(node->left) && isSumProperty(node->right)){
        return 1; 
     }else{
         return 0;
     }
 }
}