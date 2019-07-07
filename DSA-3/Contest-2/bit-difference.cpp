/*****

https://www.geeksforgeeks.org/count-number-of-bits-to-be-flipped-to-convert-a-to-b/

*****/

/*This is a function problem.You only need to complete the function given below*/
//User function Template for C++
// Function to find number of bits to be flip
// to convert A to B
int countBitsFlip(int a, int b){
    
    // Your logic here
    int c = a ^ b;
    int count = 0;
    while(c){
        
        count += (c & 1);
        c = c >> 1;
    }
    return count;
    
}