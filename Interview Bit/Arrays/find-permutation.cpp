/**

Your Input: IDDDDIIII 10 
Expected output is 1 10 9 8 7 2 3 4 5 6


**/

vector<int> Solution::findPerm(const string A, int B) {
    
    vector<int> res;
    
   // cout<<A<<endl;
    //cout<<B<<endl;
    
    int I = 0;
    int count_d = 0;
    int count_i = 0;
    for(int i=0; A[i] != '\0'; i++){
        
        if(A[i] == 'I'){
            I++;
        }
    }
    
    count_d = B - I;
    count_i = count_d - 1;
    
    res.push_back(count_d);
    //cout<<count_d<<count_i<<endl;
    for(int i=0; A[i]!='\0'; i++){
        
        if(A[i] == 'I'){
            count_d++;
            res.push_back(count_d);
        }else{
            res.push_back(count_i);
            count_i--;
        }
    }
    
  /*  for(int i=0; i<res.size(); i++){
        cout<<res[i]<<" ";
    }
    cout<<endl;*/
    return res;
}
