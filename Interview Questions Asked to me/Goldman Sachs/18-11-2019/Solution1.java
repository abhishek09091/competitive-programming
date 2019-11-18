/*********
 * 
 * Counting connections in matrix
 * 
 * 
 * Input :
 * 3 4
 * 1 0 0 1
 * 0 1 1 1
 * 1 0 0 1
 * 
 * Output: 8
 * 
 * 
 * **********/
import java.io.IOException;
import java.util.List;

public class Solution {
	
	static int countConnections(List<List<Integer>> matrix) {
		
		int count = 0;
		int row = matrix.size() , col = matrix.get(0).size();
		
		int arr[][] = new int[row][col];
		for(int i=0; i<row; i++) {
			
			List<Integer> temp = matrix.get(i);
			
			for(int j=0; j<temp.size(); j++) {
				
				arr[i][j] = temp.get(j);
			}
		}
		
		for(int i=0; i<row; i++) {
			for(int j=0; j<col; j++) {
				
				//first check
				if(arr[i][j] == 1) {
					
					//check down
					if(i+1 < row && arr[i+1][j] == 1) {
						count++;
					}
					
					//check south-east
					if(i+1<row && j+1 <col && arr[i+1][j+1] == 1) {
						count++;
					}
					
					//check adjacent
					if(j+1<col && arr[i][j+1]==1) {
						count++;
					}
					
					//check north-east
					if(i-1 >= 0 && j+1<col && arr[i-1][j+1] == 1) {
						count++;
					}
				}
			}
		}
		
		return count;

    }

    public static void main(String[] args) throws IOException {
    	
    }

}
