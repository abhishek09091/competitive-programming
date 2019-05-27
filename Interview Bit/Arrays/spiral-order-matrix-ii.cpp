vector<vector<int> > Solution::generateMatrix(int A) {
    
    vector<vector<int>> sol(A,vector<int>(A,0));
    
    
    int left = 0;
    int right = A-1;
    int top = 0;
    int bottom = A-1;
    int dir = 0;
    int number = 1;
    
    while((left<=right) && (top<=bottom)){
        
        if(dir == 0){
            for(int i=left; i<=right; i++){
                sol[top][i] = number;
                number++;
            }
            top++;
            dir = 1;
        }else if(dir == 1){
            for(int i=top; i<=bottom; i++){
                sol[i][right] = number;
                number++;
            }
            right--;
            dir= 2;
        }else if(dir == 2){
            for(int i=right; i>=left; i--){
                sol[bottom][i] =number;
                number++;
            }
            bottom--;
            dir = 3;
        }else if(dir == 3){
            for(int i=bottom; i>=top; i--){
                sol[i][left] = number;
                number++;
            }
            left++;
            dir = 0;
        }
    }
    
    
    
    
    return sol;
    
}
