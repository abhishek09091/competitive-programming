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
		    
		    if(str.charAt(0) >= 'a' && str.charAt(0) <= 'z') {
		    	System.out.println(str.toLowerCase());
		    }else {
		    	System.out.println(str.toUpperCase());
		    }
		}
		
		sc.close();
	}
}