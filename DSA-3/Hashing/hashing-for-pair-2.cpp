
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
//Complete this function
int sumExists(int arr[], int sizeOfArray, int sum){
    //Your code here
   set<int> s;
   for(int i=0; i<sizeOfArray; i++){
       
       if(s.find(sum - arr[i]) != s.end()){
           return 1;
       }else{
           s.insert(arr[i]);
       }
       
   }
   
   return 0;
}