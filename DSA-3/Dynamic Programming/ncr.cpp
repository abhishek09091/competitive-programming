/*******

https://www.geeksforgeeks.org/compute-ncr-p-set-1-introduction-and-dynamic-programming-solution/
https://www.geeksforgeeks.org/binomial-coefficient-dp-9/
https://www.geeksforgeeks.org/compute-ncr-p-set-2-lucas-theorem/
https://www.geeksforgeeks.org/compute-ncr-p-set-3-using-fermat-little-theorem/
https://www.geeksforgeeks.org/space-and-time-efficient-binomial-coefficient/

******/

// A Dynamic Programming based solution to compute nCr % p 
#include<bits/stdc++.h> 
using namespace std; 
const int p = 1e9+7;
int nCrModp(int, int);
// Driver program 
int main() 
{ 
  int t, n, r;
  cin >> t;
  
  while(t--){
      cin >> n >> r;
      cout << nCrModp(n, r) << endl;
  }
  
  return 0; 
}


/*This is a function problem.You only need to complete the function given below*/

// Returns nCr % p 

int nCrModp(int n, int r) { 
  
  // your code here
  int c[r+1] = {0};
  c[0] = 1;
  for(int i=1; i<=n; i++){
      
      for(int j=min(i,r); j>0; j--){
          c[j] = (c[j] + c[j-1])%p;
      }
  }
  
  return c[r] % p;
  
} 
