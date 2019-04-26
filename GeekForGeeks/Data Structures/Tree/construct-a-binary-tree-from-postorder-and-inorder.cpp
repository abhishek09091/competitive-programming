/**

https://www.geeksforgeeks.org/construct-a-binary-tree-from-postorder-and-inorder/

Input:
1
8
4 8 2 5 1 6 3 7
8 4 5 2 6 7 3 1 

Output:
1 2 4 8 5 3 6 7

**/

#include<bits/stdc++.h>
using namespace std;

class Node{
	
	public:
	int data;
	Node *left;
	Node *right;
};

Node* newNode(int data){
	
	Node *node = new Node();
	node->data = data;
	node->left = NULL;
	node->right = NULL;
	
	return (node);
}

Node* buildTreeUtils(int in[],int post[],int inStrt,int inEnd,unordered_map<int,int> &map){
	
	static int postIndex = inEnd;
	
	if(inStrt > inEnd){
		return NULL;
	}
	
	int curr = post[postIndex--];
	
	Node* tNode = newNode(curr);
	
	if(inStrt == inEnd){
		return tNode;
	}
	
	int inIndex = map[curr];
	
	tNode->right = buildTreeUtils(in,post,inIndex+1,inEnd,map);
	tNode->left = buildTreeUtils(in,post,inStrt,inIndex - 1,map);
	
	return tNode;
	
}


Node* buildTree(int in[],int post[],int len){
	
	unordered_map<int,int> map;
	for(int i=0; i<len; i++){
		map[in[i]] = i;
	}
	
	return buildTreeUtils(in,post,0,len - 1,map);
}

void printPreOrder(Node *root){
	
	if(root == NULL){
		return;
	}
	
	cout<<root->data<<" ";
	printPreOrder(root->left);
	printPreOrder(root->right);
}

int main(){

	int t;
	cin>>t;
	
	while(t--){
		
		int n;
		cin>>n;
		
		int in[n];
		int post[n];
		
		for(int i=0; i<n; i++){
			cin>>in[i];
		}
		
		for(int i=0; i<n; i++){
			cin>>post[i];
		}
		
		Node *root = buildTree(in,post,n);
		printPreOrder(root);
	}
	return 0;
}