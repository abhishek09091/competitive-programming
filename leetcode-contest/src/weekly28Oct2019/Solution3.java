package weekly28Oct2019;


/************
 * 
 * 
 * https://leetcode.com/problems/maximum-length-of-a-concatenated-string-with-unique-characters/
 * 
 * Example 1:
 *
 * Input: arr = ["un","iq","ue"]
 * 
 * Output: 4
 * 
 * Explanation: All possible concatenations are "","un","iq","ue","uniq" and "ique".
 * Maximum length is 4.
 * 
 * 
 * Example 2:
 *
 * Input: arr = ["cha","r","act","ers"]
 * 
 * Output: 6
 * 
 * Explanation: Possible solutions are "chaers" and "acters".
 * 
 * 
 * Example 3:
 *
 * Input: arr = ["abcdefghijklmnopqrstuvwxyz"]
 * 
 * Output: 26
 * 
 * 
 * ************/
import java.util.HashSet;
import java.util.List;

public class Solution3 {
	
	private int result = 0;
	 
	public int maxLength(List<String> arr) {
		 
		if(arr == null || arr.size() == 0) {
			return 0;
		}
		
		 dfs(arr,"",0);
		
		 return result;
	}
	
	private void dfs(List<String> arr,String combine,int index) {
		
		boolean isUnique = isUnique(combine);
		
		if(isUnique) {
			result = Math.max(result, combine.length());
		}
		
		if(index == arr.size() || !isUnique) {
			return;
		}
		
		for(int idx = index; idx<arr.size(); idx++) {
			
			dfs(arr,combine+arr.get(idx),idx+1);
		}
	}
	
	private boolean isUnique(String str) {
		
		HashSet<Character> ch = new HashSet<Character>();
		
		for(int i=0; i<str.length(); i++) {
			
			if(ch.contains(str.charAt(i))) {
				return false;
			}else {
				ch.add(str.charAt(i));
			}
		}
		
		return true;
	}

}

class Solution{
	
	private int result = 0;
	
	public int maxLength(List<String> arr) {
		
		
		for(int i=0; i<arr.size(); i++) {
			
			HashSet<Character> temp = new HashSet<Character>();
			boolean has = false;
			
			for(int j=0; j<arr.get(i).length(); j++) {
				
				if(temp.contains(arr.get(i).charAt(j))) {
					has = true;
					break;
				}else {
					temp.add(arr.get(i).charAt(j));
				}
			}
			
			if(has) {
				continue;
			}
			
			result = Math.max(result, temp.size());
			
			for(int j=0; j<arr.size(); j++) {
				
				has = false;
				
				if(i == j) {
					continue;
				}
				
				HashSet<Character> data = new HashSet<Character>();
				
				for(Character c: arr.get(j).toCharArray()) {
					
					if(data.contains(c) || temp.contains(c)) {
						has = true;
						break;
					}
					data.add(c);
				}
				
				if(!has) {
					temp.addAll(data);
				}
				result = Math.max(result, temp.size());
			}
		}
		
		return result;
	}
	
	
}
