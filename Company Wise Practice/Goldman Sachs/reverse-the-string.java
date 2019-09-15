/*******

https://www.geeksforgeeks.org/swapping-characters-string-java/

******/

import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {
	public static void main (String[] args) {
		//code
		Scanner sc = new Scanner(System.in);
		Integer t = sc.nextInt();
		
		while(t-- > 0){
		    String temp = sc.next();
		
		    int s = 0;
		    int e = temp.length()-1;
		    char str[] = temp.toCharArray();
		    while(s < e){
		        char i = str[s];
		        str[s] = str[e];
		        str[e] = i;
		        s++;
		        e--;
		    }
		    System.out.println(new String(str));
		}
		sc.close();
	}
}