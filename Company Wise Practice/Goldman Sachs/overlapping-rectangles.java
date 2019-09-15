/*package whatever //do not write package name here */
/**********

https://www.geeksforgeeks.org/find-two-rectangles-overlap/

*********/
import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {
    
    static class Point{
        int x,y;
    }
    
    public static boolean overlap(Point l1,Point r1,Point l2,Point r2){
        
        if(l1.x > r2.x || l2.x > r1.x){
           return false; 
        }
        
        if(l1.y < r2.y || l2.y < r1.y){
            return false;
        }
        
        return true;
    }
	public static void main (String[] args) {
		//code
		Scanner sc = new Scanner(System.in);
		
		Integer t = sc.nextInt();
		
		while(t-- > 0){
		    
		    Point l1 = new Point();
		    l1.x = sc.nextInt();
		    l1.y = sc.nextInt();
		    
		    Point r1 = new Point();
		    r1.x = sc.nextInt();
		    r1.y = sc.nextInt();
		    
		    Point l2 = new Point();
		    l2.x = sc.nextInt();
		    l2.y = sc.nextInt();
		    
		    Point r2 = new Point();
		    r2.x = sc.nextInt();
		    r2.y = sc.nextInt();
		    
		    if(overlap(l1,r1,l2,r2)){
		        System.out.println("1");
		    }else{
		        System.out.println("0");
		    }
		}
		
		sc.close();
	}
}