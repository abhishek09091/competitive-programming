
#include <bits/stdc++.h>
using namespace std;
int countNonRepeated(int arr[], int n);
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
	    
	    cout<<countNonRepeated(arr,n)<<endl;
	    
	}
	return 0;
}


/*This is a function problem.You only need to complete the function given below*/
//Complete this function
int countNonRepeated(int arr[], int n){
    //Your code here
    unordered_map<int,int> m;
    
    for(int i=0; i<n; i++){
        
        if(m.find(arr[i]) != m.end()){
            
            m[arr[i]]++;
        }else{
            m[arr[i]] = 1;
        }
    }
    
    int count = 0;
    
    unordered_map<int, int>::iterator itr;
    
    for(itr = m.begin(); itr != m.end(); itr++){
        
        if( (itr->second) == 1){
            count++;
        }
            
        
    }
    
    return count;
}
