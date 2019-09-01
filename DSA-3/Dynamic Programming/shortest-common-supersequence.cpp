/*********

https://www.geeksforgeeks.org/shortest-common-supersequence/

*********/

#include <bits/stdc++.h>
using namespace std;

int lcs(string str1,string str2){
    int n = str1.length();
    int m = str2.length();
    
    int store[2][m + 1];
    
    bool bi;
    
    for(int i=0; i<=n; i++){
        
        bi = i & 1;
        
        for(int j=0; j<=m; j++){
            
            if(i == 0 || j == 0){
                store[bi][j] = 0;
            }else if(str1[i-1] == str2[j-1]){
                store[bi][j] = store[1 - bi][j - 1] + 1;
            }else{
                store[bi][j] = max(store[1 - bi][j],store[bi][j - 1]);
            }
            
        }
    }
    
    return store[bi][m];
    
}

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    string str1;
	    string str2;
	    cin>>str1>>str2;
	    int ans = str1.length() + str2.length() - lcs(str1,str2);
	    cout<<ans<<endl;
	}
	return 0;
}