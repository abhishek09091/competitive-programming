/********

https://www.geeksforgeeks.org/find-repeated-character-present-first-string/

*******/

#include <bits/stdc++.h>
using namespace std;

#define MAX_NO_CHARS 256

int main() {
	//code
	int t;
	cin>>t;
	
	while(t--){
	    string str;
        cin>>str;
        
        int n = str.length();
        pair<int,int> arr[MAX_NO_CHARS];
        
        for(int i=0; i<n; i++){
            
            arr[str[i]].first++;
            if(arr[str[i]].first == 1){
                arr[str[i]].second = i;
            }
        }
        
        int res = INT_MAX;
        
        for(int i=0; i<MAX_NO_CHARS; i++){
            
            if(arr[i].first > 1){
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