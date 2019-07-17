/*********

https://www.geeksforgeeks.org/c-program-multiply-two-matrices/

You can multiply two matrices if, and only if, the number of columns in the first matrix equals the number of rows in the second matrix. 
Otherwise, the product of two matrices is undefined.

https://www.mathwarehouse.com/algebra/matrix/multiply-matrix.php

**********/


/*This is a function problem.You only need to complete the function given below*/
/*  Function to multiply matrices
*   n1, m1, n2, m2: rows and cols of matrices
*   arr1[][], arr2[][]: input matrices
*   SIZE: defined globally
*/
void multiplyMatrix(int n1, int m1, int n2, int m2, long long arr1[SIZE][SIZE], long long arr2[SIZE][SIZE]){
    
    // Your code here
    
    if( m1 != n2){
        cout<<"-1";
        return;
    }
    
    long long res[n1][m2];
    
    for(int i=0; i<n1; i++){
        
        for(int j=0; j<m2; j++){
            
            res[i][j] = 0;
            
            for(int k=0; k<n2; k++){
                
                res[i][j] += (arr1[i][k] * arr2[k][j]);
            }
        }
    }
    
    for(int i=0; i<n1; i++){
        for(int j=0; j<m2; j++){
            cout<<res[i][j]<<" ";
        }
    }
    
    return;
    
}