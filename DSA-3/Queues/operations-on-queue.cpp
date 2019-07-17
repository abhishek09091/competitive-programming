/******

https://www.geeksforgeeks.org/queue-cpp-stl/

******/

//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;
//Position this line where user code will be pasted.
int main() {
	int testcases;
	cin>>testcases;
	while(testcases--)
	{
	    queue<int> s;
	    int q;
	    cin>>q;
	    while(q--){
	        char ch;
	        cin>>ch;
	        
	        if(ch=='i')
	        {
	            int x;
	            cin>>x;
	            
	            enqueue(s,x);
	            
	        }
	        else if(ch=='r')
	        {
	            dequeue(s);
	        }
	        else if(ch=='h')
	        {
	            front(s);
	        }
	        else if(ch=='f')
	        {
	            int x;
	            cin>>x;
	            find(s,x);
	        }
	        
	    }
	}
	return 0;
}
/*This is a function problem.You only need to complete the function given below*/
//User function Template for C++
 // Function to push element on rear of queue
void enqueue(queue<int> &s,int x){
   //Your code here
   s.push(x);
   return;
}
 // Function to remove front element from queue
void dequeue(queue<int> &s){
    //Your code here
    s.pop();
    return;
}
 // Function to find the front element of queue
void front(queue<int> &s){
    int x= s.front();
    cout<<x<<" "<<endl;
    return;
}
 // Function to find the element in queue
void find(queue<int> s, int val){
    bool exists=false;
    
    //Your code here
    queue<int> temp = s;
    
    while(!temp.empty()){
        
        if(temp.front() == val){
            exists = true;
            break;
        }
        
        temp.pop();
    }
    if(exists){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
}