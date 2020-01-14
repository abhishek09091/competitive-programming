package array;

import java.util.Scanner;

public class GFG_3 {
	
	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		
		Integer t = sc.nextInt();
		
		while(t-- > 0) {
			
			Integer n = sc.nextInt();
			
			int arr[] = new int[n];
			
			for(int i=0; i<n; i++) {
				arr[i] = sc.nextInt();
			}
			
			int ans = 3;
			boolean desc = true, inc = true;
			
			for(int i=1; i<n; i++) {
				
				if(arr[i] > arr[i-1]) {
					desc = false;
				}else if(arr[i] < arr[i-1]) {
					inc = false;
				}else {
					
					desc = false;
					inc = false;
					break;
				}
			}
			
			if(desc || inc) {
				ans = 0;
			}
			
			System.out.println(ans);
		}
		
		
		sc.close();
	}

}
