/***********

https://www.geeksforgeeks.org/find-profession-in-a-hypothetical-special-situation/
https://www.geeksforgeeks.org/count-set-bits-in-an-integer/
https://www.geeksforgeeks.org/count-set-bits-integer-using-lookup-table/

***********/

import java.util.Scanner;

public class GFG {
	
	public static int countSetBits(int n) {
		
		int count = 0;
		
		while(n != 0) {
			n = ( n & (n-1));
			count++;
		}
		
		return count;
		
	}
	
	public static char findProfession(int pos) {
		
		
		int setBits = countSetBits(pos-1);
		
		return (setBits%2 != 0) ? 'd' : 'e';
	}

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		Scanner sc = new Scanner(System.in);
		
		Integer t = sc.nextInt();
		
		while(t-- > 0) {
			
			Integer level = sc.nextInt();
			Integer pos = sc.nextInt();
			
			if(pos == 0){
			    System.out.println("Doctor");
			    continue;
			}
			
			String profession = (findProfession(pos) == 'd') ? "Doctor" : "Engineer";
			System.out.println(profession);
		}
		
		sc.close();

	}

}
