#include<bits/stdc++.h>
using namespace std;

long long power(long long x, long long y) 
{ 
    long long res = 1; // Initialize result 
    
    const unsigned int M = 1000000007;
    while (y > 0) { 
        // If y is odd, multiply x with result 
        if (y & 1) 
            res = (res * x)%M; 
  
        // n must be even now 
        y = y >> 1; // y = y/2 
        x = x * x; // Change x to x^2 
    } 
    return (res)%M; 
}

long long fun (long long N) {
   // Your code goes here
   
   return power(2,N)-1;
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    for(int t_i=0; t_i<T; t_i++)
    {
        long long N;
        cin >> N;

        long long out_;
        out_ = fun(N);
        cout << out_;
        cout << "\n";
    }
}