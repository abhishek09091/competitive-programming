/**

https://www.geeksforgeeks.org/powet-set-lexicographic-order/

**/

#include<bits/stdc++.h>

using namespace std;


void power_set_recursion(string str,int n,vector<string> &vec,int index = -1,string curr = ""){
	
	if(n == index){
		return;
	}
	
	vec.push_back(curr);
	
	for(int i= index + 1; i<n; i++){
		
		curr += str[i];
		power_set_recursion(str,n,vec,i,curr);
		
		curr = curr.erase(curr.size()-1);
	}
	
	return;
	
}

vector <string> powerSet(string str){
   //Your code here
	vector<string> vec;
	power_set_recursion(str,str.length(),vec);
	sort(vec.begin(),vec.end());
	return vec;
   
}

int main(){
	
	int t;
	cin>>t;
	
	while(t--){
		string str;
		cin>>str;
		vector<string> vec = powerSet(str);
		
		for(int i=0; i < vec.size(); i++){
			cout<<vec[i]<<" ";
		}
		cout<<endl;
		
	}
	return 0;
}