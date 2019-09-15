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
		    String s1 = sc.next();
		    String s2 = sc.next();
		    
		    String res = "";
		    
		    int i = 0;
		    int j = 0;
		    boolean flag = true;
		    while(i < s1.length() && j < s2.length()){
		        
		        if(flag == true){
		            String temp = new Character(s1.charAt(i)).toString();
		            res = res + temp;
		            i++;
		            flag = false;
		        }else{
		            String temp = new Character(s2.charAt(j)).toString();
		            res = res + temp;
		            j++;
		            flag = true;
		        }
		    }
		    
		    while(i < s1.length()){
		        String temp = new Character(s1.charAt(i)).toString();
		            res = res + temp;
		            i++;
		    }
		    
		    while(j < s2.length()){
		        String temp = new Character(s2.charAt(j)).toString();
		            res = res + temp;
		            j++;
		    }
		    
		    System.out.println(res);
		}
		
		sc.close();
	}
}