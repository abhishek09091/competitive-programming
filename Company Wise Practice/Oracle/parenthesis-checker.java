/*package whatever //do not write package name here */
/***********

https://www.geeksforgeeks.org/check-for-balanced-parentheses-in-an-expression/

**********/
import java.util.ArrayList;
import java.util.Scanner;

class GFG {
	
	public static boolean parenthesisChecker(String str) {
		
		if(str.charAt(0) == ')' || str.charAt(0) == ']' || str.charAt(0) == ')') {
			return false;
		}
		
		ArrayList<Character> list = new ArrayList<Character>();
		for(int i=0; i<str.length(); i++) {
			
			if(str.charAt(i) == '(' || str.charAt(i) == '[' || str.charAt(i) == '{') {
				list.add(str.charAt(i));
			}else{
			    if(list.size() == 0) {
					return false;
				}else if((str.charAt(i) == '}' ) && (list.get(list.size() -1 ) == '{')) {
					list.remove(list.size()-1);
				}else if((str.charAt(i) == ')' ) && (list.get(list.size() -1 ) == '(')) {
					list.remove(list.size()-1);
				}else if((str.charAt(i) == ']' ) && (list.get(list.size() -1 ) == '[')) {
					list.remove(list.size()-1);
				}else {
					return false;
				}
			}
		}
		 if(list.size() >= 1) {
			return false;
		}
		return true;
	}
	
	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		
		Integer t = sc.nextInt();
		
		while(t-- > 0) {
			
			String str = sc.next();
			
			if(parenthesisChecker(str)) {
				System.out.println("balanced");
			}else {
				System.out.println("not balanced");
			}
		}
		
		
		sc.close();
	}

}
