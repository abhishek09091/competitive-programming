int Solution::isPalindrome(int A) {
    
    if(A < 0){
        return 0;
    }
    
    long int temp1 = 0 , temp2 = A;
    while(A != 0){
        
        temp1 = temp1 * 10 + A % 10;
        
        A /= 10;
    }
    
    if(temp1 == temp2){
        return true;
    }
    
    return false;
}
