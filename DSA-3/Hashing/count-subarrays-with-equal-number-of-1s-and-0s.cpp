/*******

https://www.geeksforgeeks.org/count-subarrays-equal-number-1s-0s/

*******/
#include <bits/stdc++.h>
using namespace std;
long long int countSubarrWithEqualZeroAndOne(int arr[], int n);
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	int n,i;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++)
	cin>>arr[i];
	cout<< countSubarrWithEqualZeroAndOne(arr, n)<<"
";
	}
	return 0;
}


/*This is a function problem.You only need to complete the function given below*/
long long int countSubarrWithEqualZeroAndOne(int arr[], int n)
{
    //Your code here
    long long int count = 0;
    long long int sum = 0;
    unordered_map<long long int,long long int> m;
    
    for(int i=0; i<n; i++){
        
        if(arr[i] == 0){
            arr[i] = -1;
        }
        
        sum += arr[i];
        
        if(sum == 0){
            count++;
        }
        
        if(m[sum]){
            count += m[sum];
        }
        
        if(m[sum] == 0){
            m[sum] = 1;
        }else{
            m[sum]++;
        }
    }
    
    return count;
}