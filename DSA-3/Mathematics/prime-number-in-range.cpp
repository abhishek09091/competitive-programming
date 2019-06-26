#include<bits/stdc++.h>
using namespace std;


/**

Create a list of consecutive integers from 2 to n: (2, 3, 4, …, n).

Initially, let p equal 2, the first prime number.

Starting from p2, count up in increments of p and mark each of these numbers greater than or equal to p2 itself in the list. 
These numbers will be p(p+1), p(p+2), p(p+3), etc..

Find the first number greater than p in the list that is not marked. If there was no such number, stop. 
Otherwise, let p now equal this number (which is the next prime), and repeat from step 3.


**/

void prime_number_in_range(int n){
	
	bool prime[n+1];
	
	memset(prime,true,sizeof(prime));
	
	prime[0] = prime[1] = 0;
	
	for(int i=2; i*i<=n; i++){
		
		if(prime[i] == true){
			
			for(int j=i*i; j<=n; j += i){
				prime[j] = false;
			}
		}
	}
	
	
	for(int i=0; i<=n; i++){
		if(prime[i]){
			cout<<i<<" ";
		}
	}
	cout<<endl;
	
	return;
}

int main(){
	
	int t;
	cin>>t;
	
	while(t--){
		
		int n;
		cin>>n;
	    prime_number_in_range(n);
		
	}
	
	return 0;
}