/*****

https://www.geeksforgeeks.org/find-the-smallest-positive-number-missing-from-an-unsorted-array-hashing-implementation/

https://www.geeksforgeeks.org/find-the-smallest-positive-number-missing-from-an-unsorted-array/

****/


/*This is a function problem.You only need to complete the function given below*/
// Functio to find first smallest positive
// missing number in the array

void swap(int *a,int *b){
    
    int temp = *a;
    *a = *b;
    *b = temp;
}

int seggregate(int arr[],int n){
    
    int j = 0;
    for(int i=0; i<n; i++){
        
        if(arr[i] <=0 ){
            swap(arr[i],arr[j]);
            j++;
        }
    }
    
    return j;
    
}

int findMissingPositive(int arr[],int n){
    
    
    for(int i=0; i<n; i++){
        
        if(abs(arr[i]) < n -1 && arr[abs(arr[i]) - 1] > 0){
            
            arr[abs(arr[i]) - 1] = - arr[abs(arr[i]) - 1];
        }
    }
    
    for(int i=0; i<n; i++){
        
        if(arr[i] > 0){
            return i + 1;
        }
    }
    
    return n + 1;
}

int missingNumber(int arr[], int n) { 
    
    // Your code here
    int shift = seggregate(arr,n);
    
    return findMissingPositive(arr + shift,n - shift);
    
} 