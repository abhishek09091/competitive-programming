/*********



**********/

import java.util.Scanner;

class GFG {
	
	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		
		Integer t = sc.nextInt();
		
		while(t-- > 0) {
			
			String str1 = sc.next();
			String str2 = sc.next();
			
			int res = str1.indexOf(str2);
			if(res == -1) {
				System.out.println("not found");
			}else {
				System.out.println("found");
			}
		}
		sc.close();
	}

}
