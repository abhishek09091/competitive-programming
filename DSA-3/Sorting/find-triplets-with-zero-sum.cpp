/********

https://www.geeksforgeeks.org/find-triplets-array-whose-sum-equal-zero/

*********/
#include<bits/stdc++.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
bool findTriplets(int arr[], int n);
int main()
{
    int t;
	cin>>t;
	while(t--){
    	int n;
    	cin>>n;
    	int arr[n]={0};
    	for(int i=0;i<n;i++)
    		cin>>arr[i];
        if(findTriplets(arr, n))
        cout<<"1"<<endl;
        else 
        cout<<"0"<<endl;
	}
    return 0;
}

/*This is a function problem.You only need to complete the function given below*/

/* You are required to complete the function below
*  arr[]: input array
*  n: size of array
*/
bool findTriplets(int arr[], int n){ 
    //Your code here
    sort(arr,arr+n);
    
    for(int i=0; i<n-2; i++){
        
        int low = i + 1;
        int high = n-1;
        int fix = arr[i];
        
        while(low < high){
            
            if(fix + arr[low] + arr[high] == 0){
                return true;
            }else if(fix + arr[low] + arr[high] < 0){
                low++;
            }else{
                high--;
            }
        }
    }
    
    return false;
}