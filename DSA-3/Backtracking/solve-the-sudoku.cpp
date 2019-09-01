/**********

https://www.geeksforgeeks.org/sudoku-backtracking-7/

*********/

#include <bits/stdc++.h>
using namespace std;
// UNASSIGNED is used for empty cells in sudoku grid 
#define UNASSIGNED 0  
// N is used for the size of Sudoku grid.  
// Size will be NxN  
#define N 9  
bool SolveSudoku(int grid[N][N]);
void printGrid(int grid[N][N]);
int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int grid[N][N];
		
		for(int i=0;i<9;i++)
		    for(int j=0;j<9;j++)
		        cin>>grid[i][j];
		
		if (SolveSudoku(grid) == true)  
            printGrid(grid);  
        else
            cout << "No solution exists";  
        
        cout<<endl;
	}
	
	return 0;
}

/*This is a function problem.You only need to complete the function given below*/

void printGrid(int mat[N][N])
{
    for(int i=0;i<9;i++)
    {
        for(int j=0;j<9;j++)
            cout<<mat[i][j]<<" ";
    }
}

bool findUnassignedLocation(int grid[N][N],int &row,int &col){
    
    for(row = 0; row<N; row++){
        
        for(col = 0; col< N; col++){
            
            if(grid[row][col] == UNASSIGNED){
                return true;
            }
        }
    }
    
    return false;
}

bool usedInRow(int grid[N][N],int row,int num){
    
    for(int col = 0; col<N; col++){
        
        if(grid[row][col] == num){
            return true;
        }
    }
    
    return false;
}



bool usedInCol(int grid[N][N],int col,int num){
    
    for(int row = 0; row<N; row++){
        
        if(grid[row][col] == num){
            return true;
        }
    }
    
    return false;
}

bool usedInBox(int grid[N][N],int boxStartRow,int boxStartCol,int num){
    
    for(int row = 0; row<3; row++){
        
        for(int col = 0; col<3; col++){
            
            if(grid[boxStartRow + row][boxStartCol + col] == num){
                return true;
            }
        }
    }
    
    return false;
}

bool isSafe(int grid[N][N],int row,int col,int num){
    
    return !usedInRow(grid,row,num) &&
           !usedInCol(grid,col,num) &&
           !usedInBox(grid,row - row % 3,col - col % 3,num) &&
           grid[row][col] == UNASSIGNED;
}

bool SolveSudoku(int grid[N][N])  { 
    // Your code here
    int row, col;
    
    if(!findUnassignedLocation(grid,row,col)){
        return true;
    }
    
    for(int num=1; num<=9; num++){
        
        if(isSafe(grid,row,col,num)){
            
            grid[row][col] = num;
            
            if(SolveSudoku(grid)){
                return true;
            }
            
            grid[row][col] = UNASSIGNED;
        }
    }
    
    return false;
}
