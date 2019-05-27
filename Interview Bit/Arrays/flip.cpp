vector<int> Solution::flip(string A) {
    
    int check = 0 , another_check = 0;
    int left , right , left_final , right_final;
    int temp1 = 0 , max1 = 0;
    char ch;
    for(int i=0; i<A.size(); i++){
        
        ch = A[i];
        check++;
        
        if(check == 1){
            left = i;
        }
        
        right = i;
        
        if(ch == '1'){
            temp1--;
        }
        
        if(ch == '0'){
            temp1++;
        }
        
        if(temp1 >= 0){
            another_check++;
            
            if(temp1 > max1){
                max1 = temp1;
                left_final = left;
                right_final = right;
            }else if(temp1 == max1){
                if(left == left_final){
                    if(right > right_final){
                        //continue
                    }else if(right_final > right){
                        right_final = right;
                    }
                    
                }else if(left > left_final){
                    //continue
                }else{
                    left_final = left;
                    right_final = right;
                }
            }
        }else{
            check = 0;
            temp1 = 0;
        }
    }
    
    vector<int> res;
    if(another_check != 0){
        res.push_back(left_final+1);
        res.push_back(right_final +1);
    }
    
    return res;
}
