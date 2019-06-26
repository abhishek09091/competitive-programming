bool isPalindrome(string str){
    
    int l = str.length(); 
    int j; 
      
    for(int i = 0, j = l - 1; i <= j; i++, j--) 
    { 
        if(str[i] != str[j]) 
            return false; 
    } 
    return true;
}

int Solution::solve(string A) {
    
    
    int count = 0;
    while(A.length() > 0){
        
        if(isPalindrome(A)){
            break;
        }else{
            count++;
            A.erase(A.begin() + A.length() -1);
        }
    }
    
    return count;
}
