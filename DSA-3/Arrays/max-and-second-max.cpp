/*This is a function problem.You only need to complete the function given below*/
     
/* Function to find largest and second largest element
*sizeOfArray : number of elements in the array
* arr = input array
*/
void largestAndSecondLargest(int sizeOfArray, int arr[]){
    int max = arr[0], max2= INT_MIN;
    
    /*********************************
     * Your code here
     * This function should print 
     * max and second max
     * *******************************/
     
     for(int i=0; i<sizeOfArray; i++){
         
         if(arr[i] > max){
             max2 = max;
             max = arr[i];
         }else if(max2 < arr[i] && arr[i] != max){
             max2 = arr[i];
         }
         
     }
     
     
     cout << max << " ";
     if(max2 == INT_MIN){
         cout<<"-1"<<endl;
     }else{
         cout<<max2<<endl;
     }
}