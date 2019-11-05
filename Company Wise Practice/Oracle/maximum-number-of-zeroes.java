/*package whatever //do not write package name here */

import java.math.BigInteger;
import java.util.Scanner;

class GFG {
	
	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		
		Integer t = sc.nextInt();
		
		while(t-- > 0) {
			
			Integer n = sc.nextInt();
			int count = 0;
			String res = "";
			
			while(n-- > 0){
				int temp = 0;
				String str = sc.next();
				
				for(int i=0; i<str.length(); i++) {
					
					if(str.charAt(i) == '0'){
						temp++;
					}
				}
				
				if(temp > count){
					count = temp;
					res = str;
				}else if(temp == count && res != "") {
					int ans = new BigInteger(res).compareTo(new BigInteger(str));
					if(ans == -1){
						res = str;
					}
				}
			}
			if(res == "") {
				System.out.println("-1");
			}else {
				System.out.println(res);
			}
			
		}
		
		sc.close();
	}

}
