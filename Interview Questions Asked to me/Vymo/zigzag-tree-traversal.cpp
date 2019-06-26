#include<bits/stdc++.h>

using namespace std;

void zigzagtraversal(struct Node *root){
	
	if(!root){
		return ;
	}
	
	stack<struct Node*> currentStack;
	stack<struct Node*> nextLevelStack;
	bool leftToRight = true;
	currentStack.push(root);
	
	while(!currentStack.empty()){
		
		struct Node *temp = currentStack.top();
		currentStack.pop();
		
		if(temp){
			
			cout<<temp->data<<" ";
			if(leftToRight){
				if(temp->left){
					nextLevelStack.push(temp->left);
				}
				if(temp->right){
					nextLevelStack.push(temp->right);
				}
			}else{
				if(temp->right){
					nextLevelStack.push(temp->right);
				}
				if(temp->left){
					nextLevelStack.push(temp->left);
				}
			}
		}
		
		if(currentStack.empty()){
			leftToRight = !leftToRight;
			swap(currentStack,nextLevelStack);
		}
		
	}
}

int main(){
	
	int t;
	cin>>t;
	
	return 0;

}