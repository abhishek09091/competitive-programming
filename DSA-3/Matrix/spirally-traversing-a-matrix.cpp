/******

https://www.geeksforgeeks.org/print-a-given-matrix-in-spiral-form/

*******/

/*This is a function problem.You only need to complete the function given below*/
//Complete this function
void spirallyTraverse(int m, int n, int ar[SIZE][SIZE]){
    //Your code here
    
    int k = 0 , l = 0;
    
    while(k < m && l < n ){
        
        for(int i=l; i<n; ++i){
            cout<<ar[k][i]<<" ";
        }
        k++;
        
        for(int i=k; i<m; ++i){
            cout<<ar[i][n-1]<<" ";
        }
        n--;
        
        if(k < m){
            for(int i=n-1; i>=l; --i){
                cout<<ar[m-1][i]<<" ";
            }
            m--;
        }
        
        if(l < n){
            for(int i=m-1; i>=k ; --i ){
                cout<<ar[i][l]<<" ";
            }
            l++;
        }
    }
    
    
    return;
}
