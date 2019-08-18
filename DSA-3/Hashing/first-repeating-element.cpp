#include <bits/stdc++.h>
using namespace std;
int printFirstRepeated(int arr[],int n);
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    
	    cout<<printFirstRepeated(arr,n)<<endl;
	    
	    
	}
	return 0;
}

/*This is a function problem.You only need to complete the function given below*/

// Function to print the non repeated elements in the array
// arr[]: input array
// n: size of array
int printFirstRepeated(int arr[],int n){
    //Your code here
     unordered_map<int,int> m;
    
    for(int i=0; i<n; i++){
        
        if(m.find(arr[i]) != m.end()){
            m[arr[i]]++;
        }else{
            m[arr[i]] = 1;
        }
    }
    
    
    
    for(int i=0; i<n; i++){
        
        if(m[arr[i]] > 1){
            return i+1;
        }
    }
    
    return -1;
}