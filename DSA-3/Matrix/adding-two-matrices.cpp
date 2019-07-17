/*This is a function problem.You only need to complete the function given below*/
/*  Function to find sum of matrices
*   n1, m1, n2, m2: rows and columns of matrices respectively
*   arr1[][], arr2[][]: two input matrices
*/
void sumMatrix(int n1, int m1, int n2, int m2, int arr1[SIZE][SIZE], int arr2[SIZE][SIZE]){
    
    if(n1 != n2 || m1 != m2){
        cout<<"-1";
        return;
    }
    
    // Your code here
    for(int i=0; i<n1; i++){
        for(int j=0; j<m1; j++){
            cout<<arr1[i][j] + arr2[i][j]<<" ";
        }
    }
    
    return;
}