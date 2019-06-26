void preCompute(string A, vector<int> &vec){
    int len = A.size();
    vec[0] = -1;
    int k;
    for(int i = 1; i < A.size(); i++){
        k = vec[i-1];
        while(k >= 0){
            if(A[k] == A[i-1]){
                break;
            }    
            else{
                k = vec[k];
            }
        }
        vec[i] = k+1;
    }
}

int Solution::strStr(const string haystack, const string needle) {
    
    int haystack_len = haystack.length();
    int needle_len = needle.length();
    
    int flag = 0;
    
    if(haystack_len < needle_len){
        return -1;
    }
    
    if(needle_len == 0){
       return 0; 
    }
    
    vector<int> pre(needle_len);
    
    preCompute(needle,pre);
    
    int i =0;
    int j =0;
    
    int sol;
    
    while(i < haystack_len){
        if(j == -1){
            i++;
            j = 0;
        }
        else if(haystack[i] == needle[j]){
            i++;
            j++;
            if(j == needle_len){
                flag = 1;
                break;
            }
        }
        else{
            j = pre[j];
        }
        if(flag == 1){
            break;
        }
    }
    
    if(flag == 1){
        return i-j;
    }
    
    return -1;
    
    
}
