package strings;

/*package whatever //do not write package name here */

import java.util.Scanner;

public class GFG4 {
	
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
