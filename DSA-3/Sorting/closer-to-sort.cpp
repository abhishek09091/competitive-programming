#include <iostream>
using namespace std;
//Position this line where user code will be pasted.
int main() {
    
    cin.tie(NULL);
    
	int t;
	cin >> t;
	
	while(t--){
	  
	    int n;
	    cin >> n;
	    int arr[n];
	    for(int i = 0;i<n;i++){
	        cin >> arr[i];
	    }
	    int x;
	    cin >> x;
	    
	    int res = closer(arr,n,x);
	    
	    cout << res << endl;
	}
	
	return 0;
}
/*This is a function problem.You only need to complete the function given below*/
// Function to find the index of x
// arr[]: input array
// n: size of array
// x: element to find index
int closer(int arr[],int n, int x){
      int left = 0;
    int right = n - 1;
    
    while(left <= right){
        
        int mid = (left + right) /2;
      //  cout<<"mid: "<<mid<<endl; 
        if(arr[mid] == x){
            return mid;
        }else if((mid >0 && arr[mid - 1] == x)){
            return mid - 1;
        }else if( (mid <n-1 && arr[mid + 1] == x)){
            return mid + 1;
        }else if(arr[mid] > x){
            right = mid - 2;
        }else{
            left = mid + 2;
        }
        //cout<<"left: "<<left<<" right: "<<right<<endl;
        
    }
    
    return -1;   
}