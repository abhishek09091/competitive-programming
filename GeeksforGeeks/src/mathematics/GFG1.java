package mathematics;

import java.util.Scanner;

public class GFG1 {
	
	public static boolean isPowerOfTwo(Long n) {
		
		return n != 0 && ((n & (n-1)) == 0);
	}
	
	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		
		Integer t = sc.nextInt();
		
		while(t-- > 0) {
			
			Long n = sc.nextLong();
			
			if(isPowerOfTwo(n)) {
				System.out.println("YES");
			}else {
				System.out.println("NO");
			}
			
		}
		//System.out.println(Long.MAX_VALUE);
		
		sc.close();
	}

}
