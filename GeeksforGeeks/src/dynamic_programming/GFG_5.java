package dynamic_programming;

import java.util.*;
import java.lang.*;
import java.io.*;

public class GFG_5 {
	
	public static int minCoins(int arr[],int v) {
		
		int store[] = new int[v+1];
		
		for(int i=0; i<=v; i++) {
			store[i] = Integer.MAX_VALUE;
		}
		
		store[0] = 0;
		
		for(int i=1; i<=v; i++) {
			
			
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
			
			
		}
		
		sc.close();
	}
}