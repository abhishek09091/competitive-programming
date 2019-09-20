/*********

https://www.geeksforgeeks.org/min-cost-path-dp-6/

*********/

import java.util.Scanner;

public class GFG_2 {
	
	public static int maximumPath(int arr[][]) {
		
		int row = arr.length;
		int col = arr[0].length;
		
		int res[][] = new int[row][col];
		res[row-1][0] = arr[row-1][0];
		
		for(int i=row-2; i>=0; i--){
			res[i][0] = res[i+1][0] + arr[i][0];
		}
		
		for(int i=1; i<col; i++) {
			res[row-1][i] = res[row-1][i-1] + arr[row-1][i];
		}
		
		
		for(int i=row-2; i>=0; i--) {
			
			for(int j=1; j<col; j++) {
				
				res[i][j] = arr[i][j] + Math.max(res[i+1][j], res[i][j-1]);
			}
		}
		
		return res[0][col-1];
	}
	
	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		
		Integer t = sc.nextInt();
		
		while(t-- > 0) {
			Integer m = sc.nextInt();
			Integer n = sc.nextInt();
			
			int arr[][] = new int[m][n];
			for(int i=0; i<m; i++) {
				for(int j=0; j<n; j++) {
					arr[i][j] = sc.nextInt();
				}
			}
			
			System.out.println(maximumPath(arr));
		}
		
		sc.close();
;	}

}
