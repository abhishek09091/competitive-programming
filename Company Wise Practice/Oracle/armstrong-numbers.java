/*package whatever //do not write package name here */

import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {
    
    public static boolean isAmstrong(int num){
        int res = 0;
        int temp = num;
        while(num > 0){
            
            int rem = num%10;
            
            res += (rem * rem * rem);
            
            num /= 10;
        }
        
        if(res == temp){
            return true;
        }
        
        return false;
    }
	public static void main (String[] args) {
		//code
		Scanner sc = new Scanner(System.in);
		
		Integer t = sc.nextInt();
		
		while(t-- > 0){
		    
		    Integer n = sc.nextInt();
		    
		    boolean res = isAmstrong(n);
		    
		    if(res){
		        System.out.println("Yes");
		    }else{
		        System.out.println("No");
		    }
		    
		}
		
		sc.close();
	}
}