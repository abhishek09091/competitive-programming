/*package whatever //do not write package name here */
/********

https://www.quora.com/How-many-squares-and-rectangles-are-there-in-a-chess-board
https://trans4mind.com/personal_development/mathematics/series/sumNaturalSquares.htm

*******/
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
		    
		    Long sum_n = ( (long)n * (long)( n + 1) ) / 2;
		    Long square_n = ((long)n * (long)( n + 1) * (long)( 2 * n + 1))/6;
		    
		    Long res = ((long)sum_n * (long)sum_n ) - (long)(square_n);
		    
		    System.out.println(res);
		}
		
		sc.close();
	}
}