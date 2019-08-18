/******

Hint of the below Question
https://www.geeksforgeeks.org/print-all-subarrays-with-0-sum/

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
	    
	    int arr[n];
	    
	    for(int i=0; i<n; i++){
	        cin>>arr[i];
	    }
	    
	    int count = 0;
	    int sum = 0;
	    unordered_map<int,int> m;
	    m[0]++;
	    
	    for(int i=0; i<n; i++){
	        
	        sum += arr[i];
	        
	        if(m.find(sum) != m.end()){
	           count += m[sum];
	        }
	        m[sum]++;
	    }
	    
	    cout<<count<<endl;
	}
	return 0;
}