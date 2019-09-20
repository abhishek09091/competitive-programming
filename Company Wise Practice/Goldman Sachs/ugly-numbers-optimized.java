/*package whatever //do not write package name here */
/*********

https://www.geeksforgeeks.org/ugly-numbers/

********/
import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {
    
    public static int maxDivide(Integer a,Integer b){
        
        while(a%b == 0){
            a /=b;
        }
        
        return a;
    }
    
    public static boolean isUgly(Integer i){
        
        i = maxDivide(i,2);
        i = maxDivide(i,3);
        i = maxDivide(i,5);
        
        return (i == 1) ? true : false;
    }
    
    public static int nthUgly(Integer n){
        
        int count = 1;
        int i = 1;
        while(n > count){
            i++;
            if(isUgly(i)){
                count++;
            }
        }
        
        return i;
    }
    
    public static long nthUglyOptimized(int n){
        
        Long ugly[]= new Long[n];
        int i2 = 0, i3 =0, i5 = 0;
        long next_mulitple_of_2 = 2l;
        long next_mulitple_of_3 = 3l;
        long next_mulitple_of_5 = 5l;
        
        long next_ugly_number = 1l;
        
        ugly[0] = 1l;
        
        for(int i = 1; i<n; i++){
            
            next_ugly_number = (long)Math.min(Math.min(next_mulitple_of_2,
                                    next_mulitple_of_3),next_mulitple_of_5);
            
            ugly[(int)i] = next_ugly_number;
            
            if(next_ugly_number == next_mulitple_of_2){
                i2 += 1;
                next_mulitple_of_2 = (long)ugly[i2]*2l;
            }
            
            if(next_ugly_number == next_mulitple_of_3){
                i3 += 1;
                next_mulitple_of_3 = (long)(ugly[i3]*3l);
            }
            
            if(next_ugly_number == next_mulitple_of_5){
                i5 += 1;
                next_mulitple_of_5 = (long)ugly[i5]*5l;
            }
            
        }
        
        return next_ugly_number;
    }
    
	public static void main (String[] args) {
		//code
		Scanner sc = new Scanner(System.in);
		
		Integer t = sc.nextInt();
		
		while(t-- > 0){
		    Integer n = sc.nextInt();
		    
		    System.out.println(nthUglyOptimized(n));
		}
		
		sc.close();
	}
}