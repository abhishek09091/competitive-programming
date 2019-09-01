/********

https://www.geeksforgeeks.org/maximum-sum-such-that-no-two-elements-are-adjacent/
https://www.geeksforgeeks.org/find-maximum-possible-stolen-value-houses/

*******/
//Initial Template for C++
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
long long maximumSum(int arr[], int sizeOfArray){
  //Your code here
  int n = 0;
  for(int i=0; i<sizeOfArray; i++){
      if(arr[i] < 0){
          n++;
      }
  }
  
  if(n == sizeOfArray){
      long long res = LLONG_MIN;
      
      for(int i=0; i<sizeOfArray; i++){
          if(res < arr[i]){
              res = arr[i];
          }
      }
      
      return res;
  }else{
      
      long long excl = 0;
      long long incl = arr[0];
      long long excl_new;
      
      for(int i=1; i<sizeOfArray; i++){
          
          excl_new = (incl > excl) ? incl : excl;
          
          incl = excl + arr[i];
          excl = excl_new;
      }
      
      return ((incl > excl) ? incl : excl);
      
  }
}
