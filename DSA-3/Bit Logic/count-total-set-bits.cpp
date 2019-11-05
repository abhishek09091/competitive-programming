/******

https://www.geeksforgeeks.org/count-total-set-bits-in-all-numbers-from-1-to-n/

******/

/*This is a function problem.You only need to complete the function given below*/
//User function Template for C++
// Function to count set bits in the given number x
// n: input to count the number of set bits
int countSetBits(int n){
    
    // Your logic here
    
    int count = 0;
    
    for(int i=1; i<=n; i++){
        
        int temp = i;
        while(temp){
            
            count += (temp & 1);
            temp = temp >> 1;
        }
    }
    
    return count;
}