package mathematics;

import java.util.Scanner;

public class GFG3 {
	
	public static int minTime(Integer s1,Integer s2,Integer n) {
		
		// s1 * k = s2 * ( n - k);
		
		Integer k =(int) (s2 * n)/(s1 + s2);
		return Math.min(Math.max(s1*k,s2*(n-k)), Math.max(s1 * (k + 1), s2*(n-k -1)));
	}
	
	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		
		Integer t = sc.nextInt();
		
		while(t-- > 0) {
			
			Integer s1 = sc.nextInt();
			Integer s2 = sc.nextInt();
			
			Integer n = sc.nextInt();
			
			System.out.println(minTime(s1,s2,n));
		}
		
		sc.close();
	}

}
