int exactly3Divisors(int N){
   
    bool prime[N+1];
    memset(prime,true,sizeof(prime));
    
    int count = 0;
    prime[0]  = prime[1] = 0;
    
    for(int i=2; i*i<=N; i++){
            
        if(prime[i] == true){
            for(int j=i*2; j<= N; j += i){
                prime[j] = false;
            }
        }
    }
    
    for(int i=0; i*i<=N; i++){
        if(prime[i]){
            count++;
        }
    }
    
    
    return count;
}