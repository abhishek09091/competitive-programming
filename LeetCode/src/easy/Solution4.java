package easy;

/**********
 * 
 * 
 * Question Link : https://leetcode.com/problems/greatest-common-divisor-of-strings/
 * 
 * 
 * *********/
public class Solution4 {
	
	private int gcd(int a,int b) {
		
		if(b == 0) return a;
		
		return  ( a % b == 0 ) ? b : gcd(b, a% b);
	}
	
	public String gcdOfStrings(String str1, String str2) {
		
		if(!(str1+str2).equals(str2+str1)) {
			return "";
		}
		
		int len1 = str1.length();
		int len2 = str2.length();
		
		int gcd = gcd(len1,len2);
		
		if(len1 < len2) {
			
			str1.substring(0,gcd);
		}
		
		return str2.substring(0,gcd);
	}

}
