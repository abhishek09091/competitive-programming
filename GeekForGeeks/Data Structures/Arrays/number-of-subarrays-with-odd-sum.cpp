/*

Given an array, find the number of subarrays whose sum is odd.

Test Cases:
	
Input :
9
5
5 4 4 4 4
6
5 4 4 5 1 3
5
5 5 5 5 5
6
4 4 4 4 4 4
1
4
1
5
1
0
5
0 0 0 0 0
6
5 4 5 4 5 4 5

Output:
5
12
9
0
0
1
0
0
12
	
*/

#include <bits/stdc++.h>
using namespace std;

int oddSumSubArrayBruteForce(int n,int arr[]){
	
	int result = 0;
	
	for(int i=0; i<n; i++){
		int val = 0;
		for(int j=i; j<n; j++){
			val += arr[j];
			
		if(val%2 != 0){
				result++;
			}
		}
	}
	return result;
}


int oddSumSubArrayOptimized(int n,int arr[]){
	
	int result = 0,val = 0;
	
	int counter[2] = {1,0};
	
	for(int i=0; i<n; i++){
		val = (((val + arr[i])%2 + 2)%2);
		
		counter[val]++;
	}
	
	result = counter[0]*counter[1];
	
	return result;
}


int main(){
	
	int t;
	cin>>t;
	while(t--){
		
		int n;
		cin>>n;
		int arr[n];
		int temp;
		for(int i=0; i<n; i++){
			cin>>temp;
			arr[i] = temp;
		}
		cout<<oddSumSubArrayOptimized(n,arr)<<endl;
	}
	
	return 0;
}