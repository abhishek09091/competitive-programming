/********

https://www.geeksforgeeks.org/check-if-two-arrays-are-equal-or-not/

*******/

#include <bits/stdc++.h>
using namespace std;

bool compareArray(long long int arr1[],long long int arr2[],long n){
    
    
	    map<long long int,long long int> m;
	    for(long i=0; i<n; i++){
	       
	        if(m.find(arr1[i]) == m.end()){
	            m[arr1[i]] = 1;
	        }else{
	            m[arr1[i]]++;
	        }
	    }
	    
	    for(long i=0; i<n; i++){
	       
	        if(m.find(arr2[i]) == m.end()){
	           
	             return false;
	            
	        }
	        if(m[arr2[i]] == 0){
	            return false;
	        }
	        
	        m[arr2[i]]--;
	    }
	    
	    return true;
}

int main() {
	//code
	int t;
	cin>>t;
	
	while(t--){
	    long n;
	    cin>>n;
	    long long int arr1[n] , arr2[n];
	    
	    for(long i=0; i<n; i++){
	      cin>>arr1[i];  
	    }
	    
	    for(long i=0; i<n; i++){
	        cin>>arr2[i];
	    }
	    
	    if(compareArray(arr1,arr2,n)){
	        
	        cout<<1<<endl;
	    }else{
	        cout<<0<<endl;
	    }
	    
	}
	return 0;
}