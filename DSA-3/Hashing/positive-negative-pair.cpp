/*******

Approach of the given program:

https://www.geeksforgeeks.org/pairs-of-positive-negative-values-in-an-array/

********/
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    
	    int arr[n];
	    set<int> s;
	    for(int i=0; i<n; i++){
	        cin>>arr[i];
	        if(arr[i] < 0){
	            s.insert(-1 * arr[i]);
	        }
	    }
	    
	    sort(arr,arr+n);
	    bool flag = false;
	    for(int i=0; i<n; i++){
	        
	        if(arr[i] > 0){
	            
	            if(s.find(arr[i]) != s.end()){
	                flag = true;
	                cout<<arr[i]<<" "<<-1 * arr[i]<<" ";
	                s.erase(arr[i]);
	            }
	        }
	    }
	    
	    if(!flag){
	        cout<<"0";
	    }
	    cout<<endl;
	}
	return 0;
}