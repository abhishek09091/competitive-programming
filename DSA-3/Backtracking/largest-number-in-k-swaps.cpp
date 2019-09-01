/********

https://www.geeksforgeeks.org/find-maximum-number-possible-by-doing-at-most-k-swaps/

*********/
#include <bits/stdc++.h>
using namespace std;
//Position this line where user code will be pasted.
// Driver code
int main()
{
    int t,k;
    string str;
    cin>>t;
    while(t--)
    {
    cin>>k;
    cin>>str;
    string max=str;
    findMaximumNum(str, k, max);
    cout << max << endl;
    }
    return 0;
}


/*This is a function problem.You only need to complete the function given below*/
// function to find maximum integer possible by
// doing at-most K swap operations on its digits
void findMaximumNum(string str, int k, string& max){
    // Your code here
    if(k == 0){
        return;
    }
    
    int n = str.length();
    
    for(int i=0; i<n-1; i++){
        
        for(int j=i+1; j<n; j++){
            
            if(str[i] < str[j]){
                
                swap(str[i],str[j]);
                
                if(str.compare(max) > 0){
                    max = str;
                }
                
                findMaximumNum(str,k-1,max);
                
                swap(str[i],str[j]);
            }
        }
    }
}
