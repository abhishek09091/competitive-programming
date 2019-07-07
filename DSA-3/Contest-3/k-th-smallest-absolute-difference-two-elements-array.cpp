/******

https://www.geeksforgeeks.org/k-th-smallest-absolute-difference-two-elements-array/

******/

#include <bits/stdc++.h>
using namespace std;

int countPairs(int *a, int n, int mid) { 
    int res = 0; 
    for (int i = 0; i < n; ++i) {
        res += upper_bound(a+i, a+n, a[i] + mid) - 
                                    (a + i + 1);
    }
    return res; 
} 

int main() {
	//code
	int t;
	cin>>t;
	
	while(t--){
	    int n,k;
	    
	    cin>>n>>k;
	    
	    int arr[n];
	    
	    for(int i=0; i<n; i++){
	        cin>>arr[i];
	    }
	    
	    sort(arr,arr + n);
	    
	    int low = arr[1] - arr[0]; 
        for(int i = 1; i <= n-2; ++i){ 
            low = min(low, arr[i+1] - arr[i]);
        }
  
     
        int high = arr[n-1] - arr[0]; 
  
     
        while (low < high){ 
            int mid = (low+high)>>1; 
            if (countPairs(arr, n, mid) < k){ 
                low = mid + 1; 
            }else{
                high = mid;
            }
        } 
  
        cout<<low<<endl;    
	    
	}
	return 0;
}