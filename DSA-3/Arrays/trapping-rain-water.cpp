/****

https://www.geeksforgeeks.org/trapping-rain-water/

*****/

int trappingWater(int arr[], int n){
    // Your code here
    
    int low = 0 , high = n - 1;
    int result = 0;
    int left_max = 0 , right_max = 0;
    while(low <= high){
        
        if(arr[low] < arr[high]){
            
            if(arr[low] > left_max){
                left_max = arr[low];
            }else{
                result += left_max - arr[low];
            }
            low++;
            
        }else{
            
            if(arr[high] > right_max){
                right_max = arr[high];
            }else{
                result += right_max - arr[high];
            }
            
            high--;
        }
    }
    
    return result;
    
}