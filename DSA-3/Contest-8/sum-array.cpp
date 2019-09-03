/**********


You are given an array A of size N. You need to find the maximum-sum of the array provided that you cannot sum neighboring elements. 
So for each element of the array, you need to find maximum-sum from initial index till the element's index.

Input:
The first line of input contains a number T denoting the number of testcases. T testcases follow. Each testcase contains two lines of input. 
The first line contains the size of the array N. The next line contains elements of the array A separated by spaces.

Output:
For each testcase, print the maximum-sum array.

Constraints:
1 <= T <= 100
1 <= N <= 106
0 <= Ai <= 100

Examples:
Input:
1
5
4 5 6 7 8
Output:
4 5 10 12 18

Explanation:
Testcase1: The given elements are 4 5 6 7 8.
For 4, the maximum sum will be 4 as no element other than 4 from index 0 to 0
For 5, the maximum sum will be 5 as we cannot add 4 and 5(neighboring elements).
For 6, the maximum sum will be 10 as we can add 6 and 4.
For 7, the maximum sum will be 12 as we can add 7 and 5.
For 8, the maximum sum will be 18 as we can add 4 and 6 and 8.




**********/

#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0; i<n; i++){
	        cin>>arr[i];
	    }
	    
	    if(n == 1){
	        cout<<arr[0];
	    }else if(n == 2){
	        cout<<arr[0]<<" "<<arr[1];
	    }else{
	        int res[n] = {0};
	        
	        res[0] = arr[0];
	        res[1] = max(arr[0],arr[1]);
	        
	        for(int i=2; i<n; i++){
	            res[i]=max(res[i-1],res[i-2]+arr[i]);
	        }
	        
	        for(int i=0; i<n; i++){
	            cout<<res[i]<<" ";
	        }
	        
	    }
	    
	    cout<<endl;
	}
	return 0;
}