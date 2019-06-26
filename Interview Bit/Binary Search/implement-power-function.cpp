int Solution::pow(int x, int n, int d) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
    if(x == 0 ){
        return 0 ;
    }
    
    if(n == 0){
        return 1;
    }
    
    bool check = false;
    
    if(x < 0){
        x = abs(x);
        check = true;
    }
    int res = 1;
    x = x % d;
    
    while(n > 0){
        
        if(n & 1){
            res = (res * x ) % d;
        } 
        
        n = n >> 1;
        x = (x * x)%d;
    }
    
    if(check){
        return d - abs(res);
    }
    
    return res;
}
