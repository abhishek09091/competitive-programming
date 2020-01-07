/*********

https://www.geeksforgeeks.org/number-subarrays-product-less-k/

********/

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
	    long long mul = 1;
	    for(int start = 0 , end = 0; end<n; end++){
	        
	        mul *= arr[end];
	        
	        while(start < end && mul >=k){
	            mul /= arr[start++];
	        }
	        
	        if(mul < k){
	            count += end - start + 1;
	        }
	    }
	    
	    cout<<count<<endl;
	}
	return 0;
}