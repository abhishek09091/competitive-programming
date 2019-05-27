/**

Input :
5
5
-1 7 8 -5 4
4
3 2 1 -1
4
11 12 -2 -1
4
4 5 4 3
4
5 10 4 -1


Output:
48
13
12
44
10

**/

#include<bits/stdc++.h>
using namespace std;


bool** dp; 

vector<vector<int>> display(const vector<int>& v, vector<vector<int>> result) {
	vector<int> temp;
	for (int i = 0; i < v.size(); ++i) {
		cout<<v[i]; 
		temp.push_back(v[i]);
	}
	result.push_back(temp);
	cout<<endl;
	
	return result;
} 

vector<vector<int>> printSubsetsRec(int arr[], int i, int sum, vector<int>& p, vector<vector<int>> result) { 


	if (i == 0 && sum != 0 && dp[0][sum]) { 
		p.push_back(arr[i]); 
		result = display(p,result); 
		return result; 
	} 


	if (i == 0 && sum == 0) { 
		result = display(p,result); 
		return result; 
	} 

	if (dp[i-1][sum]){ 

		vector<int> b = p; 
		printSubsetsRec(arr, i-1, sum, b,result); 
	} 

	if (sum >= arr[i] && dp[i-1][sum-arr[i]]) 	{ 
		p.push_back(arr[i]); 
		printSubsetsRec(arr, i-1, sum-arr[i], p,result); 
	} 
} 
 
vector<vector<int>> printAllSubsets(int arr[], int n, int sum) {
	
	vector<vector<int>> result;
	
	if (n == 0 || sum < 0) 
	return result; 

	 
	dp = new bool*[n]; 
	for (int i=0; i<n; ++i) { 
		dp[i] = new bool[sum + 1]; 
		dp[i][0] = true; 
	} 

	 
	if (arr[0] <= sum) 
	dp[0][arr[0]] = true; 

	 
	for (int i = 1; i < n; ++i) 
		for (int j = 0; j < sum + 1; ++j) 
			dp[i][j] = (arr[i] <= j) ? dp[i-1][j] || 
									dp[i-1][j-arr[i]] 
									: dp[i - 1][j]; 
	if (dp[n-1][sum] == false) { 
		printf("There are no subsets with sum %d\n", sum); 
		return result; 
	} 

	vector<int> p; 
	
	result = printSubsetsRec(arr, n-1, sum, p,result); 
	return result;
}



int findMaxSum(int arr[], int n) 
{ 
  int in = arr[0]; 
  int ex = 0; 
  int exNew; 
  int i; 
  
  for (i = 1; i < n; i++) { 
     
     exNew = (in > ex)? in: ex; 
  
     in = ex + arr[i]; 
     ex = exNew; 
  } 
  
   return ((in > ex)? in : ex); 
} 

int main(){
	
	int t;
	cin>>t;
	while(t--){
		
		int n;
		cin>>n;
		int arr[n];
		for(int i=0; i<n; i++){
			cin>>arr[i];
		}
		
		int result = findMaxSum(arr,n);
		
		vector<vector<int>> result_vector = printAllSubsets(arr,n,result);
		
	}
	return 0;
}
