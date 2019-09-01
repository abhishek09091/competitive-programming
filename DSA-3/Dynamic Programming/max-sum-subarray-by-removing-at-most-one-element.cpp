/********

https://www.geeksforgeeks.org/maximum-sum-subarray-removing-one-element/

********/
#include <bits/stdc++.h>
using namespace std;
int maxSumSubarray(int [], int );
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		
		cout<<maxSumSubarray(a,n)<<endl;
	}
}


/*This is a function problem.You only need to complete the function given below*/
/*You are required to complete below method */
int maxSumSubarray(int A[], int n){
    //Your code here
    int frwd[n] , bwd[n];
    frwd[0] = A[0];
    int curr_max = A[0] , max_so_far = A[0];
    
    for(int i=1; i<n; i++){
        
        curr_max = max(A[i],A[i] + curr_max);
        max_so_far = max(curr_max,max_so_far);
        
        frwd[i] = curr_max;
    }
    
    
    curr_max = max_so_far = bwd[n-1] = A[n-1];
    
    for(int i=n-2; i>=0; i--){
        
        curr_max = max(A[i],curr_max + A[i]);
        max_so_far = max(curr_max,max_so_far);
        
        bwd[i] = curr_max;
    }
    
    int res = max_so_far;
    
    for(int i=1; i<n-1; i++){
        
        res = max(res , frwd[i-1] + bwd[i+1]);
    }
    
    return res;
}