/*package whatever //do not write package name here */
/**********

https://www.youtube.com/watch?v=3hcaVyX00_4

**********/
import java.util.Scanner;

class GFG {
	
	public static int minFloor(Integer eggs,Integer floors) {
		
		int count[][] = new int[eggs+1][floors + 1];
		
		for(int i=1; i<=eggs; i++) {
			count[i][1]= 1;
			count[i][0]= 0;
		}
		
		for(int i=1; i<=floors; i++) {
			count[1][i] = i;
		}
		
		for(int i=2; i<=eggs; i++) {
			
			for(int j=2; j<=floors; j++) {
				
				count[i][j] = Integer.MAX_VALUE;
				for(int k = 1; k<=j; k++) {
					
					int res = 1 + Math.max( count[i-1][k-1],count[i][j-k]);
					
					if(res < count[i][j]) {
						count[i][j] = res;
					} 
				}
			}
		}
		
		return count[eggs][floors];
	}
	
	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		
		Integer t = sc.nextInt();
		
		while(t-- > 0) {
			
			Integer nEggs = sc.nextInt();
			Integer kFloors = sc.nextInt();
			System.out.println(minFloor(nEggs,kFloors));
			
		}
		
		sc.close();
	}

}
