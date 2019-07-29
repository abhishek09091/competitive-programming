/*********

https://www.geeksforgeeks.org/print-levels-nodes-binary-tree/

**********/

/*This is a function problem.You only need to complete the function given below*/
//User function Template for C++
/*
Structure of node
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
};
*/
int Count(Node *node,int L){
    //Your code here
    
    int count = 0;
    Node* curr;
    queue<pair<struct Node*, int>> q;
    q.push({node,1});
    
    while(!q.empty()){
        
        curr = q.front().first;
        int d = q.front().second;
        q.pop();
        
        if(d == L){
            count++;
        }
        
        if(curr->left){
            q.push({curr->left,d + 1});
        }
        
        if(curr->right){
            q.push({curr->right,d + 1});
        }
    }
    
    return count;
}