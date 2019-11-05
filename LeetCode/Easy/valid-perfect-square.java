/*********
 * 
 * 
 * https://leetcode.com/problems/valid-perfect-square/
 * https://www.geeksforgeeks.org/check-if-a-number-is-perfect-square-without-finding-square-root/
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
