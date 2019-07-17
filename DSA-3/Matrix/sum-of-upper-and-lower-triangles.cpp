/*This is a function problem.You only need to complete the function given below*/
/*  Function to find sum of upper and lower triangles
*   n: row/col in matrix
*   mat[][]: input matrix
*/
void sumTriangles(int n, int mat[SIZE][SIZE]){
    
    int upper_sum = 0 , lower_sum = 0;
    // Your code here
    for(int i = 0; i<n; i++){
        
        for(int j=0; j<n; j++){
           
           if(i<j){
               upper_sum += mat[i][j];
           }else if(i == j){
               upper_sum += mat[i][j];
               lower_sum += mat[i][j];
           }else{
               lower_sum += mat[i][j];
           } 
        }
    }
    
    cout<<upper_sum<<" "<<lower_sum;
    return;
}