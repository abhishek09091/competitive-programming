/*****

https://www.geeksforgeeks.org/minimum-operations-required-make-row-column-matrix-equals/

******/

/*This is a function problem.You only need to complete the function given below*/
//Complete this function
// Function to find minimum number of operation
int findMinOpeartion(int matrix[][100], int n){
    //Your code here
    int maxRowSum = INT_MIN;
	int maxColSum = INT_MIN;
    int matrixSum = 0;
    int tempRowSum = 0;
	int tempColSum = 0;
    for(int i=0; i<n; i++){
        tempRowSum = 0;
		tempColSum = 0;
        for(int j=0; j<n; j++){
            tempRowSum += matrix[i][j];
			tempColSum += matrix[j][i];
            matrixSum += matrix[i][j];
        }
        if(tempRowSum > maxRowSum){
            maxRowSum = tempRowSum;
        }
		
		if(tempColSum > maxColSum){
            maxColSum = tempColSum;
        }
    }
    
    if(maxColSum > maxRowSum){
		return (maxColSum * n) - (matrixSum);
	}else{
		return (maxRowSum * n) - (matrixSum);
	}
    
}
