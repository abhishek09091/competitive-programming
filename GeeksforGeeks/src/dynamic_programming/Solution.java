package dynamic_programming;

import java.util.Scanner;

public class Solution {
    public static int minPathSum(int[][] grid) {
        
        int row = grid.length;
        int col = grid[0].length;
        //System.out.println("Row: "+row+" Col: "+col);
        int res[][] = new int[row][col];
        
        res[0][0] = grid[0][0];
        
        for(int i=1; i<col; i++){
            res[0][i] = res[0][i-1] + grid[0][i];
        }
        
        for(int i=1; i<row; i++){
            res[i][0] = res[i-1][0] + grid[i][0];
        }
        
        for(int i=1; i<row; i++){
            for(int j=1; j<col; j++){
                
                res[i][j] = grid[i][j] + Math.min(res[i-1][j],res[i][j-1]); 
            }
        }
        
		/*
		 * for(int i=0; i<row; i++){ for(int j=0; j<col; j++){
		 * System.out.print(res[i][j]+" "); }
		 * 
		 * System.out.println(); }
		 */
        
        return res[row-1][col-1];
        
    }
    
    public static void main(String[] args) {
		
    	Scanner sc = new Scanner(System.in);
    	Integer m = sc.nextInt();
		Integer n = sc.nextInt();
		
    	int arr[][] = new int[m][n];
		for(int i=0; i<m; i++) {
			for(int j=0; j<n; j++) {
				arr[i][j] = sc.nextInt();
			}
		}
		System.out.println(minPathSum(arr));
	}
}