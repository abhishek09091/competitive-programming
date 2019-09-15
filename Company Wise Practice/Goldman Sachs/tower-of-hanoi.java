/*package whatever //do not write package name here */

import java.util.*;
import java.lang.*;
import java.io.*;

public class GFG {
    
    public static Integer count = 0;
    
    public static void towerOfHanoi(Integer n,Character from, Character to, Character aux){
        
        if(n <= 0) return;
        
        towerOfHanoi(n-1,from,aux,to);
        System.out.println("move disk "+ n +" from rod "+ from +" to rod "+ aux);
        count++;
        towerOfHanoi(n-1,to,from,aux);
    }
	public static void main (String[] args) {
		//code
		Scanner sc = new Scanner(System.in);
		Integer t = sc.nextInt();
		
		while(t-- > 0){
		    
		    Integer n = sc.nextInt();
		    count = 0;
		    towerOfHanoi(n,'1','2','3');
		    System.out.println(count);
		}
		
		sc.close();
		
	}
}