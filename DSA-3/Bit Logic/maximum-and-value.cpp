/******

https://www.geeksforgeeks.org/maximum-value-pair-array/

*******/

/*This is a function problem.You only need to complete the function given below*/
//User function Template for C++
 
int numberOfMsb(int pattern,int arr[], int n){
    
    int count = 0;
    
    for(int i=0; i<n; i++){
        
        if((pattern & arr[i]) == pattern){
            count++;
        }
    }
    
    return count;
}
 
// Function for finding maximum and value pair
int maxAND (int arr[], int n){
    
    // Your code here
    int res = 0,count;
    
    for(int bit=31; bit>=0; bit--){
        
        count = numberOfMsb(res | (1<<bit),arr,n);
        
        if(count >= 2){
            res |= (1<<bit);
        }
    }
    
    return res;
}