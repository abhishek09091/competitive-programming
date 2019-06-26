#include<bits/stdc++.h>

using namespace std;

long long int get_nearest_perfect_square(long long int n){
	
	long long int above_num = ceil(sqrt(n+1)) * ceil(sqrt(n+1));
	long long int below_num = floor(sqrt(n-1)) * floor(sqrt(n-1));
	
	long long int diff_1 = n - above_num;
	long long int diff_2 = below_num - n;
	
	if(diff_1 == diff_2){
		return below_num;
	}else if(diff_1 > diff_2){
		return above_num;
	}else{
		return below_num;
	}
}


int main(){
	
	int t;
	cin>>t;
	while(t--){
		long long int n;
		cin>>n;
		cout<<get_nearest_perfect_square(n)<<endl;
	}
	
	return 0;
}