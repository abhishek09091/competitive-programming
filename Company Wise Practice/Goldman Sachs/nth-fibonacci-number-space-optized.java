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
        long first = 1;
        long second = 1;
        
        for(int i =2; i<n; i++){
            long temp = (first + second) % 1000000007;;
            first = second;
            second = temp;
        }
        
        System.out.println(second);
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