/**********

https://www.geeksforgeeks.org/ways-to-write-n-as-sum-of-two-or-more-positive-integers/

**********/
#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
int countWays(int);
// Driver program
int main()
{
    int t;
    cin >> t;
    
    while(t--)
    {
        int n;
        cin>>n;
        cout<<countWays(n)<<endl;
    }
    return 0;
}

/*This is a function problem.You only need to complete the function given below*/
// function to count number of ways in which n can
// be written as sum of two or more than two integers
#define MOD 1000000007
int countWays(int n){
    // your code here
    long long int table[n+1] = {0};
    table[0] = 1;
    
    for(int i=1; i<n; i++){
        for(int j=i; j<=n; j++){
            table[j] = (table[j] + table[j-i]) % MOD;
        }
    }
    
    return table[n] % MOD;
}