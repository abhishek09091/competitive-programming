/*****

https://www.geeksforgeeks.org/check-whether-k-th-bit-set-not/

****/

/*This is a function problem.You only need to complete the function given below*/
//User function Template for C++
// Function to check if Kth bit is set or not
bool checkKthBit(int n, int k){
    
    // Your code here
    // It can be a one liner logic!! Think of it!!
    
    return ( n & (1 << (k)));
    
}