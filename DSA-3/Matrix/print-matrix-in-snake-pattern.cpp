/*This is a function problem.You only need to complete the function given below*/
/*  Function to print the matrix in snake pattern
*   mat[][]: input matrix
*   n: size of matrix n x n
*/
void print(int mat[][100],int n){
    // Your code here
    
    int total = n * n;
    int i = 0,j = 0;
    int row_num = 0;
    bool flag = true;
    while(i < total){
        
        if(j < n && flag == true){
           cout<<mat[row_num][j]<<" "; 
           j++;
        }
        
        if(j >= 0 && flag == false){
            cout<<mat[row_num][j]<<" ";
            //cout<<"j"<<j<<endl;
            j--;
        }
        
        if(j == n ){
          row_num++; 
          j--;
          flag = false;
        }
        
        if(j == -1){
            flag = true;
            j++;
            row_num++;
        }
        
        i++;
    }
    
    return;
}
