/**********

https://www.geeksforgeeks.org/sort-an-array-according-to-absolute-difference-with-given-value/

*********/
#include <bits/stdc++.h>
using namespace std;
//Position this line where user code will be pasted.
int main()
 {
	int T;
	cin>> T;
	
	while (T--)
	{
	    
	    int N, diff;
	    cin>>N>>diff;
	    int A[N];
	    
	    for(int i = 0; i<N; i++)
	        cin>>A[i];
	   
	    sortABS(A, N, diff);
	    
	    for(int & val : A)
	        cout<<val<<" ";
	    cout<<endl;
	    
	}
	
	return 0;
}

/*This is a function problem.You only need to complete the function given below*/
// Function to sort the given array according to
// the difference with K
// A[]: input array
// N: size of array
int key;

bool comp(int a,int b){
    
    if(abs(key - a) < abs(key - b)){
        return true;
    }else{
        return false;
    }
}
void sortABS(int A[],int N, int k){
   //Your code here
   key = k;
   stable_sort(A,A+N,comp);
   return;
}
