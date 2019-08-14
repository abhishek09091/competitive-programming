/*******

https://www.geeksforgeeks.org/find-number-of-triangles-possible/

******/
#include <bits/stdc++.h>
using namespace std;
long long arr[10000000];
//Position this line where user code will be pasted.
int main()
{
    long long size,T;
    
    cin>>T;
    while(T--){
        
    cin>>size;
    for(int i=0;i<size;i++)
     cin>>arr[i];
     
    cout<<findNumberOfTriangles(size ) <<endl;
    }
    return 0;
}


/*This is a function problem.You only need to complete the function given below*/

long long findNumberOfTriangles(long long n){
    //Your code here
    sort(arr, arr + n);
    
    long long count = 0;
    
    for(int i = n - 1; i>=1 ; i--){
        
        int l = 0 , r = i - 1;
        
        while(l < r){
            
            if(arr[l] + arr[r] > arr[i]){
                count += r - l;
                r--;
            }else{
                l++;
            }
        }
    }
    
    return count;
}