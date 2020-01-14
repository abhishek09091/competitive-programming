package weekly13Oct2019;


/**********
 * 
 * 
 * Question Link: https://leetcode.com/problems/split-a-string-in-balanced-strings/
 * 
 * **********/
public class Solution {
	
	
	 public int balancedStringSplit(String s) {
		  
		  int i = 0;
		  int num = 0;
		  int count = 0;
		  
		  while(i < s.length()) {
               
             if(s.charAt(i) == 'L'){
                 num++;
             }else{
                 num--;
             }
             i++;
             if(num == 0){
                 count++;
             }
         }
		  
	      return count;  
	  }

}
