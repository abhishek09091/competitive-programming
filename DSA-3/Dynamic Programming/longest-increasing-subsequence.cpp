/**********

geeksforgeeks.org/longest-increasing-subsequence-dp-3/

*********/

#include<bits/stdc++.h>
using namespace std;
int longestSubsequence(int, int[]);
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        cout << longestSubsequence(n, a) << endl;
    }
}


/*This is a function problem.You only need to complete the function given below*/

// Function to find longest subsequence
int longestSubsequence(int n, int a[]){
    
   // your code here
   int list[n];
   
   list[0] = 1;
   
   for(int i=1; i<n; i++){
       
       list[i] = 1;
       
       for(int j=0; j<i; j++){
           
           if(a[i] > a[j] && list[i] < list[j] + 1){
               list[i] = list[j] + 1;
           }
       }
   }
   
   return *max_element(list, list+n); ;
    
}
