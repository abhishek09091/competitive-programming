/*This is a function problem.You only need to complete the function given below*/
/*  Function to search x in the input matrix
*   n, m: rows and columns of matrix
*   x: element to check presence in matrix
*   mat[][]: input matrix
*/
int search( int n,int m, int x, int mat[SIZE][SIZE]){
   // Your code here
   m = m - 1;
   int i = 0;
   while(i < n && m >=0){
       
       if(mat[i][m] == x){
           return 1;
       }else if(x > mat[i][m]){
           i++;
       }else{
           m--;
       }
   }
   
   
   
   return 0;
}