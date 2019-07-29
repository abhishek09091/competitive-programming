/********

https://www.geeksforgeeks.org/count-ways-reach-nth-stair/

********/

/*This is a function problem.You only need to complete the function given below*/
// function to count ways to reach mth stair
long long countWays(int m){
    // your code here
    long long res[m+1];
    
    res[0] = 1;
    res[1] = 1;
    
    for(int i=2; i<=m; i++){
        
      res[i] = res[i-2]+1;
    }
    return res[m];
    
}

long long countWays(int m){
    return (m/2)+1;
}