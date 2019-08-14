/*********

https://www.geeksforgeeks.org/maximum-contiguous-circular-sum/

https://www.geeksforgeeks.org/largest-sum-contiguous-subarray/

**********/

/*This is a function problem.You only need to complete the function given below*/
// Function to find circular subarray with maximum sum
// arr: input array
// num: size of array

int kadane(int arr[],int n){
    
    int max_so_far = arr[0]; 
    int curr_max = arr[0]; 
  
    
    for(int i=1; i<n; i++){
        
       curr_max = max(arr[i],curr_max+arr[i]);
       max_so_far = max(max_so_far,curr_max);
    }
    
    return max_so_far;
}

bool all_negative(int arr[],int n){
    
    for(int i=0; i<n; i++){
        if(arr[i] > 0){
            return false;
        }
    }
    
    return true;
}

int circularSubarraySum(int arr[], int num){
    // your code here
    int kadane_sum = kadane(arr,num);
    //check for all negative
    if(all_negative(arr,num)){
        
        
        return kadane_sum;
    }
    
    
    //cout<<"kadane_sum: "<<kadane_sum<<endl;
    int max_wrap = 0;
    
    for(int i=0; i<num; i++){
        
        max_wrap += arr[i];
        arr[i] = -arr[i];
    }
    
    max_wrap = max_wrap + kadane(arr,num);
    
    
    return ( kadane_sum > max_wrap ) ? kadane_sum : max_wrap;
}