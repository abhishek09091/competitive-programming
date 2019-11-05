/*******

https://www.geeksforgeeks.org/decimal-equivalent-gray-code-inverse/

Below is the approach for the conversion of decimal code values to gray code values.
Let G(n) be Gray code equivalent of binary represention n. Consider bits of a number n and a number bit G(n). 
Note that leftmost set bits of both n and G(n) are at same position. Let this position be i and positions on right of it be (i+1), (i+2_, etc. 
The (i + 1)th bit in G(n) is 0 if i-th bit in n is 1 and vice versa is also true. 
The same is true for (i+2)-th bits, etc. Thus we have G (n) = n xor (n >> 1):


*******/

/*This is a function problem.You only need to complete the function given below*/
//User function Template for C++
//  Function to find the gray code of given number N
int greyConverter(int n){
    
    // Your code here
    
    return  ( n ^ (n>> 1)); 
    
}