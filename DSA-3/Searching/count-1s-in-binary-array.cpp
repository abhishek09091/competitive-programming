/******

https://www.geeksforgeeks.org/count-1s-sorted-binary-array/

*******/

// Function to count number of Ones
// arr: input array declared globally
// n: size of input array
int countOnes(int n){
    
    int low , high , mid;
    // Your code here
    for(low = 0 , high = n - 1; low < high; ){
        
         mid = low + ((high - low)/2);
        // cout<<"low: "<<low<<" mid: "<<mid<<" high: "<<high<<endl;
        if(arr[mid] == 0){
            high = mid - 1;
        }else{
            low = mid + 1;
        }
    }
    
    if(arr[low] == 0){
        return low-- ;
    }
    
    return low + 1; 
}