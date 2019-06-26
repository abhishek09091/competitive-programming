long long factorial (int N)
{
    //Your code here
    
    long long arr[N + 1];
    
    arr[0] = arr[1] = 1;
    
    for(int i=2; i<=N; i++){
        
        arr[i] = arr[i-1] * i;
    }
    
    return arr[N];
}
