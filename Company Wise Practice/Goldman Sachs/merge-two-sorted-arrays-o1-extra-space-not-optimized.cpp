/**********

https://www.geeksforgeeks.org/merge-two-sorted-arrays-o1-extra-space/

**********/

#include <bits/stdc++.h>
using namespace std;

void mergeTwoSortedArray(int v1[],int v2[],int m,int n){
    
    for(int i=n-1; i>=0; i--){
        
        int j, last = v1[ m - 1];
        for( j = m-2; j>=0 && v1[j] > v2[i]; j--){
            
            v1[j+1] = v1[j]; 
        }
        
        if(j != m-2 || last > v2[i]){
            
            v1[j+1] = v2[i];
            v2[i] = last;
        }
        
    }
    
    return;
}

int main() {
	//code
	int t,temp;
	cin>>t;
	
	while(t--){
	    
	    int m,n;
	    cin>>m>>n;
	    
	    int v1[m],v2[n];
	    
	    for(int i=0; i<m; i++){
	        cin>>v1[i];
	        
	    }
	    
	    for(int i=0; i<n; i++){
	        cin>>v2[i];
	        
	    }
	    
	    mergeTwoSortedArray(v1,v2,m,n);
	    
	    for(int i=0; i<m; i++){
	        cout<<v1[i]<<" ";
	    }
	    
	    for(int i=0; i<n; i++){
	        cout<<v2[i]<<" ";
	    }
	    
	    cout<<endl;
	}
	return 0;
}