/*package whatever //do not write package name here */
/*********

https://www.geeksforgeeks.org/find-excel-column-name-given-number/

*********/

import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {
	public static void main (String[] args) {
		//code
		Scanner sc = new Scanner(System.in);
		
		Integer t = sc.nextInt();
		
		while(t-- > 0){
		    Integer n = sc.nextInt();
		    
		    String res = "";
		    
		    while(n > 0){
		        int rem = n % 26;
		        
		        if(rem == 0){
		            res += Character.toString('Z');
		            n = (n/26) - 1;
		        }else{
		            char ch = (char)((rem - 1) + 'A');
		            res += Character.toString(ch);
		            n /= 26;
		        }
		    }
		    
		    for(int i=res.length()-1; i>=0; i--){
		        System.out.print(res.charAt(i));
		    }
		    
		    System.out.println();
		}
		
		sc.close();
	}
}