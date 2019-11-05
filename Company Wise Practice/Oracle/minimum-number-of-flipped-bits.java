/*package whatever //do not write package name here */
/**********

https://www.geeksforgeeks.org/minimum-number-of-replacements-to-make-the-binary-string-alternating-set-2/
https://www.geeksforgeeks.org/number-flips-make-binary-string-alternate/

*********/
import java.util.Scanner;

public class GFG {
	
	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		
		Integer t = sc.nextInt();
		
		while(t-- > 0) {
			
			String str = sc.next();
			
			int count = 0;
			
			for(int i=0; i<str.length(); i++) {
				
				if(i%2 == 0 && str.charAt(i)=='1') {
					count++;
				}
				
				if(i%2 == 1 && str.charAt(i)=='0') {
					count++;
				}
			}
			
			System.out.println(Math.min(count,(str.length() - count)));
		}
		
		sc.close();
	}

}
