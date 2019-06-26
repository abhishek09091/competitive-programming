int Solution::strStr(const string haystack, const string needle) {
    
    int haystack_len = haystack.length();
    int needle_len = needle.length();
    
    for(int i=0; i<=haystack_len - needle_len; i++){
        int j;
        for(j=0; j<needle_len; j++){
            
            if(haystack[i+j] != needle[j]){
                break;
            }
        }
        
        if(j == needle_len){
            return i;
        }
    }
    
    return -1;
    
    
}
