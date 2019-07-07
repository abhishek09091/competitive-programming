/*This is a function problem.You only need to complete the function given below*/
//User function Template for C++
// Function to find maximum of all subarray of size two
void maximumAdjacent(int sizeOfArray, int arr[]){
    
    /*******************************************
     * Your code here
     * Function should print max adjacents for all pairs
     ********************************************/
     for(int i=0; i<sizeOfArray-1; i++){
         
         if(arr[i] > arr[i+1]){
             cout<<arr[i]<<" ";
         }else{
             cout<<arr[i+1]<<" ";
         }
     }
     return;
}