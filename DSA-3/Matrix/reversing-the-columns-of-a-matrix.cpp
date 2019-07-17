/*This is a function problem.You only need to complete the function given below*/
//Complete this function
void reverseCol(int n1, int m1, int arr1[SIZE][SIZE]){
    //Your code here
    for(int i=0,k=m1-1; i<m1/2; i++,k--){
        
        for(int j=0; j<n1; j++){
            swap(arr1[j][i],arr1[j][k]);
        }
    }
    
    return;
}