package weekly13Oct2019;

import java.util.*;

/*******
 * 
 * Question Link: https://leetcode.com/problems/queens-that-can-attack-the-king/
 * 
 * Algorithm:
 * 
 *  1. Start from the king position
 *  2. Check for the nearest point in 8 direction
 *  3. If it is within the range of 8*8 chess board add the point and ignore all points in that direction
 * 
 * 
 * *******/

public class Solution1 {
	
	 public List<List<Integer>> queensAttacktheKing(int[][] queens, int[] king) {
		 
		 List<List<Integer>> list = new ArrayList<>();
		 
		 boolean seen[][] = new boolean[8][8];
		 
		 for(int[] queen: queens) {
			 seen[queen[0]][queen[1]] = true;
		 }
		 
		 for(int i=-1; i<=1; i++) {
			 
			 for(int j=-1; j<=1; j++) {
				 
				 if(i == 0 && j == 0) continue;
				 
				 List<Integer> res = findTheClosetOne(seen,king,i,j);
				 
				 if(res != null) list.add(res);
				 
			 }
		 }
	        
		 return list;
	  }
	 
	 private List<Integer> findTheClosetOne(boolean seen[][],int king[], int dr,int dc){
		 
		 int kr = king[0] + dr, kc = king[1] + dc;
		 
		 while(kr >=0 && kr < 8 && kc >=0 && kc< 8) {
			 
			 if(seen[kr][kc]) return Arrays.asList(kr, kc);
			 
			 kr += dr;
			 kc += dc;
		 }
		 
		 
		 return null;
	 }

}
