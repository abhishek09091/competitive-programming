int Solution::repeatedNumber(const vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int xor_1 = 0;
    
    for(int i=1; i<A.size(); i++){
        
        xor_1 ^= A[i];
        xor_1 ^= i;
    }
    
    xor_1 ^= A[0];
    
    return xor_1;
}
