/*********

https://www.geeksforgeeks.org/find-a-triplet-that-sum-to-a-given-value/

**********/

#include <bits/stdc++.h>
using namespace std;
//Position this line where user code will be pasted.
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int N,sum;
		cin>>N>>sum;
		int i,A[N];
		for(i=0;i<N;i++)
			cin>>A[i];
        cout <<  find3Numbers(A, N, sum) << endl;
    }
}


/*This is a function problem.You only need to complete the function given below*/

// function to find the triplet which sum to x
bool find3Numbers(int A[], int arr_size, int x){
    //Your code here
    sort(A,A+arr_size);
    
    for(int i=0; i<arr_size-2; i++){
        
        int l = i + 1;
        int r = arr_size - 1;
        
        while(l < r){
            
            if(A[i] + A[l] + A[r] == x){
                return true;
            }else if(A[i] + A[l] + A[r] < x){
                l++;
            }else{
                r--;
            }
        }
    }
    
    return false;
}
