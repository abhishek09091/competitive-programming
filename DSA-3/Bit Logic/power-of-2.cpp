/****

https://stackoverflow.com/questions/3638431/determine-if-an-int-is-a-power-of-2-or-not-in-a-single-line

https://www.geeksforgeeks.org/program-to-find-whether-a-no-is-power-of-two/


****/

/*This is a function problem.You only need to complete the function given below*/
//User function Template for C++
// Function to check power of two
bool isPowerofTwo(long long x){
    
    // Your code here  
    return x && !(x & (x-1));
    
}