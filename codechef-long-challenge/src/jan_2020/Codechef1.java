package jan_2020;

import java.util.Scanner;

public class Codechef1 {
	
	public static void main(String[] args)  throws java.lang.Exception{
		
		Scanner sc = new Scanner(System.in);
		
		Integer t = sc.nextInt();
		
		while(t-- > 0) {
			
			Integer n = sc.nextInt();
			Long a = sc.nextLong();
			
			Long s = 1l;
			
			for(int i=0; i<n; i++) {
				
				s *= 10;
			}
			
			System.out.println(2*s+a);
			
			Long b = sc.nextLong();
			
			System.out.println(s-b);
			
			Long d = sc.nextLong();
			
			System.out.println(s-d);
			
			Integer ans = sc.nextInt();	
			
			System.out.println(Long.MAX_VALUE);
			
		}
		
		sc.close();
	}

}
