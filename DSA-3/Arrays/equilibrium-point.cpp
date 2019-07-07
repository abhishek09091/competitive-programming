/*******

https://www.geeksforgeeks.org/equilibrium-index-of-an-array/

********/

/*This is a function problem.You only need to complete the function given below*/
// Function to find equilibrium point
// a: input array
// n: size of array
int equilibriumPoint(long long arr[], int n) {
    // Your code here
    
    long long sum = 0;
    for(int i=0; i<n; i++){
        
        sum += arr[i];
    }
    
    long long leftSum = 0;
    
    for(int i=0; i<n; i++){
        
        sum -= arr[i];
       
        if(leftSum == sum){
            return i+1;
        }
        
         leftSum += arr[i];
    }
    
    
    
    return -1;
}