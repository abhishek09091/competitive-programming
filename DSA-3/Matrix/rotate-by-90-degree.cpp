/******

https://www.faceprep.in/procoder/knowledgebase/matrix-rotation-by-90-degrees-in-clockwise-and-anti-clockwise-directions/

*****/

/*This is a function problem.You only need to complete the function given below*/
/*  Function to rotate matrix by 90 degrees
*   n: input for matrix size
*   N: size defined globally
*/
void rotateby90(int n, int a[][N]){
    
    
    
    // Your code here
    
    //First Find out the transpose
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            swap(a[i][j],a[j][i]);
        }
    }
    
    int k;
    for(int i=0; i<n; i++){
        k = n - 1;
        for(int j=0; j<k; j++){
            swap(a[j][i],a[k][i]);
            k--;
        }
    }
    
    return;
}