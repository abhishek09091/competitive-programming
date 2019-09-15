/*package whatever //do not write package name here */

import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {
    
    public static void nthFibonacci(Integer n){
        
        if(n <= 2){
            System.out.println("1");
            return;
        }
        long arr[] = new long[n];
        arr[0] = 1;
        arr[1] = 1;
        for(int i =2; i<n; i++){
            arr[i] = (arr[i-1] + arr[i-2]) % 1000000007;
        }
        
        System.out.println(arr[n-1]);
    }
    
	public static void main (String[] args) {
		//code
		Scanner sc = new Scanner(System.in);
		
		Integer t = sc.nextInt();
		
		while(t-- > 0){
		    Integer n = sc.nextInt();
		    nthFibonacci(n);
		    
		}
		sc.close();
	}
}