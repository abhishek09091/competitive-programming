/**
https://www.geeksforgeeks.org/primality-test-set-1-introduction-and-school-method/

**/


#include<bits/stdc++.h>
using namespace std;


bool isprime_brute_force_prime(int n){
	
	if(n == 0 || n == 1){
		return false;
	}
	
	
	
	for(int i=2; i<n; i++){
		
		if(!(n%i)){
			return false;
		}
	}
	
	return true;
}

/**

1)	Instead of checking till n, we can check till √n because a larger factor of n must be a multiple of smaller factor that has been already checked.

2)	The algorithm can be improved further by observing that all primes are of the form 6k ± 1, with the exception of 2 and 3. 
	This is because all integers can be expressed as (6k + i) for some integer k and for i = -1, 0, 1, 2, 3, or 4; 
	2 divides (6k + 0), (6k + 2), (6k + 4); and 3 divides (6k + 3). So a more efficient method is to test if n is divisible by 2 or 3, 
	then to check through all the numbers of form 6k ± 1. 

**/

bool isprime_school_method(int n){
	
	if(n<= 1) return false;
	
	if(n<= 3) return true;
	
	if(n%2 == 0 || n%3 == 0){
		return false;
	}
	
	for(int i=5; i*i<=n; i=i+6){
		
		if(n%i==0 || n%(i+2)==0){
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
		if(isprime_school_method(n)){
			cout<<"prime"<<endl;
		}else{
			cout<<"not_prime"<<endl;
		}
			
	}
	
	return 0;
}