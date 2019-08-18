
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;
int sumExists(int arr[], int sizeOfArray, int sum);
//Position this line where user code will be pasted.
int main() {
    
    int testcases;
    cin>>testcases;
    while(testcases--)
    {
        int sizeOfArray;
        cin>>sizeOfArray;
        
        int arr[sizeOfArray];
        
        for(int i=0;i<sizeOfArray;i++)
        cin>>arr[i];
        int sum;
        cin>>sum;
        
        cout<<sumExists(arr,sizeOfArray,sum)<<endl;
        
        
    }
    
    
    
	return 0;
}


/*This is a function problem.You only need to complete the function given below*/
//User function Template for C++
//You need to complete this function, Geeks
int sumExists(int arr[], int sizeOfArray, int sum){
   //Your code here.
   map<int,int> m;
   for(int i=0; i<sizeOfArray; i++){
       
       if(m.find(sum - arr[i]) != m.end()){
           return 1;
       }else{
           m[arr[i]] = 1;
       }
       
   }
   
   return 0;
}