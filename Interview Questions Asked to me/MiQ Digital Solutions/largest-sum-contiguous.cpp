/**

https://www.geeksforgeeks.org/largest-sum-contiguous-subarray/


Input:

1
8
-2 -3 4 -1 -2 1 5 -3

Output:

7

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
		
		
		int max_sum_so_far = vec[0];
		int curr_max = vec[0];
		
		for(int i=1; i<n; i++){
			
			curr_max = max(vec[i],vec[i]+curr_max);
			max_sum_so_far = max(curr_max,max_sum_so_far);
		}
		
		cout<<max_sum_so_far<<endl;
	}
	
	return 0;
}