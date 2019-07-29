/*********

https://www.geeksforgeeks.org/count-number-ways-reach-given-score-game/

********/

#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--){
	    int n;
	    cin>>n;
	    
	    int arr[n+1];
	    
	    for(int i=0; i<n+1; i++){
	        arr[i] = 0;
	    }
	    
	    arr[0] = 1;
	    
	    for(int i=3; i<=n; i++){
	        arr[i] += arr[i-3];
	    }
	    
	    for(int i=5; i<=n; i++){
	        arr[i] += arr[i-5];
	    }
	    
	    for(int i=10; i<=n; i++){
	        arr[i] += arr[i-10];
	    }
	    
	    cout<<arr[n]<<endl;
	}
	return 0;
}