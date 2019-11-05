/*package whatever //do not write package name here */

import java.util.Scanner;

class GFG {
	
	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		
		Integer t = sc.nextInt();
		
		while(t-- > 0) {
			
			String str = sc.next();
			
			char ch = sc.next().charAt(0);
			
			int count = sc.nextInt();
			String res = "";
			int temp = 0;
			if(count == 0) {
				System.out.println(str);
				continue;
			}
			for(int i=0; i<str.length(); i++) {
				
				if(str.charAt(i) == ch){
					temp++;
					if(temp == count) {
						//System.out.println("here");
						res = str.substring(i+1);
						//System.out.println();
						break;
					}
				} 
			}
			
			if(res == "" || res.isEmpty()) {
				System.out.println("Empty string");
			}else {
				System.out.println(res);
			}
		}
		
		sc.close();
	}

}
