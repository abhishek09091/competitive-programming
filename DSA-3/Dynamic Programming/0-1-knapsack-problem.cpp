/*********

https://www.youtube.com/watch?v=xCbYmUPvc2Q&t=4s

https://www.geeksforgeeks.org/0-1-knapsack-problem-dp-10/
https://www.geeksforgeeks.org/space-optimized-dp-solution-0-1-knapsack-problem/


********/
#include<bits/stdc++.h>
using namespace std;
//Position this line where user code will be pasted.
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n, w;
        cin>>n>>w;
        int val[n];
        int wt[n];
        
        for(int i=0;i<n;i++)
            cin>>val[i];
        
        for(int i=0;i<n;i++)
            cin>>wt[i];
        
        cout<<knapSack(w, wt, val, n)<<endl;
        
    }
	return 0;
}

/*This is a function problem.You only need to complete the function given below*/
// Returns the maximum value that  
// can be put in a knapsack of capacity W 
int knapSack(int W, int wt[], int val[], int n) { 
   // Your code here
   int store[n+1][W+1];
   
   for(int i=0; i<=n; i++){
       for(int j=0; j<=W; j++){
           
           if(i == 0 || j == 0){
               store[i][j] = 0;
           }else if(wt[i-1] <= j){
               store[i][j] = max(val[i-1] + store[i-1][j - wt[i-1]],store[i-1][j]);
           }else{
               store[i][j] = store[i-1][j];
           }
       }
   }
   
   return store[n][W];
}
