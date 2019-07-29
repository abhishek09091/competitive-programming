/*****

https://www.geeksforgeeks.org/find-minimum-element-in-a-sorted-and-rotated-array/

******/

/*This is a function problem.You only need to complete the function given below*/
// Function to find the minimum element in sorted and rotated array
// arr: input array
// low and high are 0 and n-1, where n is the size of arr
int minNumber(int arr[], int low, int high){
    // Your code here
    
    //
    if(high < low ){
        return arr[low];
    }
    
    //check index equal
    if(high == low){
        return arr[0];
    }
    
    
    int mid = low + (high - low) / 2;
    //check mid + 1 is small
    
    if(mid < high && arr[mid] > arr[mid +1]){
        return arr[mid + 1];
    }
    
    //check mid is smallest
    
    if(mid > low && arr[mid] < arr[mid - 1]){
        return arr[mid];
    }
    
    //check where to go
    if(arr[high] > arr[mid]){
        return minNumber(arr,low,mid - 1);
    }
    
    return minNumber(arr,mid + 1, high);
    
}