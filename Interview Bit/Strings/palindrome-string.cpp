int Solution::isPalindrome(string A) {
   
    string str;
    int n = A.length();
    for(int i=0; i<n; i++){
        
        char ch = A[i];
        if((ch>= '0' && ch<='9') || (ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z') ){
            
            if(ch >= 'A' && ch <= 'Z'){
                ch= ((char)(ch + 32));
            }
            
            str.push_back(ch);
        }
    }
    
    int i = 0;
    int j = str.length()-1;
    while(i<str.length()/2){
        
        if(str[i] == str[j]){
            i++;
            j--;
        }else{
            return 0;
        }
    }
    
    return 1;
}
