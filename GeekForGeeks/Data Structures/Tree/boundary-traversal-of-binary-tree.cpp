/*

https://www.geeksforgeeks.org/boundary-traversal-of-binary-tree/

##Output :

20 8 4 10 14 25 22

*/


#include<bits/stdc++.h>
using namespace std;


struct Node{
	
	int data;
	struct Node *left , *right;
};

void printLeftBoundary(Node *root){
	
	if(root){
		
		if(root -> left){
			cout<<root->data<<" ";
			printLeftBoundary(root -> left);
		}else if(root -> right){
			cout<<root->data<<" ";
			printLeftBoundary(root -> right);
		}
	}
}

void printRightBoundary(Node *root){
	
	if(root){
		if(root -> right){
			cout<<root->data<<" ";
			printRightBoundary(root->right);
		}else if(root -> left){
			cout<<root->data<<" ";
			printRightBoundary(root->left);
		}
	}
}

void printLeaves(Node *root){
	
	if(root){
		printLeaves(root->left);
		
		if(root -> left == NULL && root -> right == NULL){
			cout<<root->data<<" ";
		}
		printLeaves(root->right);
	}
		
}

struct Node *createNode(int data){
	
	struct Node *temp = (struct Node*)malloc(sizeof(struct Node));
	
	temp -> data = data;
	temp -> left = NULL;
	temp -> right = NULL;
	
	return temp;
}

void printBoundaryOfTree(Node *root){
	
	if(root){
		
		cout<<root->data<<" ";
		
		printLeftBoundary(root->left);
		printLeaves(root->left);
		printLeaves(root->right);
		printRightBoundary(root->right);
	}
	cout<<endl;
}

int main(){
	
	int t;
	cin>>t;
	
	while(t--){
		
		int n;
		cin>>n;
		
		
		for(int i=0; i<n; i++){
			
		}
		
	struct Node* root = createNode(20); 
    root->left = createNode(8); 
    root->left->left = createNode(4); 
    root->left->right = createNode(12); 
    root->left->right->left = createNode(10); 
    root->left->right->right = createNode(14); 
    root->right = createNode(22); 
    root->right->right = createNode(25); 
  
    printBoundaryOfTree(root);
		
		
	}
	
	return 0;
}