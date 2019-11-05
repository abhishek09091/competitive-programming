/*package whatever //do not write package name here */
/************

https://www.geeksforgeeks.org/sudoku-backtracking-7/

*************/
import java.util.Scanner;

class Location{
	
	public int row;
	public int col;
	
	public Location(int i,int j) {
		this.row = i;
		this.col = j;
	}
}

class GFG {
	
	public static Location findUnassignedLocation(int arr[][]) {
		Location location = null;
		for(int i=0; i<9; i++) {
			
			for(int j=0; j<9; j++) {
				
				if(arr[i][j] == 0) {
					
					location = new Location(i,j);
					return location;
				}
			}
		}
		
		return location;
	}
	
	public static boolean isRowSafe(int arr[][],int row,int num) {
		
		for(int i=0; i<9; i++) {
			
			if(arr[row][i] == num){
				return false;
			}
		}
		
		return true;
	}
	
	public static boolean isColSafe(int arr[][],int col,int num) {
		
		for(int i=0; i<9; i++) {
			
			if(arr[i][col] == num){
				return false;
			}
		}
		
		return true;
	}
	
	public static boolean isBoxSafe(int arr[][],int row,int col,int num) {
		
		int sqrt = (int) Math.sqrt(arr.length);
		int boxRowStart = row - row % sqrt;
		int boxColStart = col - col % sqrt;
		
		for(int r = boxRowStart; r < boxRowStart + sqrt; r++) {
			
			for(int c = boxColStart; c < boxColStart + sqrt; c++) {
				
				if(arr[r][c] == num) {
					return false;
				}
			}
		}
		
		return true;
	}
	
	public static boolean isSafe(int arr[][],int row,int col,int num) {
		
		 return (isRowSafe(arr,row,num) && isColSafe(arr,col,num) && isBoxSafe(arr,row,col,num) && arr[row][col] == 0);
				
	}
	
	public static boolean solveSudoku(int arr[][]) {
		
		int row = 0 , column = 0;
		
		Location location = findUnassignedLocation(arr);
		if(location == null) {
			return true;
		}
		
		for(int num=1; num<=9; num++) {
			
			if(isSafe(arr,location.row,location.col,num)) {
				//System.out.println("Inside solveSudko i: "+location.row+" j: "+location.col);
				arr[location.row][location.col] = num;
				
				if(solveSudoku(arr)) {
					return true;
				}
				arr[location.row][location.col] = 0;
				
			}
		}
		return false;
	}
	
	public static void printMatrix(int arr[][]) {
		
		for(int i=0; i<9; i++) {
			for(int j=0; j<9; j++) {
				System.out.print(arr[i][j]+" ");
			}
			
		}
		
		System.out.println();
	}
	
	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		
		Integer t = sc.nextInt();
		
		while(t-- > 0) {
			
			int arr[][] = new int[9][9];
			
			for(int i=0; i<9; i++) {
				for(int j=0; j<9; j++) {
					arr[i][j] = sc.nextInt();
				}
			}
			
			if(solveSudoku(arr)) {
				printMatrix(arr);
			}else {
				System.out.println("Solution doesn't exit");
			}
			
		}
		
		sc.close();
	}

}
