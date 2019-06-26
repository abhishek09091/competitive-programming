/***



https://www.geeksforgeeks.org/minimum-number-of-consecutive-sequences-that-can-be-formed-in-an-array/

Input :

3
5
-3 -2 -1 0 2
7
3 4 0 2 6 5 10
5
1 7 3 5 10

Output:

2
3
5



***/

#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int t;
	cin>>t;
	
	while(t--){
		
		int n;
		cin>>n;
		
		vector<int> vec;
		
		for(int i=0; i<n; i++){
			int temp;
			cin>>temp;
			vec.push_back(temp);
		}
		
		sort(vec.begin(),vec.end());
		
		int count = 1;
		for(int i=0; i<n-1; i++){
			
			if(vec[i]+1 != vec[i+1]){
				count++;
			}
		}
		
		cout<<count<<endl;
	}
	
	return 0;
}