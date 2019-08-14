/******

https://www.geeksforgeeks.org/merge-two-sorted-arrays/
https://www.geeksforgeeks.org/merge-two-sorted-arrays-o1-extra-space/

******/


#include <bits/stdc++.h> 
using namespace std; 
//Position this line where user code will be pasted.
int main(){ 
	
	int T;
	cin >> T;
	
	while(T--){
	    int n, m;
	    cin >> n >> m;
	    
	    int arr1[n], arr2[m];
	    
	    for(int i = 0;i<n;i++){
	        cin >> arr1[i];
	    }
	    
	    for(int i = 0;i<m;i++){
	        cin >> arr2[i];
	    }
	    
	    merge(arr1, arr2, n, m); 
        for (int i = 0; i < n; i++) 
            printf("%d ", arr1[i]); 
        
       
	    for (int i = 0; i < m; i++) 
		    printf("%d ", arr2[i]); 
	    
	    cout<<endl;
	}
	return 0; 
} 


/*This is a function problem.You only need to complete the function given below*/
// Function to merge two input arrays
// arr1[], arr2[]: input arrays
// n, m: size of arr1[] and arr2[] respectively
void merge(int arr1[], int arr2[], int n, int m) { 
    //Your code here
    //n is size of arr1
    //m is size of arr2
    for(int i=m-1; i>=0; i--){
        
        int j , last = arr1[n-1];
        for(j = n -2; j>=0 && arr1[j] > arr2[i]; j--){
            
            arr1[j+1] = arr1[j];
        }
        
        if(j != n-2 || last > arr2[i]){
            arr1[j+1] = arr2[i];
            arr2[i] = last;
        }
    }
    
} 

/**********

https://www.geeksforgeeks.org/efficiently-merging-two-sorted-arrays-with-o1-extra-space/

**********/

int nextGap(int gap) { 
    if (gap <= 1) 
        return 0; 
    return (gap / 2) + (gap % 2); 
} 

void mergeEfficient(int arr1[], int arr2[], int n, int m) { 
    //Your code here
    //n is size of arr1
    //m is size of arr2
    int i , j , gap = m + n;
    
    for(gap = nextGap(gap); gap>0; gap = nextGap(gap)){
        
        
        for(i = 0; i + gap < n; i++){
            if(arr1[i] > arr1[i + gap]){
                swap(arr1[i],arr1[i + gap]);
            }
        }
        
        for( j = gap > n ? gap - n : 0 ; i< n && j < m; i++, j++){
            
            if(arr1[i] > arr2[j]){
                swap(arr1[i],arr2[j]);
            }
        }
        
        if(j < m){
             for(i = 0; i + gap < m; i++){
                if(arr2[i] > arr2[i + gap]){
                    swap(arr2[i],arr2[i + gap]);
                }
            }
        }
    }
    
    
} 
 
