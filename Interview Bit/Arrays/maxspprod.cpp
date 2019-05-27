/**

11
5 9 6 8 6 4 6 9 5 4 9

Output:

80

**/
int Solution::maxSpecialProduct(vector<int> &A) {
    int n = A.size();
    vector<int> rsv(n, 0);
    vector<int> lsv(n, 0);
    
    stack<int> s;
    s.push(0);
    for(int i = 1; i < n; i++) {
        while(!s.empty() && A[i] > A[s.top()]) {
            rsv[s.top()] = i;
            s.pop();
        }
        s.push(i);
    }
    while(!s.empty()) {
        rsv[s.top()] = 0;
    //    cout<<s.top()<<endl;
        s.pop();
    }
    
    for(int i=0; i<rsv.size(); i++){
      //  cout<<rsv[i]<<" ";
    }
//    cout<<endl;
    s.push(n - 1);
    for(int i = n - 2; i >= 0; i--) {
        while(!s.empty() && A[i] > A[s.top()]) {
            lsv[s.top()] = i;
            s.pop();
        }
        s.push(i);
    }
    while(!s.empty()) {
        lsv[s.top()] = 0;
        s.pop();
    }
    for(int i=0; i<lsv.size(); i++){
   //    cout<<lsv[i]<<" ";
    }
    
    //cout<<endl;
    
    long long prod = -1;
    for(int i = 0; i < n; i++) {
        prod = max(prod, 1LL * lsv[i] * rsv[i]);
    }
    
    return prod % 1000000007;
}
