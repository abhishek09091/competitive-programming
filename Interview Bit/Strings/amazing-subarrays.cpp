bool isVowel(char ch){
    
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || 
    ch == 'E' ||ch == 'I' ||ch == 'O' ||ch == 'U'){
        return true;
    }
    
    return false;
}

int Solution::solve(string A) {
    
    int count = 0;
   // cout<<A.length()<<endl;
    for(int i=0; i<A.length()-1; i++){
        
        if(isVowel(A[i])){
            count = (count + (A.length() - i)) % 10003;
        }
       // cout<<count<<endl;
    }
    
    
    if(isVowel(A[A.length()-1])){
        //cout<<"here"<<endl;
        count += 1;
    }
    
    return count;
}
