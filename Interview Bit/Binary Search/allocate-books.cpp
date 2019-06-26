bool isPossible(vector<int> &A,int n,int m,int mid){
    
    int studentRequired = 1;
    int curr_sum = 0;
    for(int i=0; i<n; i++){
        
        if(A[i] > mid){
            return false;
        }
        
        if(curr_sum + A[i] > mid){
            
            studentRequired++;
            
            curr_sum = A[i];
            
            if(studentRequired > m){
                return false;
            }
            
        }else{
            curr_sum += A[i];
        }
        
    }
    
    return true;
}

int Solution::books(vector<int> &A, int B) {
    
    int n = A.size();
    if(n < B){
        return -1;
    }
    
    long long sum = 0;
    
    for(int i=0; i<n; i++){
        sum += A[i];
    }
    
    int start = 0, end = sum;
    int result = INT_MAX;
    while(start <= end){
        
        int mid = start + (end - start)/2;
        
        if(isPossible(A,n,B,mid)){
            
            result = min(result,mid);
            
            end = mid - 1;
        }else{
            start = mid + 1;
        }
    }
    
    if(result == INT_MAX){
        return -1;
    }
    
    return result;
}
