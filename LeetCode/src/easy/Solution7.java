package easy;

/*******
 * 
 * 
 * Question Link : https://leetcode.com/problems/defanging-an-ip-address/
 * 
 * 
 * Example 1:
 * 
 * Input: address = "1.1.1.1"
 * Output: "1[.]1[.]1[.]1"
 * 
 * Example 2:
 * 
 * Input: address = "255.100.50.0"
 * Output: "255[.]100[.]50[.]0"
 * 
 * 
 * *****/
public class Solution7 {
	
	  public String defangIPaddr(String address) {
		  
		  //return address.replace(".", "[.]");
		
		  return String.join("[.]",address.split("\\."));
	  }
	  
	  public static void main(String[] args) {
		  
		  Solution7 obj = new Solution7();
		  System.out.println(obj.defangIPaddr("1.1.1.1"));
	}

}
