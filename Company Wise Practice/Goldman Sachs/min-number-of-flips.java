/*package whatever //do not write package name here */
/*********

https://www.geeksforgeeks.org/number-flips-make-binary-string-alternate/
geeksforgeeks.org/minimum-number-of-replacements-to-make-the-binary-string-alternating-set-2/

********/
import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {
	public static void main (String[] args) {
		//code
		Scanner sc = new Scanner(System.in);
		
		Integer t = sc.nextInt();
		
		while(t-- > 0){
		    
		    String str = sc.next();
		    int len = str.length();
		    int count = 0;
		    for(int i=0; i<len; i++){
		        
		        if(i%2 == 0 && str.charAt(i) == '1'){
		            count++;
		        }
		        
		        if(i%2 == 1 && str.charAt(i) == '0'){
		            count++;
		        }
		    }
		    
		    System.out.println(Math.min(count,len - count));
		}
		
		sc.close();
	}
}