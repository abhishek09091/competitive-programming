int RecursivePower(int n,int p)
{
    //Your code here
    int res = 1;
    
    while(p > 0){
        
        if(p & 1){
            res = res * n;
        }
        
        p = p >> 1;
        n = n * n;
    }
    
    return res;
}