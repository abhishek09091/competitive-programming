/*This is a function problem.You only need to complete the function given below*/
//Complete this function
void interchangeRows(int n1, int m1, int arr1[SIZE][SIZE]){
    //Your code here
    
    for(int i=0, k=n1-1; i<n1/2; i++,k--){
        
        for(int j=0; j<m1; j++){
            swap(arr1[i][j],arr1[k][j]);
        }
    }
    
    return;
}