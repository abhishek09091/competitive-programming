/****

https://www.geeksforgeeks.org/rearrange-given-array-place/

****/

/*This is a function problem.You only need to complete the function given below*/

    
// Function to rarrange the elements in O(1) extra space
// arr: input array
// n: size of array
void arrange(long long arr[], int n) {
    // Your code here
    
    for(int i=0; i<n; i++){
        
        arr[i] += (arr[arr[i]] % n) * n; 
    }
    
    for(int i=0; i<n; i++){
        arr[i] /= n;
    }
    return;
}
