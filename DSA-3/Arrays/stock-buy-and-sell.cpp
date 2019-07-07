/***

https://www.geeksforgeeks.org/stock-buy-sell/

****/

/*This is a function problem.You only need to complete the function given below*/
// solution structure
/* struct Interval
 {
     int buy;
     int sell;
 };*/
// This function finds the buy sell schedule for maximum profit
void stockBuySell(int price[], int n)
{
    if(n == 1){
        return;
    }
    // Your code here
    int i = 0;
    int count = 0;
    
    Interval res[n/2 + 1];
    
    while(i < n-1){
        
        while((i < n -1 ) && price[i + 1] <= price[i]){
            i++;
        }
        
        if(i == n-1){
            break;
        }
        
        res[count].buy = i++;
        
        while((i < n) && price[i] >= price[i-1]){
            i++;
        }
        
        res[count].sell = i - 1;
        count++;
    }
    
    if(count == 0){
        cout<<"No Profit";
    }else{
        
        for(int i=0; i<count; i++){
            cout<<"("<<res[i].buy<<" "<<res[i].sell<<")"<<" ";
        }
    }
    
    return;
}