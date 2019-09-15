/*package whatever //do not write package name here */

import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {
	public static void main (String[] args) {
		//code
		Scanner sc = new Scanner(System.in);
	    Integer t = sc.nextInt();
	    
	    while(t-- > 0){
	        Integer num = sc.nextInt();
	        
	        int res = (int)(Math.sqrt(2.0 * num + 0.25) - 0.5);
	        System.out.println(res);
	    }
	    sc.close();	
	}
}