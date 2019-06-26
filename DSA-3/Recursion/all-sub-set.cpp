/**

Input:
2
abc
ba

Output:

abc ab ac a bc b c  

ba b a  

**/

#include<bits/stdc++.h>

using namespace std;

void power_set(string str,int index = 0,string curr=""){
	
	
	int n = str.length();
	
	if(index == n){
		cout<<curr<<" ";
		return;
	}
	
	power_set(str,index + 1, curr + str[index]);
	power_set(str,index+1,curr);
}


int main(){
	
	int t;
	cin>>t;
	while(t--){
		string str;
		cin>>str;
		power_set(str);
		cout<<endl;
	}
	return 0;
}