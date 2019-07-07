/*This is a function problem.You only need to complete the function given below*/
//User function Template for C++
/*Geeks, you have to complete this function*/
int majorityWins(int arr[], int n, int x,int y){
    int count_x=0;//counter to count frequency of x
    int count_y=0;//counter to count frequency of y
    
    
    /***********************************************
           Delete this comment, and write your code 
                 Your code goes here, Geeks
    ***********************************************/
    for(int i=0; i<n; i++){
        
        if(arr[i] == x){
            count_x++;
        }else if(arr[i] == y){
            count_y++;
        }
    }
    
    if(count_x>count_y){
        return x;
    }
    //Complete this
    else if(count_y>count_x){
        return y;
    }
    //Complete this
    else{
        if(x > y){
            return y;
        }else{
            return x;
        }
    }
    //Complete this
}