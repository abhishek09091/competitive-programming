int Solution::solve(string A) {
    
    int start = 0, end_len = A.length()-1;
    int end = A.length()-1;
    
    while(start <= end_len){
        
        if(A[start] == A[end_len]){
            start++;
            end_len--;
        }else{
            start = 0;
            end_len = --end;
        }
    }
    
    return A.length() - (end + 1 );
}
