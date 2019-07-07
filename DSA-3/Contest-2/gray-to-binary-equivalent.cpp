/*****

https://www.geeksforgeeks.org/decimal-equivalent-gray-code-inverse/

Below is the approach for the conversion of gray code values to decimal code values.
We will go from the older bits to the younger ones (even the smallest bit has number 1, and the oldest bit is numbered k). 
We obtain such relations between the bits of the ni number n and the bits of the gi number g:

 nk = gk, 
 nk-1 = gk-1 xor nk = gk xor gk-1
 nk-2 = gk-2 xor nk-1 = gk xor gk-1 xor gk-2 
 nk-3 = gk-3 xor nk-2 = gk xor gk-1 xor gk-2 xor gk-3
 ...



*****/

/*This is a function problem.You only need to complete the function given below*/
//User function Template for C++
// function to conver given N Gray to Binary
int grayToBinary(int n){
    
    // Your code here
   
    
    int dec = 0;
    
    for( ; n;n = n >> 1){
        dec ^= n;
    }
    
    return dec;
}