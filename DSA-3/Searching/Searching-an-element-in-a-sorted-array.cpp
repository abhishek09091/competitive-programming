// n: size of array
// x: element to be searched
int searchInSorted(int arr[], int n, int x) { 
   // Your code here
   
   int start = 0;
   int end = n -1;
   
   while(start <= end){
       
       int mid = (start) + ((end - start) / 2);
       
       if(arr[mid] == x){
           return 1;
       }else if(arr[mid] > x){
           end = mid - 1;
       }else{
           start = mid + 1;
       }
   }
   
   return -1;
   
}