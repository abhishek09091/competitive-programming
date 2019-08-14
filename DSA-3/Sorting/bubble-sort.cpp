/*********

https://www.geeksforgeeks.org/bubble-sort/

***********/


void bubbleSort(int arr[], int n){
   int i;
   for (i = 0; i < n-1; i++)      
        bubble(arr, i, n);
} 

void bubble(int arr[], int i, int n){
    // Your code here    
    for(int j=0; j<n-i-1; j++){
        
        if(arr[j] > arr[j+1]){
            swap(&arr[j],&arr[j+1]);
        }
    }
}