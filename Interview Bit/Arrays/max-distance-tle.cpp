int Solution::maximumGap(const vector<int> &A) {
    
    int max_diff = INT_MIN;
    for(int i=0; i<A.size(); i++){
        for(int j=i+1; j<A.size(); j++){
            
            if(A[i] <= A[j] && (j-i)>max_diff){
                max_diff = j - i;
            }
        }
    }
    
    if(max_diff == INT_MIN){
        return 0;
    }
    return max_diff;
}
