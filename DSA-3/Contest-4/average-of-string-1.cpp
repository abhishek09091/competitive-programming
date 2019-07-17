/******

https://www.geeksforgeeks.org/average-of-ascii-values-of-characters-of-a-given-string/

*****/

#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	
	while(t--){
	    string s;
	    cin>>s;
        int sum_char = 0; 
        for(int i = 0; i < s.length(); i++) { 
            sum_char += (int)s[i]; 
        } 
        cout<< sum_char / s.length()<<endl; 
	}
	return 0;
}