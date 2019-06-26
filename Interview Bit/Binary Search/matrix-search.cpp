int Solution::searchMatrix(vector<vector<int> > &A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int row = A.size();
    int col = A[0].size();
    int i = 0 , j = col - 1;
    while(i < row && j >=0){
        if(A[i][j]==B){
            return 1;
        }else if(A[i][j] > B){
            j--;
        }else{
            i++;
        }
    }
    
    return 0;
}
