/*******

https://www.geeksforgeeks.org/find-a-peak-in-a-given-array/

*********/

/*This is a function problem.You only need to complete the function given below*/
/* The function should return the index of any
   peak element present in the array */
// arr: input array
// n: size of array
int peakElement(int arr[], int n){
   // Your code here
   
   if(n == 1){
       return 0;
   }
   
   for(int i=0; i<n; i++){
       
       if(i == 0 && arr[i] > arr[i+ 1]){
           return i;
       }
       
       else if(i == n-1 && arr[i-1] < arr[i]){
           return i;
       }
       
       else if( (arr[i-1] < arr[i] ) && (arr[i+1] < arr[i])){
           return i;
       }
   }
   
}


/*This is a function problem.You only need to complete the function given below*/
/* The function should return the index of any
   peak element present in the array */
// arr: input array
// n: size of array

int findPeakUtil(int arr[],int low,int high,int n){
    
    
        int mid = low + (high - low) / 2;
        
        if((mid == 0 || arr[mid] >= arr[mid - 1]) &&
            (mid == n - 1 || arr[mid] >= arr[mid + 1])){
            return mid;
        }else if(mid > 0 && arr[mid-1] > arr[mid]){
            return findPeakUtil(arr,low,mid - 1,n);
        }
        
        else return findPeakUtil(arr,mid + 1,high,n);
    
} 

int peakElement(int arr[], int n){
   // Your code here
   
   return findPeakUtil(arr,0,n-1,n);
   
}