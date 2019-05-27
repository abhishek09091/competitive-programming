vector<int> Solution::wave(vector<int> &A) {
    
    vector<int> res;
    for(int i=0; i<A.size(); i++){
        res.push_back(A[i]);
    }
    
    for(int i=0; i<A.size(); i += 2){
        
        if(i > 0 && res[i-1] > res[i]){
            int temp = res[i];
            res[i] = res[i-1];
            res[i-1] = temp;
        }
        
        if(i<A.size()-1 && res[i] < res[i+1]){
            int temp = res[i];
            res[i] = res[i+1];
            res[i+1] = temp;
        }
    }
    
    
    return res;
}
