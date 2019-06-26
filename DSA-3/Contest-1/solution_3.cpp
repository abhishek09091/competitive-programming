/**

https://www.geeksforgeeks.org/reduce-a-number-to-1-by-performing-given-operations/

**/

#include<bits/stdc++.h>

using namespace std;

int count_ways(int n){
	
	if(n == 1){
		return 0;
	}
	
	else if(n%2 == 0){
		return 1 + count_ways(n/2);
	}else{
		return 1 + min(count_ways(n-1),count_ways(n+1));
	}
	
	
}

int main(){
	
	int t;
	cin>>t;
	
	while(t--){
		int n;
		cin>>n;
		cout<<count_ways(n)<<endl;
	}
}