#include<bits/stdc++.h>
using namespace std;

bool cal(vector<int> a_vec,vector<int> b_vec){
	
	sort(a_vec.begin(),a_vec.end());
	sort(b_vec.begin(),b_vec.end());
	
	for(int i=0; i<a_vec.size(); i++){
		if(a_vec[i] > b_vec[i]){
			return false;
		}
	}
	
	return true;
}

int main(){
	
	ios_base::sync_with_stdio(false);
	int t;
	cin>>t;
	
	while(t--){
		int n,temp;
		cin>>n;
		
		vector<int> a_vec;
		vector<int> b_vec;
		
		for(int i=0; i<n; i++){
			cin>>temp;
			a_vec.push_back(temp);
		}
		
		for(int i=0; i<n; i++){
			cin>>temp;
			b_vec.push_back(temp);
		}
		
		if(!cal(a_vec,b_vec)){
			cout<<"LOSE"<<endl;
		}else{
			cout<<"WIN"<<endl;
		}
	}
}