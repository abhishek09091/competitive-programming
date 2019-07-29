/*This is a function problem.You only need to complete the function given below*/
/* A binary tree Node
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
//You are required to complete this method
void levelOrder(Node* root){
  //Your code here
  //Your code here
    if(root == NULL){
        return;
    }
    
    Node* temp = NULL;
    
    queue<Node*> q;
    q.push(root);
    
    while(!q.empty()){
        
        temp = q.front();
        
        q.pop();
        cout<<temp->data<<" ";
        if(temp->left){
            q.push(temp->left);
        }
        
        if(temp->right){
            q.push(temp->right);
        
        }
    }
}
