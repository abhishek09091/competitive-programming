/********

https://www.geeksforgeeks.org/print-nodes-in-the-top-view-of-binary-tree-set-3/
https://www.geeksforgeeks.org/print-nodes-top-view-binary-tree/
https://www.geeksforgeeks.org/print-nodes-in-top-view-of-binary-tree-set-2/

*******/


/*This is a function problem.You only need to complete the function given below*/
//Structure of binary tree
/*struct Node
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
// function should print the topView of the binary tree
void topView(struct Node *root){
    //Your code here
    if(root == NULL){
        return;
    }
    
    Node* temp = NULL;
    
    queue<pair<Node*,int>> q;
    
    map<int,int> m;
    vector<int> vec;
    q.push({root,0});
    
    while(!q.empty()){
        
        temp = q.front().first;
        int d = q.front().second;
        q.pop();
        if(m.find(d) == m.end()){
            cout<<temp->data<<" ";
            vec.push_back(temp->data);
            m[d] = temp->data;
        }
        
        if(temp->left){
            q.push({temp->left,d-1});
        }
        
        if(temp->right){
            q.push({temp->right,d+1});
        
        }
    }
    
    
}
