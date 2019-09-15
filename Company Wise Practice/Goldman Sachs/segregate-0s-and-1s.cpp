/******

https://www.geeksforgeeks.org/segregate-0s-and-1s-in-an-array-by-traversing-array-once/

******/

#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	
	while(t--){
	    int n;
	    cin>>n;
	    
	    int arr[n];
	    
	    for(int i=0; i<n; i++){
	        cin>>arr[i];
	    }
	    
	    int start = 0, end = n - 1;
	    
	    while(start < end){
	        
	        if(arr[start] == 1){
	            swap(arr[start],arr[end]);
	            end--;
	        }else{
	            start++;
	        }
	    }
	    
	    for(int i=0; i<n; i++){
	        cout<<arr[i]<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}