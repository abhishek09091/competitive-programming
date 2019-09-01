/*******

https://www.geeksforgeeks.org/minimum-number-of-jumps-to-reach-end-of-a-given-array/

********/

#include <bits/stdc++.h>
using namespace std;

int minJumps(int arr[],int n){
    
    if(n == 0 || arr[0] == 0){
        return -1;
    }
    
    int jumps[n] = {0};
    
    for(int i = 1; i<n; i++){
        
        jumps[i] = INT_MAX;
        
        for(int j=0; j<i; j++){
            
            if(i <= j + arr[j] && jumps[j] != INT_MAX){
              jumps[i] = min(jumps[i],jumps[j]+1);
               break; 
            }
        }
    }
    
    if(jumps[n-1] == INT_MAX){
        return -1;
    }else{
        return jumps[n-1];
    }
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
	    
	    cout<<minJumps(arr,n)<<endl;
	}
	return 0;
}