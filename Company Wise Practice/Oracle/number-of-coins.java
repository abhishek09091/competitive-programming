/*package whatever //do not write package name here */
/**********

https://www.geeksforgeeks.org/find-minimum-number-of-coins-that-make-a-change/

***********/
import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {
	
	public static int minCoins(int arr[],int v) {
		
		int store[] = new int[v+1];
		
		for(int i=0; i<=v; i++) {
			store[i] = Integer.MAX_VALUE;
		}
		
		store[0] = 0;
		
		for(int i=1; i<=v; i++) {
			
			for(int j=0; j<arr.length; j++) {
				
				if(arr[j] <= i) {
					
					int sub_res = store[i - arr[j]];
					if(sub_res != Integer.MAX_VALUE && sub_res + 1 < store[i]) {
						store[i] = sub_res + 1;
					}
				}
			}
		}
		
		if(store[v] == Integer.MAX_VALUE) {
			return -1;
		}else {
			return store[v];
		}
		
	}
	public static void main (String[] args) {
		//code
		
		Scanner sc = new Scanner(System.in);
		
		Integer t = sc.nextInt();
		
		while(t-- > 0) {
			
			int v = sc.nextInt();
			int n = sc.nextInt();
			
			int arr[] = new int[n];
			
			for(int i=0; i<n; i++) {
				arr[i] = sc.nextInt();
			}
			
			System.out.println(minCoins(arr,v));
		}
		
		sc.close();
	}
}