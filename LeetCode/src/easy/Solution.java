package easy;

import java.util.HashMap;
import java.util.Map;

/**********
 * 
 * 
 * https://leetcode.com/problems/x-of-a-kind-in-a-deck-of-cards/submissions/
 * 
 * **********/

public class Solution {
	
	public  int gcd(int x,int y) {
		
		return x == 0 ? y : gcd(y%x,x);
	}
	
    public boolean hasGroupsSizeX(int[] deck) {
       
    	Map<Integer,Integer> map = new HashMap<Integer, Integer>();
    	
    	for(int i=0; i<deck.length; i++) {
    		
    		if(map.containsKey(deck[i])) {
    			map.put(deck[i], map.get(deck[i])+ 1);
    		}else {
    			map.put(deck[i], 1);
    		}
    	}
    	
    	int res = -1;
    	
    	for (Map.Entry<Integer, Integer> i : map.entrySet()) {
			
    		if(res == -1) {
    			res = i.getValue();
    		}else {
    			res = gcd(res,i.getValue());
    		}
		}
    	
    	return res >= 2;
    }
}
