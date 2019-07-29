/*******

https://www.geeksforgeeks.org/count-ways-reach-nth-stair-using-step-1-2-3/

******/

/*This is a function problem.You only need to complete the function given below*/
// function to count ways to reach mth stair
long long countWays(int n){
    // your code here
    int res[n + 1]; 
    res[0] = 1; 
    res[1] = 1; 
    for (int i = 2; i <= n; i++) { 
        res[i] = (res[i-1] + res[i-2])%1000000007; 
    }
    return res[n]; 
}