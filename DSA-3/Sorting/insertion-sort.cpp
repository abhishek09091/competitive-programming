/*******

https://www.geeksforgeeks.org/insertion-sort/

*******/

void insertionSort(int arr[], int n){
   int i;
   for (i = 1; i < n; i++)
      insert(arr, i);
} 
void insert(int arr[], int i){
    // Your code here 
    int key = arr[i];
    int j = i - 1;
    
    while(j>=0 && arr[j] > key){
        arr[j+ 1] = arr[j];
        j--;
    }
    arr[j+1] = key;
}