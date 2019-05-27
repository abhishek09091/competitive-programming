vector<int> Solution::plusOne(vector<int> &A) {
    
    vector<int> res;
    int n = A.size();
    for(int i=0; i<n; i++){
        res.push_back(A[i]);
    }
    
    int temp = 0;
    while(res[0] == 0 && temp < n-1 ){
        res.erase(res.begin());
        temp++;
    }
    n = res.size();
    res[n-1] += 1;
    int carry = res[n-1]/10;
    res[n-1] %= 10;
    for(int i=n-2; i>=0; i--){
        
        if(carry == 1){
            res[i] += 1;
            carry = res[i]/10;
            res[i] %= 10;
        }
    }
    
    if(carry == 1){
        res.insert(res.begin(),1);
    }
    
    return res;
}
