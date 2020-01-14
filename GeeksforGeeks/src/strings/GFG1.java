package strings;


import java.util.*;
import java.lang.*;
import java.io.*;

public class GFG1 {
	public static void main (String[] args) {
		//code
		Scanner sc = new Scanner(System.in);
		
		Integer t = sc.nextInt();
		
		while(t-- > 0){
		    
		    String str1 = sc.next();
		    String str2 = sc.next();
		   // System.out.println("Str1: " + str1 + " Str2: "+str2);
		    if(str1.length() != str2.length()){
		        System.out.println("NO");
		    }else{
		        
		       int value = 0;
		       for(int i=0; i<str1.length(); i++) {
		    	   
		    	   value = value ^ (int)str1.charAt(i);
		    	   value = value ^ (int)str2.charAt(i);
		       }
		       
		       if(value == 0) {
		    	   System.out.println("YES");
		       }else{
		    	   System.out.println("NO");
		       }
		    }
		}
		
		sc.close();
	}
}
