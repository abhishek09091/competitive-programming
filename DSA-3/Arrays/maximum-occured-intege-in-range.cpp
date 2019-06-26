/**

https://www.geeksforgeeks.org/maximum-occurred-integer-n-ranges/

https://www.geeksforgeeks.org/maximum-value-array-m-range-increment-operations/

**/

int maxOccured(int L[], int R[], int n, int maxx){
    // Your code here
    int arr[maxx+1] = {0};
    
    for(int i=0; i<n; i++){
        
        arr[L[i]] += 1;
        arr[R[i] + 1] -= 1;
        
    }
    
    int max = arr[0];
    int index;
    for(int i=1; i<=maxx; i++){
        
        arr[i] += arr[i-1]; 
        
        if(max < arr[i]){
            max = arr[i];
            index = i;
        }
    }
    
    return index;
}