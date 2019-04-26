/**

https://www.geeksforgeeks.org/construct-tree-from-given-inorder-and-preorder-traversal/

Input:
1
8
4 8 2 5 1 6 3 7
1 2 4 8 5 3 6 7 

Output:
4 8 2 5 1 6 3 7

**/

#include<bits/stdc++.h>
using namespace std;

class Node{
	
	public:
	int data;
	Node *left;
	Node *right;
};

int search(int arr[],int strt,int end,int value);
Node* newNode(int data);

Node* buildTree(int in[],int pre[],int inStrt,int inEnd){
	
	static int preIndex = 0;
	
	if(inStrt > inEnd){
		return NULL;
	}
	
	Node *tNode = newNode(pre[preIndex++]);
	
	if(inStrt == inEnd){
		return tNode;
	}
	
	int inIndex = search(in,inStrt,inEnd,tNode->data);
	
	tNode->left = buildTree(in,pre,inStrt,inIndex - 1);
	tNode->right = buildTree(in,pre,inIndex + 1, inEnd);
	
	return tNode;
}

int search(int arr[],int strt,int end,int value){
	
	int i;
	for(i=strt; i<=end; i++){
		if(arr[i] == value){
			return i;
		}
	}
}

Node* newNode(int data){
	
	Node* node = new Node();
	node->data = data;
	node->left = NULL;
	node->right = NULL;
	
	return (node);
}

void printInorder(Node* node){
	
	if(node == NULL){
		return;
	}
	
	printInorder(node->left);
	cout<<node->data<<" ";
	printInorder(node->right);
}
int main(){
	
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
	
		int in[n];
		int pre[n];
	
		for(int i=0; i<n; i++){
			cin>>in[i];
		}
	
		for(int i=0; i<n; i++){
			cin>>pre[i];
		}
	
		Node* root = buildTree(in,pre,0,n-1);
		printInorder(root);
	}
	return 0;
}