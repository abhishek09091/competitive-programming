/*****

https://www.geeksforgeeks.org/program-to-find-transpose-of-a-matrix/

****/

/*This is a function problem.You only need to complete the function given below*/
/*  Function which converts A[][] to its transpose
*   n: size of matrix
*   N: globally defined for matrix
*   A: input matrix
*/
void transpose( int A[][N],int n) 
{ 
	// Your code here
	for(int i=0; i<n; i++){
	    for(int j=i+1; j<n; j++){
	        swap(A[i][j],A[j][i]);
	    }
	}
	
	return;
}