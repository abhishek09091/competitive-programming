package easy;


/*********
 * 
 * 
 * https://leetcode.com/problems/valid-perfect-square/
 * 
 * Example:
 * 
 * Input: 16
   Output: true
 * 
 * Input: 14
   Output: false
 * 
 * 
 * **********/
public class Solution2 {
	
    public boolean isPerfectSquare(int num) {
        
        double sqrt = (int)Math.sqrt(num);
        
        return ((sqrt - Math.floor(sqrt)) == 0);
    }
}
