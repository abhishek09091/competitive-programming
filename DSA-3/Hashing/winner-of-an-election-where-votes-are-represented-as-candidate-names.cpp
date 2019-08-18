#include <iostream>
#include <map>
#include <algorithm>
#include <cstdlib>
#include<bits/stdc++.h>
using namespace std;
void winner(string arr[],int n);
int main()
{
    int t;
    cin>>t;
    
    for(int i=0;i<t;i++)
    {
        
        
        int n;
        cin>>n;
        
        string arr[n];
        
        for (int i=0;i<n;i++)
        cin>>arr[i];
        
        winner(arr,n);
        
        cout<<endl;
        
        
    }
    return 0;
}


/*This is a function problem.You only need to complete the function given below*/
// Funtion to find winner
// arr[]: input array
// n: size of array
void winner(string arr[],int n){
    //Your code here
    map<string,int> m;
    
    for(int i=0; i<n; i++){
        
        if(m.find(arr[i]) != m.end()){
            m[arr[i]]++;
        }else{
            m[arr[i]] = 1;
        }
    }
    
    int max_vote = 0;
    string result = "";
    map<string,int> ::iterator it;
    
    for(it = m.begin(); it != m.end(); it++){
        
        if(it->second > max_vote){
            result = it->first;
            max_vote = it->second;
        }
    }
    
    cout<<result<<" "<<max_vote;
    
    return;
}