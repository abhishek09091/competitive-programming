package weekly28Oct2019;


/**********
 * 
 * 
 * https://leetcode.com/problems/find-positive-integer-solution-for-a-given-equation/
 * 
 * Example 1:
 *
 * Input: function_id = 1, z = 5
 * 
 * Output: [[1,4],[2,3],[3,2],[4,1]]
 * 
 * Explanation: function_id = 1 means that f(x, y) = x + y
 * 
 * 
 * Example 2:
 *
 * Input: function_id = 2, z = 5
 * 
 * Output: [[1,5],[5,1]]
 * 
 * Explanation: function_id = 2 means that f(x, y) = x * y
 * 
 * ***********/
import java.util.*;

/*
 * // This is the custom function interface.
 * // You should not implement it, or speculate about its implementation
 * class CustomFunction {
 *     // Returns f(x, y) for any given positive integers x and y.
 *     // Note that f(x, y) is increasing with respect to both x and y.
 *     // i.e. f(x, y) < f(x + 1, y), f(x, y) < f(x, y + 1)
 *     public int f(int x, int y);
 * };
 */

class CustomFunction{
	
	public int f(int x, int y) {
		
		return x + y;
	}
}

public class Solution1 {
	
	   public List<List<Integer>> findSolution(CustomFunction customfunction, int z) {
       	int y = 1000;
   	List<List<Integer>> res = new ArrayList<>();
   	
   	for(int x=1; x<=1000 && y > 0; ++x) {
   		
   		while(y > 1 && customfunction.f(x, y) > z) y--;
   		
   		if(customfunction.f(x, y) == z) {
   			List<Integer> temp = new ArrayList<Integer>();
   			temp.add(x);
   			temp.add(y);
   			res.add(temp);
   		}
   	}
   	
   	
   	return res;
   }
}
