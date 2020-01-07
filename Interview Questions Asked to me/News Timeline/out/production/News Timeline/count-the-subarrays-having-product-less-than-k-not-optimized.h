/***********

https://www.geeksforgeeks.org/number-subarrays-product-less-k/

***********/

#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    
	    int n;
	    cin>>n;
	    long long k;
	    cin>>k;
	    long long arr[n];
	    
	    for(int i=0; i<n; i++){
	        cin>>arr[i];
	    }
	    
	    int count = 0;
	    long long mul ;
	    for(int i=0; i<n; i++){
	        
	        if(arr[i]<k){
	            count++;
	        }
	        
	        mul = arr[i];
	        
	        for(int j=i+1; j<n; j++){
	            
	            mul *= arr[j];
	            if(mul<k){
	                count++;
	            }else{
	                break;
	            }
	        }
	    }
	    
	    cout<<count<<endl;
	}
	return 0;
}