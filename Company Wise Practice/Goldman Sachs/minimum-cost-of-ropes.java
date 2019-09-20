/*package whatever //do not write package name here */
/********

https://www.geeksforgeeks.org/connect-n-ropes-minimum-cost/

*******/
import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {
    
    public static long minCost(int arr[],int n){
        
        PriorityQueue<Integer> q = new PriorityQueue<>();
        
        for(int i=0; i<n; i++){
            q.add(arr[i]);
        }
        
        long res = 0;
        
        while(q.size() > 1){
            
            int first = q.poll();
            int second = q.poll();
            
            res = (long)res+ (long)(first + second);
            
            q.add(first + second);
        }
        
        return res;
    }
	public static void main (String[] args) {
		//code
		
		Scanner sc = new Scanner(System.in);
		
		Integer t = sc.nextInt();
		
		while(t-- > 0){
		    
		    Integer n = sc.nextInt();
		    
		    int arr[] = new int[n];
		    
		    for(int i=0; i<n; i++){
		        arr[i] = sc.nextInt();
		    }
		    
		    System.out.println(minCost(arr,n));
		}
		sc.close();
	}
}