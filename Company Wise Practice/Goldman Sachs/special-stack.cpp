/******

https://www.geeksforgeeks.org/design-and-implement-special-stack-data-structure/
https://www.geeksforgeeks.org/design-a-stack-that-supports-getmin-in-o1-time-and-o1-extra-space/

*******/
#include<iostream>
#include<stack>
using namespace std;
void push(int a);
bool isFull(int n);
bool isEmpty();
int pop();
int getMin();
//This is the STL stack (http://quiz.geeksforgeeks.org/stack-container-adaptors-the-c-standard-template-library-stl/).
stack<int> s;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,a;
		cin>>n;
		while(!isEmpty()){
		    pop();
		}
		while(!isFull(n)){
			cin>>a;
			push(a);
		}
		cout<<getMin()<<endl;
	}
}

/*This is a function problem.You only need to complete the function given below*/
/*Complete the function(s) below*/
int minElem;

void push(int a){
     //add code here.
     
     if(s.empty()){
         minElem = a;
         s.push(a);
         return;
     }
     
     if(a < minElem){
         s.push(2*a - minElem);
         minElem = a;
         return;
     }
     
     s.push(a);
     
}

bool isFull(int n){
     //add code here.
     if(s.size() == n){
         return true;
     }
     
     return false;
}

bool isEmpty(){
    //add code here.
    if(s.size() == 0){
        return true;
    }
    
    return false;
}

int pop(){
    //add code here.
    if(s.empty()){
        return -1;
    }
    
    int t = s.top();
    s.pop();
    
    if(t < minElem){
        minElem = 2 * minElem - t;
        return minElem;
    }else{
        return t;
    }
}
int getMin(){
   //add code here.
   
   return minElem;
}