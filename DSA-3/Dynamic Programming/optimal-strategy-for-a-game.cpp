/*********

https://www.geeksforgeeks.org/optimal-strategy-for-a-game-dp-31/
https://www.geeksforgeeks.org/optimal-strategy-for-a-game-set-2/

*******/
#include <bits/stdc++.h>
using namespace std;
//Position this line where user code will be pasted.
int main() {
	int T;
	cin>>T;
	while(T--)
	{
	    int N;
	    cin>>N;
	    
	    int A[N];
	    
	    for(int i=0;i<N;i++)
	    cin>>A[i];
	    
	    cout<<maximumAmount(A,N)<<endl;
	    
	}
	return 0;
}

/*This is a function problem.You only need to complete the function given below*/
long long maximumAmount(int arr[], int n) {
    // Your code here
    long long result[n][n];
    
    for(int gap = 0 ; gap<n; gap++){
        
        for(int i=0, j = gap; j<n; i++,j++){
            
            int x = ((i+2)<= j ) ? result[i+2][j] : 0;
            int y = ((i+1)<=(j-1)) ? result[i+1][j-1] : 0;
            int z = ((i) <= (j - 2)) ? result[i][j-2] : 0;
            
            result[i][j] = max(arr[i] + min(x,y) , arr[j] + min(y,z));
            
        }
    }
    
    return result[0][n-1];
}