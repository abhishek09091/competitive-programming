/*******

https://www.geeksforgeeks.org/sum-of-all-substrings-of-a-string-representing-a-number/
https://www.geeksforgeeks.org/sum-substrings-string-representing-number-set-2-constant-extra-space/

*******/

#include<bits/stdc++.h>
using namespace std;
long long sumSubstrings(string);
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        
        cout << sumSubstrings(s) << endl;
        
    }
    return 0;
}


/*This is a function problem.You only need to complete the function given below*/

// function to find sum of all possible substrings of the given string
long long sumSubstrings(string s){
    
    // your code here
     long long int mf = 1; 
     long long int sum = 0; 
    
    for(int i = s.size()-1; i>=0; i--){
        
        sum += (s[i] - '0')*(i+1)*(mf);
        
        mf = mf * 10 + 1;
    }
    
    return sum;
}
