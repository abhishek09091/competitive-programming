void my_swap(int &a,int &b){
    int temp = a;
    a = b;
    b = temp;
}

vector<int> Solution::wave(vector<int> &A) {
    
    sort(A.begin(),A.end());
    
    int size = A.size();
    
    if(size%2 != 0){
        size = A.size()-1;
    }
    
    for(int i=0; i<size; i += 2){
        my_swap(A[i],A[i+1]);
    }
    
    return A;
}
