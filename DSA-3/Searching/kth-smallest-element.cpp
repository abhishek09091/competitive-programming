/*********

https://www.geeksforgeeks.org/kth-smallestlargest-element-unsorted-array/
https://www.geeksforgeeks.org/kth-smallestlargest-element-unsorted-array-set-2-expected-linear-time/
https://www.geeksforgeeks.org/kth-smallestlargest-element-unsorted-array-set-3-worst-case-linear-time/

*********/

#include <bits/stdc++.h>
using namespace std;


void swap(int *a,int *b){
    
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[],int l,int r){
    
    int x = arr[r], i = l;
    for(int j=l; j<=r-1; j++){
        if(arr[j] <= x ){
            swap(&arr[j],&arr[i]);
            i++;
        }
    }
    
    swap(&arr[i],&arr[r]);
    return i;
}

int kthSmallestElement(int arr[],int l,int r,int k){
    
    if(k > 0 && k<= r - l + 1){
        
        int position = partition(arr,l,r);
        
        if(position - l == k - 1){
            return arr[position];
        }
        if(position - l > k - 1){
            return kthSmallestElement(arr,l,position-1,k);
        }
        
        return kthSmallestElement(arr,position+1,r,k - position + l - 1);
    }
    
    return INT_MAX;
    
}

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
	    
	    int k;
	    cin>>k;
	    
	    cout<<kthSmallestElement(arr,0,n-1,k)<<endl;
	    
	}
	return 0;
}