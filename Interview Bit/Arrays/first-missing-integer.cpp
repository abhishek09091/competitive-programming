int Solution::firstMissingPositive(vector<int> &A) {
    
    int n = A.size();
    int j = 0 ;
    for(int i=0; i<n; i++){
        
        if(A[i]<=0){
            swap(A[j],A[i]);
            j++;
        }
        
    }
    
    int st = j;
    int cnt = n - st;
    
    for(int i=st; i<n; i++){
        
        if(abs(A[i]) <= cnt){
            A[st + abs(A[i])-1] = -A[st + abs(A[i])-1];
        }
    }
    
    for(int i =st; i<n; i++){
        if(A[i]>=0){
            return i-st+1;
        }
    }
    
    return cnt+1;
}
