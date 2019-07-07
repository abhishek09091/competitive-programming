/****

https://www.geeksforgeeks.org/position-of-rightmost-set-bit/

****/

/*This is a function problem.You only need to complete the function given below*/
//User function Template for C++
/*  function to find position of first set 
    bit in the given number
 * n: given input for which we want to get
      the position of first set bit
 */
/*unsigned int getFirstSetBit(int n){
    
    // Your code here
    
    int position  = 1;
    
    int m = 1;
    
    while(!(n & m)){
        m = m << 1;
        position++;
    }
    
    return position;
    
}*/

unsigned int getFirstSetBit(int n){
    
    //cout<<(n & -n )<<endl;
    return log2(n & -n) + 1;
}