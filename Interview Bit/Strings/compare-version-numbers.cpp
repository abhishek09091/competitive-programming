int Solution::compareVersion(string A, string B) {
    
    int A_len = A.length();
    int B_len = B.length();
    
    int v_num_1 = 0 ,v_num_2 = 0;
    
    for(int i=0, j = 0; (i<A_len || j<B_len); ){
        
        while(i<A_len && A[i] != '.'){
            
            v_num_1 = (v_num_1 * 10) + (A[i] - '0');
            i++;
        }
        
        while(j<B_len && B[j] != '.'){
            
            v_num_2 = (v_num_2 * 10) + (B[i] - '0');
            j++;
        }
        
        if(v_num_1 > v_num_2){
            return 1;
        }
        
        if(v_num_1 < v_num_2){
            return -1;
        }
        
        v_num_1 = v_num_2 = 0;
         i++;
         j++;
    }
    
    return 0;
}
