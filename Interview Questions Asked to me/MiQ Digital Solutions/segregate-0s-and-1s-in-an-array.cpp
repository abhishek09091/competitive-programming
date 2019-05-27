/**

https://www.geeksforgeeks.org/segregate-0s-and-1s-in-an-array-by-traversing-array-once/


Input:
1
10
0 1 0 1 0 0 1 1 1 0

Output:
0 0 0 0 0 1 1 1 1 1

**/

#include<bits/stdc++.h>
using namespace std;

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
		
		int i=0 , j = n -1;
		
		while(i<j){
			
			while(i<j && vec[i] == 0){
				i++;
			}
			
			
			while(j>i && vec[j] == 1){
				j--;
			}
			
			if(i < j){
			    vec[i] = 0;
			    vec[j] = 1;
			}
		}
		
		for(int i=0; i<n; i++){
			cout<<vec[i]<<" ";
		}
		
		cout<<endl;
	}
	
	return 0;
}
