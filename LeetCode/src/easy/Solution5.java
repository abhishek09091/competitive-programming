package easy;

import java.util.*;

/************
 * 
 * Question Link : https://leetcode.com/problems/occurrences-after-bigram/
 * 
 * Example 1:
 *  
 * Input: text = "alice is a good girl she is a good student", first = "a", second = "good"
 * 
 * Output: ["girl","student"]
 * 
 * 
 * Example 2:
 * 
 * Input: text = "we will we will rock you", first = "we", second = "will"
 * 
 * Output: ["we","rock"]
 * 
 * 
 * Time Complexity : O ( N )
 * Space Complexity : O ( N )
 * 
 * *********/

public class Solution5 {
	
	public String[] findOcurrences(String text, String first, String second) {
		
		String textArray[] = text.split(" ");
		
		List<String> result = new ArrayList<>();
		
		for(int i=0; i<textArray.length; i++) {
			
			if(i + 2 < textArray.length && textArray[i].equals(first) && textArray[i+1].equals(second)) {
				
				result.add(textArray[i+2]);
			}
		}
		
		return result.toArray(new String[result.size()]);
    }

}
