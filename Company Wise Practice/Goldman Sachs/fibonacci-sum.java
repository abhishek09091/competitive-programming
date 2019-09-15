/*package whatever //do not write package name here */

import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {
    
    public static long nFibonacciSum(Long n){
        long mod = 1000000007;
        
        if(n == 0){
            return 0l;
        }else if(n == 1){
            return 1l;
        }else{
            
            long first = 1;
            long second = 1;
            long sum = first + second;
            for(long i=2; i<n; i++){
                long temp = (first + second)%mod;
                first = second;
                second = temp;
                sum = (sum + second)%mod;
            }
            
            return sum;
        }
    }
	public static void main (String[] args) {
		//code
		Scanner sc = new Scanner(System.in);
		
		long t = sc.nextLong();
		
		while(t-- > 0){
		    long n = sc.nextLong();
		    System.out.println(nFibonacciSum(n));
		    
		}
		sc.close();
	}
}