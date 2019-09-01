/********

https://www.geeksforgeeks.org/minimum-number-platforms-required-railwaybus-station/

********/
// Program to find minimum number of platforms
// required on a railway station
#include <bits/stdc++.h>
using namespace std;
//Position this line where user code will be pasted.
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
        int dep[n];
           for(int i=0;i<n;i++)
        cin>>arr[i];
        for(int j=0;j<n;j++){
            cin>>dep[j];
        }
    cout <<findPlatform(arr, dep, n)<<endl;
    } 
   return 0;
}

/*This is a function problem.You only need to complete the function given below*/

int findPlatform(int arr[], int dep[], int n){
	// Your code here
	sort(arr,arr+n);
	sort(dep,dep+n);
	
	int result = 1 , platform_needed = 1;
	
	int i = 1 , j = 0;
	
	while(i < n && j < n){
	    
	    if(arr[i] <= dep[j]){
	        platform_needed++;
	        i++;
	        
	        if(platform_needed > result){
	            result = platform_needed;
	        }
	    }else{
	        platform_needed--;
	        j++;
	    }
	}
	
	return result;
}
