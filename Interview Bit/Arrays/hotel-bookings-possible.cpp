bool Solution::hotel(vector<int> &arrive, vector<int> &depart, int K) {
    
    sort(arrive.begin(),arrive.end());
    sort(depart.begin(),depart.end());
    
    
    int max_guest = 1;
    int guest_in = 1;
    int i = 1 , j = 0;
    int n = arrive.size();
    while(i < n && j < n){
        
        if(arrive[i] < depart[j]){
            guest_in++;
            
            if(guest_in > max_guest){
                max_guest = guest_in; 
            }
            
            i++;
        }else{
            j++;
            guest_in--;
        }
    }
    
    if(max_guest > K){
        return false;
    }else{
        return true;
    }
}
