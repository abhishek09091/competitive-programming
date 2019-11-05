/*package whatever //do not write package name here */

import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {
    public static int convertPalindrome(int num){
        
        int res = 0;
        
        while(num > 0){
            
            int rem = num % 10;
            
            res = res * 10 + rem;
            
            num /= 10;
        }
        
        return res;
    }
	public static void main (String[] args) {
		//code
		Scanner sc = new Scanner(System.in);
		Integer t = sc.nextInt();
		
		while(t-- > 0){
		    
		    Integer num = sc.nextInt();
		    
		    Integer res = convertPalindrome(num);
		    
		   // System.out.println("res" + res);
		    if(num.equals(res)){
		        System.out.println("Yes");
		    }else{
		        System.out.println("No");
		    }
		}
		
		sc.close();
	}
}