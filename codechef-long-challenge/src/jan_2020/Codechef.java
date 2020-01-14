package jan_2020;

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef{
	
	public static void computeTrial(double s,double w1,double w2,double w3) {
		
		if(w1 == 1 && w2 == 1 && w3 == 1) {
			
			if(s >= 3 ) {
				System.out.println("1");
			}else {
				double d = (w1 + w2 + w3) / s;
			    System.out.println((int)Math.ceil(d));
			}
			
		}else if(w1 == 1 && w2 == 1 && w3 == 2) {
			
			if(s >= 4) {
				System.out.println("1");
			}else {
					double d = (w1 + w2 + w3) / s;
			    System.out.println((int)Math.ceil(d)); 
			}
			
		}else if(w1 == 1 && w2 == 2 && w3 == 2) {
			
			if(s >= 5) {
				System.out.println("1");
			}else {
				double d = (w1 + w2 + w3) / s;
				//System.out.println(d);
			System.out.println((int)Math.ceil(d));
			}
			
		}else if(w1 == 1 && w2 == 2 && w3 == 1) {
			
			if(s >= 4) {
				System.out.println("1");
			}else if(s == 1 || s == 3){
					double d = (w1 + w2 + w3 )/ s;
			System.out.println((int)Math.ceil(d)); 
			}else {
				System.out.println("3");
			}
			
		}else if(w1 == 2 && w2 == 2 && w3 == 2) {
			
			if(s >= 6) {
				System.out.println("1");
			}else if(s == 3 || s == 2){
				System.out.println("3");
			}else {
					double d = (w1 + w2 + w3 )/ s;
			System.out.println((int)Math.ceil(d));
			}
			
		}else if(w1 == 2 && w2 == 2 && w3 == 1) {
			if(s >= 5) {
				System.out.println("1");
			}else {
					double d = (w1 + w2 + w3 )/ s;
			        System.out.println((int)Math.ceil(d)); 
			}
		}else if(w1 == 2 && w2 == 1 && w3 == 2) {
			
			if(s >= 5) {
				System.out.println("1");
			}else {
					double d = (w1 + w2 + w3) / s;
			        System.out.println((int)Math.ceil(d));
			}
			
		}else{
			
			if(s >= 4) {
				System.out.println("1");
			}else {
					double d = (w1 + w2 + w3) / s;
			        System.out.println((int)Math.ceil(d)); 
			}
		}
	}
	
	public static void main (String[] args) throws java.lang.Exception{
		// your code goes here
		
		Scanner sc = new Scanner(System.in);
		
		int t = sc.nextInt();
		
		while(t-- > 0) {
			
			double s = sc.nextDouble();
			double w1 = sc.nextDouble();
			double w2 = sc.nextDouble();
			double w3 = sc.nextDouble();
			
		computeTrial(s, w1, w2, w3);
		}
		
		
		sc.close();
	}
}
