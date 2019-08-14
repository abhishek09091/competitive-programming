/**********

https://www.geeksforgeeks.org/median-of-two-sorted-arrays-of-different-sizes/

*********/

#include <bits/stdc++.h>
using namespace std;

int medianSingle(int arr[],int n){
    if(n == 0){
        return -1;
    }
    if(n%2 == 0){
        return (double) (arr[n/2] + arr[n/2-1])/2;
    }
    
    return arr[n/2];
}

int MO2(int a,int b){
    
    return (a + b) / 2;
}

int MO3(int a,int b,int c){
    
    return a + b + c - max(a,max(b,c)) - min(a,min(b,c));
}

int MO4(int a,int b,int c,int d){
    int maxi = max(a , max(b, max(c,d) ));
    int mini = min(a , min(b, min(c,d) ));
    
    return (a + b + c + d - maxi - mini)/2;
}

int findMedianUtil(int A[],int N,int B[],int M){
    
    if(N == 0){
        return medianSingle(B, M);
    }
    
    if(N == 1){
        
        if(M == 1){
            return MO2(A[0],B[0]);
        }
        
        if(M & 1){
            return MO2(B[M/2],MO3(A[0],B[M/2 - 1],B[M/2 + 1]));
        }
        
        return MO3(B[M/2],B[M/2 - 1],A[0]);
    
        
    }else if(N == 2){
        
        if(M == 2){
            return MO4(A[0],A[1],B[0],B[1]);
        }
        
        if(M & 1){
            return MO3(B[M/2],max(A[0],B[M/2 - 1]),min(A[1],B[M/2 + 1]));
        }
        
        return MO4(B[M/2],B[M/2 - 1],max(A[0],B[M/2 - 2]),min(A[1],B[M/2 + 1]));
    }
    
    int idxA = (N - 1)/2;
    int idxB = (M - 1)/2;
    
    if(A[idxA] <= B[idxB]){
        return findMedianUtil(A + idxA ,N/2 + 1,B, M - idxA);
    }
    
    return findMedianUtil(A ,N/2 + 1,B + idxA, M - idxA);
}


int findMedian( int A[], int N, int B[], int M ){ 
    if (N > M) 
       return findMedianUtil( B, M, A, N ); 
  
    return findMedianUtil( A, N, B, M ); 
} 

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n,m;
	    cin>>n>>m;
	    
	    int arr_1[n];
	    int arr_2[m];
	    
	    for(int i=0; i<n; i++){
	        cin>>arr_1[i];
	    }
	    
	     for(int i=0; i<m; i++){
	        cin>>arr_2[i];
	    }
	    
	    cout<<findMedian(arr_1,n,arr_2,m)<<endl;
	    
	    
	}
	return 0;
}