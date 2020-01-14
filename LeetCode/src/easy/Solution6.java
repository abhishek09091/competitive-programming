package easy;

import java.util.*;

/***********
 * 
 * 
 * Question Link: https://leetcode.com/problems/distribute-candies-to-people/
 * 
 * Input: candies = 7, num_people = 4
 * Output: [1,2,3,1]
 * Explanation:
 * On the first turn, ans[0] += 1, and the array is [1,0,0,0].
 * On the second turn, ans[1] += 2, and the array is [1,2,0,0].
 * On the third turn, ans[2] += 3, and the array is [1,2,3,0].
 * On the fourth turn, ans[3] += 1 (because there is only one candy left), and the final array is [1,2,3,1].
 * 
 * 
 * Input: candies = 10, num_people = 3
 * Output: [5,2,3]
 * Explanation: 
 * On the first turn, ans[0] += 1, and the array is [1,0,0].
 * On the second turn, ans[1] += 2, and the array is [1,2,0].
 * On the third turn, ans[2] += 3, and the array is [1,2,3].
 * On the fourth turn, ans[0] += 4, and the final array is [5,2,3].
 * 
 * 
 * *********/

public class Solution6 {
	
	 public int[] distributeCandies(int candies, int num_people) {
		 
		 int res[] = new int[num_people];
		 
		 int i = 1;
		 int index = 0;
		 while(candies > 0) {
			 
			 
			 if(index < num_people && candies >= i) {
				 res[index] = res[index] + i;
			 }else if(index == num_people && candies >= i) {
				 index = 0;
				 res[index] = res[index] + i;
			 }
			 
			 if(candies < i) {
				 res[index] = res[index] + candies;
				 break;
			 }
			 candies -= i;
			 index++;
			 i++;
		 }
		 
		 return res;
	 }
	 
	 public int[] distributeCandiesBetter(int candies, int num_people) {
		 
		 int res[] = new int[num_people];
		 
		 for(int give = 0; candies > 0; candies -= give) {
			 
			 res[give % num_people] = res[give % num_people] + Math.min(candies, ++give);
		 } 
		 return res;
	 }
	 

}
