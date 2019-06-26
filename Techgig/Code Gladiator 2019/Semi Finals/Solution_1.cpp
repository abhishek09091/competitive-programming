#include<bits/stdc++.h>
using namespace std;

int b_represent(int num){
	
	int bit = 0;
	for(int i=1; (num / i ) != 0; i *= 10){
		int r = (num / i) % 10;
		bit |= 1 << r;
	}
	
	return bit;
}

int find_sum_with_unique_digit(int d_al,vector<int> vec,vector<int> res){
	
	if(d_al == 0){
		return vec[d_al] = 0;
	}
	
	if(vec[d_al] != -1){
		return vec[d_al];
	}
	
	int result = 0;
	for(int i =0; i<res.size(); i++){
		
		int b_mask = b_represent(res[i]);
		if((d_al | b_mask) == d_al){
			result = max(find_sum_with_unique_digit(d_al ^ b_mask,vec,res)+res[i],result);
		}
	}
	
	return vec[d_al] = result;
}


int main(){
	
	int t;
	cin>>t;
	
	while(t--){
		
		int n,temp;
		cin>>n;
		
		vector<int> vec;
		for(int i=0; i<n; i++){
			cin>>temp;
			vec.push_back(temp);
		}
		
		vector<int> res;
		for(int i=0; i<1024; i++){
			res.push_back(-1);
		}
		
		int result = 0;
		for(int i=0; i<1024; i++){
			result = max(result,find_sum_with_unique_digit(i,res,vec));
		}
		
		cout<<result<<endl;
	}
}

