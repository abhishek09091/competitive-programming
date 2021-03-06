/****

https://www.geeksforgeeks.org/largest-sum-contiguous-subarray/

*****/

int maxSubarraySum(int arr[], int n){
    
    // Your code here
    int curr_sum = arr[0];
    int max_sum = arr[0];
    
    for(int i=1; i<n; i++){
        
        curr_sum = max(arr[i],curr_sum + arr[i]);
        max_sum = max(max_sum,curr_sum);
    }
    
    return max_sum;
    
}