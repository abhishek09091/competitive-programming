/***

Given a sorted array arr[] of distinct integers. Sort the array into a wave-like array and return it.
In other words, arrange the elements into a sequence such that a1 >= a2 <= a3 >= a4 <= a5..... 
(considering the increasing lexicographical order).

****/

/*This is a function problem.You only need to complete the function given below*/
// Function to convert given array to wave like array
// arr: input array
// n: size of array
void convertToWave(int *arr, int n){
    
    // Your code here
    int temp;
    for(int i=0; i<n-1; i+=2){
        
        temp = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = temp;
    }
    
    return;
    
}