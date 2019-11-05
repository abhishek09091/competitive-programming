/**********

https://www.geeksforgeeks.org/convert-number-to-words/
https://www.geeksforgeeks.org/program-to-convert-a-given-number-to-words-set-2/

***********/

import java.util.Scanner;

class GFG {
	
	static String ones[] = {"","one ","two ","three ","four ","five ","six ","seven ","eight ","nine ","ten ",
					"eleven ","twelve ","thirteen ","fourteen ","fifteen ","sixteen ","seventeen ","eighteen ",
					"nineteen "};
	
	static String tens[] = {"","","twenty ","thirty ","forty ","fifty ","sixty ","seventy ","eighty ","ninety "};
	
	public static String decideString(Integer num,String str) {
		
		String res = "";
		
		if(num > 19) {
			
			res += tens[num/10] + ones[num%10];
		}else {
			res += ones[num];
		}
		
		if(num != 0) {
			res += str;
		}
		
		return res;
	}
	
	public static String convertToString(Integer num) {
		
		String res = "";
		
		res += decideString((num/10000000), "crore ");
		
		res += decideString(((num/100000)%100), "lakh ");
		
		res += decideString(((num/1000)%100), "thousand ");
		
		res += decideString(((num/100)%10), "hundred ");
		
		if(num > 100 && (num % 100 != 0) ) {
			res += "and ";
		}
		
		res += decideString(num%100, "");
		
		return res;
	}
	
	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		
		Integer t = sc.nextInt();
		
		while(t-- > 0) {
			
			Integer num = sc.nextInt();
			
			System.out.println(convertToString(num));
		}
		
		sc.close();
	}

}
