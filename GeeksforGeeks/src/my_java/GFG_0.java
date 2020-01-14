package my_java;

import java.util.*;
//Position this line where user code will be pasted.
public class GFG_0{
  
  // Driver Code
  public static void main(String args[]){
      
      Scanner sc = new Scanner(System.in);
      
      // Testcase Input
      int t = sc.nextInt();
      
      // Iterating through all testcase input
      while(t-- > 0){
          
          long N = sc.nextLong();
          long X = sc.nextLong();
          
          GfGFunction g = new GfGFunction();
          
          g.findJumps(N, X);
          
      }
      
  }
  
}

/*This is a function problem.You only need to complete the function given below*/
//User function Template for Java
class GfGFunction{
  
  // Function to find number of jumps
  // N : number inscribed on the last stone.
  // X : number on which we have to reach
  static void findJumps(long N, long X){
	  
	  int x = 2;
      int y = 0;
      for ( ; y < 10; ++y) 
      {
          if (y % x == 0) 
              continue;  
          else if (y == 8)
               break;
          else
          System.out.print(y + " ");
       }
      
	  if(N%2 == 1) {
		  N -= 1;
	  }
      // Your code goes here
      int india = 0;
      int srilanka = 0;
      
      for(long i=1; i<X; i+=2){
          
          india++;
      }
      
     // System.out.println("India: "+india);
      
      for(long i=N; i>X; i-=2){
          
          srilanka++;
      }
      
      //System.out.println("Srilanka: "+srilanka);
      System.out.println(Math.min(india, srilanka));
  }
  
}