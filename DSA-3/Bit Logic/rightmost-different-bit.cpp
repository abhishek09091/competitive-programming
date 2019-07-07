/****

https://www.geeksforgeeks.org/position-rightmost-different-bit/


****/

/*This is a function problem.You only need to complete the function given below*/
//User function Template for C++
/*  Function to find the first position with different bits
*   This function returns the position with different bit
*/
int posOfRightMostDiffBit(int m, int n)
{
    
    // Your code here
    return log2((m ^ n) & -(m ^ n)) + 1;
    
    
}