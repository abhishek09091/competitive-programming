package mathematics;

import java.util.Scanner;

public class GFG4 {
	
	public static void sprialTraverse(int arr[][],int row,int col) {
		
		int i, r = 0, c = 0;
		
		while(r < row && c < col) {
			
			//starting row of remaining matrix
			for(i = c; i<col; i++) {
				System.out.print(arr[r][i]+" ");
			}
			r++;
			
			//last column of remaining column
			for(i = r; i<row; i++) {
				System.out.print(arr[i][col-1]+" ");
			}
			col--;
			
			if(r < row) {
				for(i=col-1; i>=c ;i--) {
					System.out.print(arr[row - 1][i]+" ");
				}
				row--;
			}
			
			if(c < col) {
				for(i = row-1; i >= r ;i--) {
					System.out.print(arr[i][c]+" ");
				}
				
				c++;
			}
			
			
		}
	}
	
	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		
		Integer  t = sc.nextInt();
		
		while(t-- > 0) {
			
			Integer row = sc.nextInt();
			
			Integer col = sc.nextInt();
			
			int arr[][] = new int[row][col];
			
			for(int i=0; i<row; i++) {
				for(int j=0; j<col; j++) {
					arr[i][j] = sc.nextInt();
				}
			}
			
			sprialTraverse(arr,row,col);
			
		}
		
		sc.close();
	}

}
