/*****

https://www.geeksforgeeks.org/maximum-sum-such-that-no-two-elements-are-adjacent/

****/

#include <bits/stdc++.h>
using namespace std;

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
	    
	    long long incl = arr[0];
	    long long excl = 0;
	    long long new_excl;
	    
	    for(int i=1; i<n; i++){
	        
	        new_excl = (incl > excl) ? incl : excl;
	        
	        incl = excl  + arr[i];
	        excl =  new_excl;
	    }
	    
	    cout<<((incl > excl) ? incl : excl)<<endl;
	}
	return 0;
}