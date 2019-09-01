/******



******/

#include <bits/stdc++.h>
using namespace std;
//Position this line where user code will be pasted.
int main() {
	int testcases;
	cin>>testcases;
	while(testcases--)
	{
	    int sizeOfArray;
	    cin>>sizeOfArray;
	    
	    int arr[sizeOfArray];
	    
	    for(int i=0;i<sizeOfArray;i++)
	    cin>>arr[i];
	    
	    cout<<maximumSum(arr,sizeOfArray)<<endl;
	    
	}
	return 0;
}

/*This is a function problem.You only need to complete the function given below*/
//User function Template for C++
//Complete this function
long long maximumSum(int arr[], int sizeOfArray)
{
   long long dp[sizeOfArray]={0}; //declaring dp array 
   dp[0]=arr[0]; //the first element is maximum till now
   long long answer=arr[0];
   for(int i=1;i<sizeOfArray;i++){
       //The maximum sum at dp[i] will be max of (current array element+dp[i-1]) and (current array element)
       //Complete this code
        if(dp[i-1] < 0){
            dp[i] = arr[i];
        }else{
            dp[i] = arr[i] + dp[i-1];
        }
       answer=max(answer,dp[i]);
   }
   //To print the dp array
   for(int i=0;i<sizeOfArray;i++)
   {
       cout<<dp[i]<<" ";
   }
   cout<<endl;
   //Printing over
   
   return answer;
}
