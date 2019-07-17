/*This is a function problem.You only need to complete the function given below*/
/*  Function to exchange columns
*   n1, m1: rows and cols of matrix
*   SIZE: defined globally for matrix
*   arr1[][]: input matrix
*/
void exchangeColumns(int n1, int m1, int arr1[SIZE][SIZE]){
    
    // Your code here
    for(int i=0; i<n1; i++){
        
        swap(arr1[i][0],arr1[i][m1-1]);
    }
    
    for(int i=0; i<n1; i++){
        for(int j=0; j<m1; j++){
            cout<<arr1[i][j]<<" ";
        }
    }
    return;
}