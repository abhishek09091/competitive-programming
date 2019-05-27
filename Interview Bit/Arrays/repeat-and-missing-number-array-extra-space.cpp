vector<int> Solution::repeatedNumber(const vector<int> &A) {
    
    vector<int> arr;
    int n = A.size();
    for(int i=0; i<n; i++){
        arr.push_back(A[i]);
    }
    
    vector<int> res;
    
    int res_1 , res_2;
    
    for(int i=0; i<arr.size(); i++){
        if(arr[abs(arr[i])-1] > 0){
           arr[abs(arr[i])-1] = - arr[abs(arr[i])-1]; 
        }else{
            res_1 = abs(arr[i]);
            res.push_back(res_1);
        }
    }
    
    for(int i=0; i<n; i++){
        if(arr[i] > 0){
            res_2 = i+1;
            res.push_back(res_2);
        }
    }
    
    return res;
}
