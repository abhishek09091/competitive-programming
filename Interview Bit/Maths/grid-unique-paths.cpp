int Solution::uniquePaths(int A, int B) {
    
    int count[A][B];
    
    for(int i=0; i<A; i++){
        count[i][0] = 1;
    }
    
    for(int i=0; i<B; i++){
        count[0][i] = 1;
    }
    
    for(int i=1; i<A; i++){
        for(int j=1; j<B; j++){
            count[i][j] = count[i-1][j] + count[i][j-1];
        }
    }
    
    return count[A-1][B-1];
}
