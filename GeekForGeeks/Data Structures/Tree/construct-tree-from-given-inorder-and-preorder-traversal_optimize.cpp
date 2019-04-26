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


Node* newNode(int data){
	
	Node *node = new Node();
	node->data = data;
	node->left = NULL;
	node->right = NULL;
	
	return (node);
}

Node* treeBuildUtils(int in[],int pre[],int inStrt,int inEnd,unordered_map<int,int> &map){
	
	static int preIndex = 0;
	
	if(inStrt > inEnd){
		return NULL;
	}
	int curr = pre[preIndex++];
	Node *tNode = newNode(curr);
	
	if(inStrt == inEnd){
		return tNode;
	}
	
	int inIndex = map[curr];
	
	tNode->left = treeBuildUtils(in,pre,inStrt,inIndex - 1,map);
	tNode->right = treeBuildUtils(in,pre,inIndex + 1,inEnd,map);
	
	return tNode;
	
}

Node* buildTree(int in[],int pre[],int len){
	
	unordered_map<int,int> map;
	
	for(int i=0; i<len; i++){
		map[in[i]] = i;
	}
	
	return treeBuildUtils(in,pre,0,len-1,map);
}

void printInOrder(Node *root){
	
	if(root == NULL){
		return;
	}
	
	printInOrder(root->left);
	cout<<root->data<<" ";
	printInOrder(root->right);
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
		
		Node *root = buildTree(in,pre,n);
		printInOrder(root);
	}
	return 0;
}