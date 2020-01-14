package easy;

import java.util.Arrays;
import java.util.Scanner;

/************
 * 
 * Question Link : https://leetcode.com/problems/height-checker/
 * 
 * Example:
 * 
 * Input: [1,1,4,2,1,3]
 * 
 * Output: 3
 * 
 * Explanation: 
 * 
 *   Students with heights 4, 3 and the last 1 are not standing in the right positions.
 * 
 * 
 * ***********/

public class Solution3 {
	
	
	//Using the Sorting
	public int heightChecker(int[] heights) {
		
		int[] temp = Arrays.copyOf(heights, heights.length);
		Arrays.sort(temp);
		
		int count = 0;
		
		for(int i=0; i<heights.length; i++) {
			
			if(temp[i] != heights[i]) {
				count++;
			}
		}
		
		return count;
	}
	
	//Using count sort
	public int heightCheckerCountSort(int[] heights) {
		
		int fre[] = new int[101];
		
		for(int i=0; i<heights.length; i++) {
			fre[heights[i]]++;
		}
		
		int result = 0;
		int currHeight = 0;
		
		for(int i=0; i<heights.length; i++) {
			
			while(fre[currHeight] == 0) {
				currHeight++;
			}
			
			if(currHeight != heights[i]) {
				result++;
			}
			
			fre[currHeight]--;
		}
		
		return result;
	}
	
	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		
		sc.close();
	}

}
