/*********



***********/

#include <bits/stdc++.h>
using namespace std;

struct Node{
  
  int data;
  struct Node* left;
  struct Node* right;

  public:
  Node(int val){
      data = val;
      left = NULL;
      right = NULL;
  }
};

void insert(Node **root,int data){
    if(*root == NULL){
        *root = new Node(data);
    }else if((*root)->data <= data){
        insert(&((*root)->right),data);
    }else if((*root)->data > data){
        insert(&((*root)->left),data);
    }
}

Node* convertBST(int arr[],int n){
    Node* root = NULL;
    for(int i=0; i<n; i++){
        insert(&root,arr[i]);
    }
    return root;
}

int alternateLeafCount(Node *node,int *count,int *sum){
    
    if(node == NULL)      
        return 0;  
    if(node->left == NULL && node->right == NULL){
        if((*count)%2){
            (*sum) = ( (*sum) + (node->data));
        }
        *count = (*count) + 1;
        return 1;
    }
    else
        return alternateLeafCount(node->left,count,sum)+  
            alternateLeafCount(node->right,count,sum);  
    
}


int main() {
	//code
	int t;
	cin>>t;
	
	while(t--){
	    
	    int n;
	    cin>>n;
	    
	    int arr[n];
	    for(int i=0; i<n; i++){
	        cin>>arr[i];
	    }
	    int count = 1;
	    int sum = 0;
	    Node *head = convertBST(arr,n);
	    alternateLeafCount(head,&count,&sum);
	    cout<<sum<<endl;
	}
	return 0;
}