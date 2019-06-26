/**

How does this recursion work? When we kill k-th person, n-1 persons are left, but numbering starts from k+1 and goes in modular way. 

(k+1)-th person in the original circle is now first person.
n-th person in the original circle is now (n-k)-th person.
1-st person in the original circle is now (n-k+1)-th person.
(k-1)-th person in the original circle is now (n-1)-th person.

So we add (k-1) to the returned position to handle all cases and keep the modulo under n. Finally we add 1 to the result.

This solution is not easy to think at the first moment.

A simple solution that comes to our mind is

(josephus(n-1, k) + k) % n

We add k because we shifted the positions by k after first killing. The problem with the above solution is, the value of (josephus(n-1, k) + k) 
can become n and overall solution can become 0. But positions are from 1 to n. To ensure that, we never get n, we subtract 1 and add 1 later. 
This is how we get

(josephus(n-1, k) + k - 1) % n + 1


**/

#include<bits/stdc++.h>

using namespace std;

int josephus(int n,int k){
	
	if(n == 1){
		return 1;
	}else{
		return (josephus(n-1,k) + k - 1) % n + 1;
	}
}

int main(){

	int t;
	cin>>t;
	
	while(t--){
		
		int n,k;
		cin>>n>>k;
		cout<<josephus(n,k)<<endl;
	}
	return 0;
}