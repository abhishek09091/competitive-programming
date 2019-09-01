/********

https://www.geeksforgeeks.org/longest-consecutive-subsequence/

*******/
#include <bits/stdc++.h>
using namespace std;
int findLongestConseqSubseq(int arr[], int n);
 
// Driver program
int main(){
 int  t,n,i,a[100001];
 cin>>t;
 while(t--){
  cin>>n;
  for(i=0;i<n;i++)
  cin>>a[i];
  cout<<findLongestConseqSubseq(a, n)<<endl;
 }
      
    return 0;
}

/*This is a function problem.You only need to complete the function given below*/
int findLongestConseqSubseq(int arr[], int n){
  //Your code here
  unordered_set<int> s;
  
  int ans = 0;
  
  for(int i=0; i<n ; i++){
      s.insert(arr[i]);
  }
  
  for(int i=0; i<n; i++){
      
      if(s.find(arr[i]-1) == s.end()){
          
          int j = arr[i];
          while(s.find(j) != s.end()){
              j++;
          }
          
          ans = max(ans,j - arr[i]);
      }
  }
  
  
  return ans;
  
}