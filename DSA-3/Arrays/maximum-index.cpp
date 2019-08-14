/********

https://www.geeksforgeeks.org/given-an-array-arr-find-the-maximum-j-i-such-that-arrj-arri/

*******/

/*This is a function problem.You only need to complete the function given below*/

// Function to find the maximum difference of j-i
// arr[]: input array
// n: size of array
int maxIndexDiffBruteForec(int arr[], int n) { 
    
    // Your code here
    int max_diff = INT_MIN;
    
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            if(arr[i] <= arr[j] && max_diff < (j-i)){
                max_diff = j - i;
            }
        }
    }
    
    return max_diff;
}

int maxIndexDiff(int arr[], int n) { 

    
    int max_diff = INT_MIN;
    
    int *LMin = new int[(sizeof(int)*n)];
    int *RMax = new int[(sizeof(int)*n)];
    
    LMin[0] = arr[0];
    for(int i=1; i<n; i++){
        LMin[i] = min(arr[i],LMin[i-1]);
    }
    
    RMax[n-1] = arr[n-1];
    for(int i=n-2; i>=0; i--){
        RMax[i] = max(arr[i],RMax[i+1]);
    }
    
    int i = 0 , j = 0;
    
    while(i<n && j<n){
        
        if(LMin[i] <= RMax[j]){
            max_diff = max(max_diff,j-i);
            j++;
        }else{
            i++;
        }
    }
    
    return max_diff;
}