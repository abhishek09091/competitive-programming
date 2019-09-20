/*package whatever //do not write package name here */
/*********

https://www.geeksforgeeks.org/ugly-numbers/

*********/
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
    
	public static void main (String[] args) {
		//code
		Scanner sc = new Scanner(System.in);
		
		Integer t = sc.nextInt();
		
		while(t-- > 0){
		    Integer n = sc.nextInt();
		    
		    System.out.println(nthUgly(n));
		}
		
		sc.close();
	}
}