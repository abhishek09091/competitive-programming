/*This is a function problem.You only need to complete the function given below*/
// Function to search x in arr
// arr: input array
// x: element to be searched for
int search(int arr[], int n, int x){
    
    // Your code here
    for(int i=0; i<n; i++){
        if(arr[i] == x){
            return i;
        }
    }
    
    return -1;
    
}
