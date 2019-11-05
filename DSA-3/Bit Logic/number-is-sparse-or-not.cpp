/*****

https://www.geeksforgeeks.org/check-if-a-given-number-is-sparse-or-not/

*******/

/*This is a function problem.You only need to complete the function given below*/
//User function Template for C++
// function to check if the number is sparse
// n : is the number to check if it is sparse
bool isSparse(int n){
    
    // Your code
    while(n){
        
        if(n & 1){
            n = n >> 1;
            if(n & 1){
                return false;
            }
        }
        
        n = n >> 1;
    }
    
    
    return true;
    
}


bool isSparse(int n){

    if(n & (n>>1)){
        return false;
    }
    return true;
}