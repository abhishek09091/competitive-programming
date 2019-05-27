vector<vector<int> > Solution::diagonal(vector<vector<int> > &A) {
    
    int x = A.size();
    vector<vector<int>> sol(2*x-1);
    int count = 0;
    for(int i=0; i<x; i++){
        
        int a = 0, y = i;
        
        while(a<x && y>=0){
            sol[count].push_back(A[a][y]);
            a++;
            y--;
        }
        count++;
    }
    
    for(int i=1; i<x; i++){
        
        int a = i , y = x - 1;
        while(a<x && y>=0){
            sol[count].push_back(A[a][y]);
            a++;
            y--;
        }
        count++;
    }
    
    
    return sol;
}
