/******

https://www.geeksforgeeks.org/find-first-and-last-positions-of-an-element-in-a-sorted-array/

******/

/*This is a function problem.You only need to complete the function given below*/
// Function to find element in sorted array
int leftIndex(int n, int arr[], int x){
    
    // Your code here
    
    int start = 0;
    int end = n - 1;
    
    while(start <= end){
        
        int mid = start + ((end - start) / 2 );
        
        if(arr[mid] == x){
            int temp = mid;
            while(temp >= 0 && arr[temp] == x){
                temp--;
            }
            return temp+1;
        }else if( arr[mid] > x ){
            end = mid - 1;
        }else{
            start = mid + 1;
        }
    }
    
    
    return -1;
}


/*This is a function problem.You only need to complete the function given below*/
// Function to find element in sorted array

int first(int arr[], int low, int high, int x, int n){
    
    
     if(high >= low) 
    { 
        int mid = low + (high - low)/2; 
        if( ( mid == 0 || x > arr[mid-1]) && arr[mid] == x) 
            return mid; 
        else if(x > arr[mid]) 
            return first(arr, (mid + 1), high, x, n); 
        else
            return first(arr, low, (mid -1), x, n); 
    } 
    return -1;
}



int leftIndex(int n, int arr[], int x){
    
    // Your code here
    return first(arr, 0, n - 1, x, n);
 
}
