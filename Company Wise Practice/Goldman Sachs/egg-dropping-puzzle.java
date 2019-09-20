/*package whatever //do not write package name here */
/*********

https://www.geeksforgeeks.org/egg-dropping-puzzle-dp-11/
https://www.geeksforgeeks.org/eggs-dropping-puzzle-binomial-coefficient-and-binary-search-solution/
http://www.cs.umd.edu/~gasarch/BLOGPAPERS/eggold.pdf


*********/
import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {
    
    public static int minEggDrop(int nEggs,int kFloors){
        
       int eggFloor[][] = new int[nEggs + 1][kFloors + 1];
       int res;
       int i,j,x;
       
       for(i=1; i<=nEggs; i++){
           
           eggFloor[i][1] = 1;
           eggFloor[i][0] = 0;
       }
       
       for(j=1; j<=kFloors; j++){
           eggFloor[1][j] = j;
       }
       
       for(i=2; i<=nEggs; i++){
           
           for(j=2; j<=kFloors; j++){
               eggFloor[i][j] = Integer.MAX_VALUE;
               
               for(x=1; x<=j; x++){
                   
                   res = 1 + Math.max(eggFloor[i-1][x-1],eggFloor[i][j-x]);
                   if(res < eggFloor[i][j]){
                       eggFloor[i][j] = res;
                   }
               }
           }
       }
       
       return eggFloor[nEggs][kFloors];
    }
    
	public static void main (String[] args) {
		//code
		
		Scanner sc = new Scanner(System.in);
		
		Integer t = sc.nextInt();
		
		while(t-- > 0){
		    
		    Integer nEggs = sc.nextInt();
		    Integer kFloors = sc.nextInt();
		    System.out.println(minEggDrop(nEggs,kFloors));
		    
		}
		
		sc.close();
	}
}