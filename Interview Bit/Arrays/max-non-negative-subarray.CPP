vector<int> Solution::maxset(vector<int> &A) {
    
    vector<int> res ;
    int start = 0;
    int start_i = 0;
    int end = 0;
    int end_i = 0;
    int diff = INT_MIN;
    long long result = LLONG_MIN;
    for(int i=0; i<A.size(); i++){
        long long temp =0;
        start = i;
        while(i< A.size() && A[i] >= 0){
            temp += A[i];
            i++;
        }
        //cout<<temp<<endl;
        end = i-1;
        if(temp > result ){
            result = temp;
            start_i = start;
            end_i = end;
        }else if(temp == result && (end_i - start_i ) < (end - start)){
            start_i = start;
            end_i = end;
        }
    }
    
    for(int i=start_i; i<=end_i; i++){
        res.push_back(A[i]);
    }
    
    return res;
}
