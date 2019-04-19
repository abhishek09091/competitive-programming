/**
Construct Binary Tree from given Parent Array representation
Given an array that represents a tree in such a way that array indexes are values in tree nodes and array values give the parent node of that particular index (or node). The value of the root node index would always be -1 as there is no parent for root. Construct the standard linked representation of given Binary Tree from this given representation.

Examples:

Input: parent[] = {1, 5, 5, 2, 2, -1, 3}
Output: root of below tree
          5
        /  \
       1    2
      /    / \
     0    3   4
         /
        6 
Explanation: 
Index of -1 is 5.  So 5 is root.  
5 is present at indexes 1 and 2.  So 1 and 2 are
children of 5.  
1 is present at index 0, so 0 is child of 1.
2 is present at indexes 3 and 4.  So 3 and 4 are
children of 2.  
3 is present at index 6, so 6 is child of 3.


Input: parent[] = {-1, 0, 0, 1, 1, 3, 5};
Output: root of below tree
         0
       /   \
      1     2
     / \
    3   4
   /
  5 
 /
6


**/


/**
Construct Binary Tree from given Parent Array representation
Given an array that represents a tree in such a way that array indexes are values in tree nodes and array values give the parent node of that particular index (or node). The value of the root node index would always be -1 as there is no parent for root. Construct the standard linked representation of given Binary Tree from this given representation.

Examples:

Input: parent[] = {1, 5, 5, 2, 2, -1, 3}
Output: root of below tree
          5
        /  \
       1    2
      /    / \
     0    3   4
         /
        6 
Explanation: 
Index of -1 is 5.  So 5 is root.  
5 is present at indexes 1 and 2.  So 1 and 2 are
children of 5.  
1 is present at index 0, so 0 is child of 1.
2 is present at indexes 3 and 4.  So 3 and 4 are
children of 2.  
3 is present at index 6, so 6 is child of 3.


Input: parent[] = {-1, 0, 0, 1, 1, 3, 5};
Output: root of below tree
         0
       /   \
      1     2
     / \
    3   4
   /
  5 
 /
6


**/


#include<bits/stdc++.h>
using namespace std;


struct Node{
	int data;
	struct Node *left, *right;
};

Node *newNode(int i){
	
	Node *temp = new Node;
	temp->data = i;
	temp->left = NULL;
	temp->right = NULL;
	return (temp);
}

void createNode(int i,int arr[],Node *created[],Node **root){
	
	if(created[i] != NULL){
		return;
	}
	
	created[i] = newNode(i+1);
	
	if(arr[i] == -1){
		*root = created[i];
		return;
	}
	
	if(created[arr[i]] == NULL){
		createNode(arr[i],arr,created,root);
	}
	
	Node *p = created[arr[i]];
	
	if(p->right == NULL){
		p->right = created[i];
	}else{
		p->left = created[i];
	}
}

void inorder(Node *root){
	
	if(root != NULL){
		inorder(root->left);
		cout<<root->data<<" ";
		inorder(root->right);
	}
}

void postOrder(Node *root){
    
    if(root != NULL){
        postOrder(root->left);
        postOrder(root->right);
        cout<<root->data<<" ";
    }
}

Node *createTree(int n, int arr[]){
	
	Node *created[n];
	
	for(int i=0; i<n; i++){
		created[i] = NULL;
	}
	
	Node *root = NULL;
	for(int i=1; i<=n; i++){
		createNode(i,arr,created,&root);
	}
	
	return root;
}

int main(){
	
	int t;
	cin>>t;
	
	while(t--){
		
		int n,temp;
		cin>>n;
		int arr[n];
		for(int i=0; i<n; i++){
			cin>>temp;
			arr[i] = temp;
		}
		
		Node *root = createTree(n,arr);
		inorder(root);
		cout<<endl;
		postOrder(root);
	}
	
	
	return 0;
}