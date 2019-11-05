/********

https://www.geeksforgeeks.org/0-1-knapsack-problem-dp-10/
https://www.geeksforgeeks.org/space-optimized-dp-solution-0-1-knapsack-problem/

********/

import java.util.Scanner;

class GFG {
	
	public static int maxProfit(int wt[],int v[],int W,int n) {
		
		int res[][] = new int[n+1][W+1];
		
		for(int i=0; i<=n; i++) {
			for(int j=0; j<=W; j++) {
				
				if(i==0 || j == 0) {
					res[i][j] = 0;
				}else if(wt[i-1] > j) {
					res[i][j] = res[i-1][j];
					 
				}else if(j >= wt[i-1]){
					res[i][j] = Math.max(v[i-1] + res[i-1][j-wt[i-1]] , res[i-1][j]);
				}
			}
		}
		
			
		for(int i=0; i<=n; i++) {
			for(int j=0; j<=W; j++) {
			    System.out.print(res[i][j] + " ");    
			}
		    System.out.println();
		}
		
		return res[n][W];
	}
	
	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		
		Integer t = sc.nextInt();
		
		while(t-- > 0) {
			
			Integer n = sc.nextInt();
			Integer W = sc.nextInt();
			
			int wt[] = new int[n];
			int v[] = new int[n];
			
			for(int i=0; i<n; i++) {
				v[i] = sc.nextInt();
			}
			
			for(int i=0; i<n; i++) {
				wt[i] = sc.nextInt();
			}
			
			System.out.println(maxProfit(wt,v,W,n));
			
		}
		
		sc.close();
	}

}
