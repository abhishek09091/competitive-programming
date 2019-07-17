/*****

https://www.geeksforgeeks.org/boundary-elements-matrix/

*****/

/*This is a function problem.You only need to complete the function given below*/
/*  Function to print boundary traversal of the matrix
*   n1, m1: rows and cols of matrix
*   arr[][]: input matrix
*/
void boundaryTraversal(int n1, int m1, int arr[SIZE][SIZE]){
    
    // Your code here
    
    if(n1 == 1 || m1 == 1){
        if(n1 == 1){
            for(int i=0; i<m1; i++){
                cout<<arr[0][i]<<" "; 
            }
        }else{
            for(int i=0; i<n1; i++){
                cout<<arr[i][0]<<" "; 
            }
        }
    }else{
        
        int total = 2 * (n1) + 2 * (m1 - 2);
        bool up = true , right = false , down = false , left = false;
        int col = 0;
        int row = 1;
        while(total > 0){
            //print the upper row
            if(up == true && col < m1){
                
                cout<<arr[0][col]<<" ";
                col++;
                if(col == m1){
                    up = false;
                    right = true;
                }
                
            }else if(right == true && row < n1){
                cout<<arr[row][m1-1]<<" ";
                row++;
                if(row == n1){
                    right = false;
                    down = true;
                    col = m1 - 2;
                }
            }else if(down == true && col >= 0){
                cout<<arr[n1-1][col]<<" ";
                col--;
                if(col == -1){
                    down = false;
                    left = true;
                    row = n1 - 2;
                }
                
            }else if(left == true && row >= 0){
                cout<<arr[row][0]<<" ";
                row--;
                if(row == 0){
                    left = false;
                }
            }
            //cout<<"total: "<<total<<endl;
            total--;
        }
    }
    
    
    
}
