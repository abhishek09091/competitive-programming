vector<vector<int> > Solution::solve(int A) {
    
    vector<vector<int>> sol;
    
    
    if(A == 0){
        return sol;
    }
    
    vector<int> v;
    
    v.push_back(1);
    sol.push_back(v);
    
    for(int i=1; i<A; i++){
        vector<int> v;
        v.push_back(1);
        
        for(int j=1; j<i; j++){
            v.push_back(sol[i-1][j] + sol[j-1][i-1]);
        }
        
        v.push_back(1);
        sol.push_back(v);
    }
    
    return sol;
}
