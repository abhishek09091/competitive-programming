/********

https://www.geeksforgeeks.org/given-a-string-find-its-first-non-repeating-character/

*******/

#include <bits/stdc++.h>
using namespace std;
#define NO_0F_CHARS 256
int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    
	    int n;
	    cin>>n;
	    
	    string str;
	    cin>>str;
	    
	    pair<int,int> arr[NO_0F_CHARS];
	    
	    for(int i=0; i<n; i++){
	        
	        arr[str[i]].first++;
	        arr[str[i]].second = i;
	    }
	    
	    int res = INT_MAX;
	    
	    for(int i=0; i<NO_0F_CHARS; i++){
	            
	            if(arr[i].first == 1){
	                res = min(res,arr[i].second);
	            }
	    }
	    
	    if(res == INT_MAX){
	        cout<<"-1"<<endl;
	    }else{
	        cout<<str[res]<<endl;
	    }
	}
	return 0;
}