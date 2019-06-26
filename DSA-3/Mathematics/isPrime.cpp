#include<bits/stdc++.h>

using namespace std;

bool isPrime(int N){
    
	if(N <= 1){
		return false;
	}
	
	if(N <= 3){
		return true;
	}
	
	if(N%2 == 0 || N%3 == 0){
		return false;
	}
	
	for(int i=5; i*i<=N; i=i+6){
		
		if( ( N%i) == 0 || N%(i+2) == 0){
			return false;
		}
	}
	
	return true;
}

int main(){
	
	int t;
	cin>>t;
	
	while(t--){
		
		int n;
		cin>>n;
		
		isPrime(n) ? cout<<"Yes"<<endl : cout<<"No"<<endl;
	}
	return 0;
}