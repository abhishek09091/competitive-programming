int Solution::findMedian(vector<vector<int> > &A) {
    
    int min = A[0][0], max = A[0][0];
    int n = A.size(), m = A[0].size();
    for (int i = 0; i < n; ++i) {
        if (A[i][0] < min) min = A[i][0];
        if (A[i][m-1] > max) max = A[i][m-1];
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
    int element = (n * m + 1) / 2;
    while (min < max) {
        int mid = min + (max - min) / 2;
        int cnt = 0;
        //cout<<"mid"<<mid<<endl;
        for (int i = 0; i < n; ++i){
            //cout<<"res: "<<*(&A[i][0])<<endl;
            //cout<<"upper bound: "<<*(upper_bound(&A[i][0], &A[i][m], mid))<<endl;
            cnt += upper_bound(&A[i][0], &A[i][m], mid) - &A[i][0];
            //cout<<"count"<<cnt<<endl;
        }
        if (cnt < element)
            min = mid + 1;
        else
            max = mid;
    }
    return min;
}
