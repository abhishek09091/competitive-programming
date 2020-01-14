package easy;

import java.util.HashMap;
import java.util.Map;

/**********
 * 
 * Question Link:
 * 
 * https://leetcode.com/problems/word-pattern/
 * 
 * Example input:
 * 
 * Input: pattern = "abba", str = "dog cat cat dog"
   Output: true
 * 
 * Input:pattern = "abba", str = "dog cat cat fish"
   Output: false
 * 
 * Input: pattern = "aaaa", str = "dog cat cat dog"
   Output: false
 * 
 * Input: pattern = "abba", str = "dog dog dog dog"
   Output: false
 * 
 * Input: pattern = "aba", str = "dog cat cat"
   Output: false
 * 
 * Input: pattern = "ab", str = "dog dog"
   Output: false

 * 
 * ************/

public class Solution1 {
	
	public boolean wordPattern(String pattern, String str) {
		
		Map<Character,String> domain = new HashMap<Character, String>();
		Map<String, Character> codomain = new HashMap<String, Character>();
		String words[] = str.split(" ");
		
		if(words.length != pattern.length()) {
			return false;
		}
		
		for(int i=0; i<pattern.length(); i++) {
			
			if(domain.containsKey(pattern.charAt(i)) && codomain.containsKey(words[i])) {
				
				if(!domain.get(pattern.charAt(i)).equals(words[i]) || !codomain.get(words[i]).equals(pattern.charAt(i))) {
					return false;
				}
			}else if(!domain.containsKey(pattern.charAt(i)) && !codomain.containsKey(words[i])){
				domain.put(pattern.charAt(i), words[i]);
				codomain.put(words[i], pattern.charAt(i));
			}else {
				return false;
			}
		}
		return true;
    }

}
