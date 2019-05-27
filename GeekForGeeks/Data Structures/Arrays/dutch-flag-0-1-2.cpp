/**

https://www.geeksforgeeks.org/sort-an-array-of-0s-1s-and-2s/

Input:

1
12
0 1 1 0 1 2 1 2 0 0 0 1

Output:

0 0 0 0 0 1 1 1 1 1 2 2

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
		
		int low = 0;
		int mid = 0;
		int high = n - 1;
		
		while(mid <= high){
			
			switch(vec[mid]){
				case 0: swap(vec[low++],vec[mid++]);
						break;
				case 1: mid++;
						break;
				case 2: swap(vec[high--],vec[mid]);
						break;
			}
			
		}
		
		for(int i=0; i<n; i++){
			cout<<vec[i]<<" ";
		}
		cout<<endl;
		
	}


}