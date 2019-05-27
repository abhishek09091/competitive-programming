/**

https://www.geeksforgeeks.org/write-a-c-program-to-print-all-permutations-of-a-given-string/

Input:
ABC

Output:
ABC
ACB
BAC
BCA
CBA
CAB

O(n*n!) Note that there are n! permutations and it requires O(n) time to print a a permutation.

**/

#include<bits/stdc++.h>
using namespace std;

void char_swap(char *x,char *y){
	char temp = *x;
	*x = *y;
	*y = temp;
}

void permute(char *str,int l,int r){
		
	int i;
	
	if(l == r){
		cout<<str<<endl;
	}else{
		for(i=l; i<=r; i++){
			char_swap((str+l),(str+i));
			permute(str,l+1,r);
			char_swap((str+l),(str+i));
		}
	}
}
int main(){

	int t;
	cin>>t;
	
	while(t--){
		
		int n;
		cin>>n;
		char str[n];
		for(int i=0; i<n; i++){
			char ch;
			cin>>ch;
			str[i] = ch;
		}
		char ch[] = "ABC";
		permute(str,0,n-1);
		
	}
	return 0;
}