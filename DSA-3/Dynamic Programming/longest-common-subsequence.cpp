/***********

https://www.geeksforgeeks.org/space-optimized-solution-lcs/
https://www.geeksforgeeks.org/longest-common-subsequence-dp-4/

*********/
#include<bits/stdc++.h>
const int mod=1e9+7;
using namespace std;
int lcs(int, int, string, string);
int main(){
	
    int t,n,k,x,y;
    
    cin>>t;
    while(t--)
    {
        cin>>x>>y;          // Take size of both the strings as input
        string s1,s2;
        cin>>s1>>s2;        // Take both the string as input
        
        cout << lcs(x, y, s1, s2) << endl;
    }
    return 0;
}


/*This is a function problem.You only need to complete the function given below*/
// function to find longest common subsequence
int lcs(int x, int y, string s1, string s2){
    
    // your code here
    int res[2][y+1];
    
    
    bool bi;
    
    for(int i=0; i<=x; i++){
        
        bi = i & 1;
        
        for(int j=0; j<=y; j++){
            
            if(j == 0 || i == 0){
                res[bi][j] = 0;
            }else if(s1[i-1] == s2[j-1]){
                res[bi][j] = res[1 - bi][j-1] + 1;
            }else{
                res[bi][j] = max(res[1 - bi][j],res[bi][j-1]);
            }
        }
    }
    
    
    
    return res[bi][y];
    
    
    
}
