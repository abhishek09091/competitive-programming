/********

https://www.geeksforgeeks.org/count-number-of-ways-to-cover-a-distance/

*********/

/*This is a function problem.You only need to complete the function given below*/
// function to count number of ways to reach top of the stair
long long countWays(int n){
    
    // your code here
    long long res[n + 1]; 
    res[0] = 1; 
    res[1] = 1;
    res[2] = 2;
    for (int i = 3; i <= n; i++) { 
        res[i] = (res[i-1] + res[i-2] + res[i-3]); 
    }
    return res[n]; 
    
}
