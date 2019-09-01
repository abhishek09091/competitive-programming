#include <bits/stdc++.h>
#include <fstream>
using namespace std;
long long dp[100]={0};
long long findNthFibonacci(int number);
//Position this line where user code will be pasted.
int main()
 {
    
    dp[0]=0;
    dp[1]=1;
    dp[2]=1;
    int testcases;
    cin>>testcases;
    
    while(testcases--)
    {
        int number;
        cin>>number;
        cout<<findNthFibonacci(number)<<endl;
    }
    
	return 0;
}


/*This is a function problem.You only need to complete the function given below*/
//User function Template for C++
//Complete this function
long long findNthFibonacci(int number)
{
  if(dp[number]>0)
  return dp[number];
  
  for(int i=3;i<=number;i++){
//Complete this function do dp[i] = dp[i-1]+dp[i-2]
    dp[i] = dp[i-1] + dp[i-2];
  }
  return dp[number];
  
}