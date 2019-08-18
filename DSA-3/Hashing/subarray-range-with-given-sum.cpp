/*******


https://www.geeksforgeeks.org/number-subarrays-sum-exactly-equal-k/

*******/
#include<bits/stdc++.h>
using namespace std;
int subArraySum(int arr[], int n, int sum);
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,sum=0;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    cin>>sum;
	    cout<<subArraySum(arr, n, sum)<<endl;
	}
	return 0;
}

/*This is a function problem.You only need to complete the function given below*/

int subArraySum(int arr[], int n, int sum){
    //Your code here
    int res = 0;
    
    
    
    unordered_map<int,int> m;
    
    int currSum = 0;
    for(int i=0; i<n ;i++){
        
        currSum += arr[i];
        
        if(currSum == sum){
            res++;
        }
        
        if(m.find(currSum - sum) != m.end()){
            
            res += (m[currSum - sum]);
        }
        
        m[currSum]++;
    }
    
    return res;
    
}