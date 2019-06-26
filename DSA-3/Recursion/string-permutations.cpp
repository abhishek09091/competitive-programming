/**

https://www.geeksforgeeks.org/write-a-c-program-to-print-all-permutations-of-a-given-string/

O(n*n!) Note that there are n! permutations and it requires O(n) time to print a a permutation.

Input:

2
ABC
xz

Output:

ABC ACB BAC BCA CBA CAB 
xz zx 

**/

#include<bits/stdc++.h>

using namespace std;

void permute(string str,int l,int r){
	
	if(l == r){
		cout<<str<<" ";
		return;
	}else{
		for(int i=l; i<=r; i++){
			swap(str[l],str[i]);
			permute(str,l+1,r);
			swap(str[l],str[i]);
		}
	}
}

int main(){

	int t;
	cin>>t;
	
	while(t--){
		string str;
		cin>>str;
		permute(str,0,str.length()-1);
		cout<<endl;
	}
	return 0;
}