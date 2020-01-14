package mathematics;

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
			
			String profession = (findProfession(pos) == 'd') ? "Doctor" : "Engineer";
			System.out.println(profession);
		}
		
		sc.close();

	}

}
