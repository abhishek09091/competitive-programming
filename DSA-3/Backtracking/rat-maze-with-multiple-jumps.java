/*******

https://www.geeksforgeeks.org/rat-in-a-maze-with-multiple-steps-jump-allowed/

******/

import java.util.*;
import java.lang.*;
import java.io.*;
public class GFG {
    public static int N =0;
	public static void main (String[] args) {
		//code
		Scanner a = new Scanner(System.in);
		int T= a.nextInt();
		for(int z=0;z<T;z++)
		{
		 N = a.nextInt();
		 int[][] arr = new int[N][N];
		 for(int y=0;y<N;y++)
		 {
		     for(int o=0;o<N;o++)
		     arr[y][o]= a.nextInt();
		 }
		 
		 new RatInMaze().solve(arr, N);
	    }
	}
	public static void print(int N, int[][] arr)
	{
	    for(int i=0;i<N;i++)
	    {
	       for(int j=0;j<N;j++)
	       {
	         System.out.print(arr[i][j]+" ");
	       }
	       System.out.println();
	    }
	}
	
	
}


/*This is a function problem.You only need to complete the function given below*/
class RatInMaze{
    
        public static void solve(int[][] a, int N)
	{
	    int[][] sol= new int[N][N];
	    for(int i=0;i<N;i++)
	       for(int j=0;j<N;j++)
	         sol[i][j]=0;
	         // if no path found
	         if(!solveMazeUtil(a,0,0,sol, N))
	            System.out.println("-1");
	         else // if path found
	            new GFG().print(N, sol);
	         
	}
	
    
    public static boolean solveMazeUtil(int[][] a,int x,int y,int[][] sol, int N)
	{
	    // if the condition matches return true here
        // also the base case for recursion
	    if(x==N-1 && y==N-1 && a[x][y]>=0)
	    { 
	      // marking (x,y) as part of solution 
	      sol[x][y]=1;
	      return true;
	    }
	      
	      
	      if(isSafe(a,x,y, N))
	      {
	          // marking (a,b) as part of solution
	          sol[x][y]=1;
	          
	          // checking for further path
	          for(int i=1;i<=a[x][y];i++)
	          {
	               if(solveMazeUtil(a,x,y+i,sol, N))
	                 return true;
	              if(solveMazeUtil(a,x+i,y,sol, N))
	                 return true;
	             
	          }
	          // if no possible path in the direction, then mark (a,b) as not part of solution
              // doing backtracking and return false
	          sol[x][y] =0;
	          return false;
	      }
	      // if not safe return false
	      return false;
	}
	
	public static boolean isSafe(int[][] a, int x, int y, int N)
	{
	    // the safe condition is when a, b is in bounds and matrix value != 0
	    if(x>=0 && x<N && y>=0 && y<N && a[x][y]>=1)
	       return true;
	       
	       return false;
	}
	 
}
