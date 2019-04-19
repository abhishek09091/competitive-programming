/*

Question Link:

https://www.geeksforgeeks.org/iterative-boundary-traversal-of-complete-binary-tree/


Output:

20 8 4 25 10 14 22

*/

#include<bits/stdc++.h>
#define pb push_back
using namespace std;

struct Node{
	
	int data;
	struct Node *left , *right;
	
};


Node *newNode(int data){
	
	Node *temp = (struct Node*)malloc(sizeof(struct Node));
	temp -> data = data;
	temp -> left = NULL;
	temp -> right = NULL;
	return temp;
}

void boundaryTraversal(Node *root){
	
	if(root){
	
		if((root->left == NULL) && (root->right == NULL)){
			cout<<root->data<<endl;
			return;
		}
	
		vector<Node*> list;
		list.pb(root);
		
		
		Node* L = root->left;
		while(L->left){
			list.pb(L);
			L = L->left;
		}
		
		
		
		queue<Node*> q;
		q.push(root);
		
		while(!q.empty()){
			
			Node* temp = q.front();
			q.pop();
			
			if((temp->left == NULL) && (temp->right == NULL)){
				list.pb(temp);
			}
			
			if(temp->left){
				q.push(temp->left);
			}
			
			if(temp->right){
				q.push(temp->right);
			}
		}
		
		vector<Node*> list_r; 
		Node* R = root->right;
		
		while(R->right){
			list_r.pb(R);
			R = R->right;
		}
		
		reverse(list_r.begin(),list_r.end());
		
		list.insert(list.end(),list_r.begin(),list_r.end());
		
		for(auto i: list){
			cout<<i->data<<" ";
		}
		
		cout<<endl;
	}
}


int main(){
	
	Node* root = newNode(20); 
  
    root->left = newNode(8); 
    root->right = newNode(22); 
  
    root->left->left = newNode(4); 
    root->left->right = newNode(12); 
  
    root->left->right->left = newNode(10); 
    root->left->right->right = newNode(14); 
  
    root->right->right = newNode(25); 
  
    boundaryTraversal(root); 
	
	
	return 0;
}