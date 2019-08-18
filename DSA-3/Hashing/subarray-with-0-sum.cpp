/********

https://www.geeksforgeeks.org/find-if-there-is-a-subarray-with-0-sum/

*********/

// A C++ program to find if there is a zero sum
// subarray
#include <bits/stdc++.h>
using namespace std;
bool subArrayExists(int arr[], int n);
// Driver code
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    	if (subArrayExists(arr, n))
		cout << "Yes";
	else
		cout << "No";
	}
	return 0;
}

/*This is a function problem.You only need to complete the function given below*/
//Complete this function
bool subArrayExists(int arr[], int n){
    //Your code here
    unordered_set<int> sumSet;
    int sum = 0;
    
    for(int i=0; i<n; i++){
        
        sum += arr[i];
        
        if(sum == 0 || sumSet.find(sum) != sumSet.end()){
           return true; 
        }
        
        sumSet.insert(sum);
    }
    
    return false;
}
