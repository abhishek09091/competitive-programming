/********

https://www.geeksforgeeks.org/level-order-traversal-line-line-set-3-using-one-queue/
https://www.geeksforgeeks.org/print-level-order-traversal-line-line/
https://www.geeksforgeeks.org/level-order-traversal-line-line-set-2-using-two-queues/

*********/


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
void levelOrder(Node* node){
  //Your code here
  
  if(node == NULL) return;
  
  queue<Node*> q;
  
  Node* curr;
  
  q.push(node);
  q.push(NULL);
  
  while(q.size() > 1){
      curr = q.front();
      q.pop();
      
      if(curr == NULL){
          q.push(NULL);
          cout<<"$"<<" ";
      }else{
          if(curr->left){
              q.push(curr->left);
          }
          
          if(curr->right){
              q.push(curr->right);
          }
          
          cout<<curr->data<<" ";
      }
  }
  
  cout<<"$";
}
