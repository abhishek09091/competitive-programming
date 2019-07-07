/*****

https://www.geeksforgeeks.org/length-longest-consecutive-1s-binary-representation/

*****/

/*This is a function problem.You only need to complete the function given below*/
//User function Template for C++
/*  Function to calculate the largest consecutive ones
*   x: given input to calculate the largest consecutive ones
*/
int maxConsecutiveOnes(int x)
{
 
    // Your code here
    int max_cons = 0;
    
    while(x){
        int temp = 0;
        if(x & 1){
            
            temp++;
            x = x >> 1;
            while(x & 1){
                x = x >> 1;
                temp++;
            }
            
            if(max_cons < temp){
                max_cons = temp;
            }
        }
        
        x = x >> 1;
    }
    
    return max_cons;
}


int maxConsecutiveOnes(int x){
    
    int count =0;
    
    while(x != 0){
        
        x = ( x & (x << 1) ); 
        count++;
    }
    
    
    return count;
}