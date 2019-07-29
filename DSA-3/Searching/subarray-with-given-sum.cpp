/*******

https://www.geeksforgeeks.org/find-subarray-with-given-sum/
https://www.geeksforgeeks.org/find-subarray-with-given-sum-in-array-of-integers/

*******/

/*This is a function problem.You only need to complete the function given below*/
// Function to find the subarray with given sum k
// arr: input array
// n: size of array
void subarraySum(int arr[], int n, int s){
    
    // Your code here
    
    int start = 0 , curr_sum = arr[0];
    bool flag = true;
    for(int i=1; i<=n; i++){
        
        while(curr_sum > s && start < i -1){
            curr_sum -= arr[start];
            start++;
        }
        
        if(curr_sum == s){
            cout<<start+1<<" "<<i;
            flag = false;
            return;
        }
        
        if(i<n){
            curr_sum += arr[i];
        }
    }
    
    if(flag){
        cout<<"-1";
    }
    return;
}