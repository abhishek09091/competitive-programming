/*This is a function problem.You only need to complete the function given below*/
// Function to reverse the array in groups
vector<long long> reverseInGroups(vector<long long> mv, int n, int k){
    
    // your code here
    int start = 0;
    int end = k;
    long long temp;
    while(end < n){
        
        for(int i=start, j = end-1; end < n && i<j; i++,j--){
            temp = mv[i];
            mv[i] = mv[j];
            mv[j] = temp;
        }
        
        start = end;
        end = end + k;
    }
    
    //for the remaining elements
    for(int i=start , j = n-1; i<j; i++,j--){
        
        temp = mv[i];
        mv[i] = mv[j];
        mv[j] = temp;
    }
    
    return mv;
}