/******
*
* https://www.geeksforgeeks.org/a-boolean-matrix-question/
*
*
* Input:
* 3
* 2 2
* 1 0
* 0 0
* 2 3
* 0 0 0 
* 0 0 1
* 3 4
* 3 4
* 1 0 0 1
* 0 0 1 0 
* 0 0 0 0
*
* Output:
* 1 1
* 1 0
* 0 0 1 
* 1 1 1
* 1 1 1 1 
* 1 1 1 1 
* 1 0 1 1
*
*
*******/
//Initial Template for Java
import java.util.*;
import java.io.*;
import java.lang.*;
class gfg
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        int t =sc.nextInt();
        
        while(t-- > 0)
        {
            int r = sc.nextInt();
            int c = sc.nextInt();
            
            int arr[][] = new int[r][c];
            
            for(int i = 0; i < r; i++)
            {
                for(int j = 0; j < c; j++)
                arr[i][j] = sc.nextInt();
            }
            
            new Geeks().makeThemOne(arr, r, c);
        }
    }
}
//Position this line where user code will be pasted.


/*This is a function problem.You only need to complete the function given below*/
//User function Template for Java
class Geeks
{
    static void makeThemOne(int arr[][],int r,int c) 
    {
         int rows[]=new int[r];
         int cols[]=new int[c];
         
         for(int i=0;i<r;i++)
         {
             for(int j=0;j<c;j++)
             {
                 if(arr[i][j]==1)
                 {
                     rows[i]=1;
                     cols[j]=1;
                 }
             }
         }
         
         for(int i=0;i<r;i++)
         {
             for(int j=0;j<c;j++)
             {
                 if(rows[i]==1)
                 {
                    arr[i][j]=1;
                 }
                 if(cols[j]==1)
                 {
                    arr[i][j]=1;
                 }
             }
         }
         
         
         
         for(int i=0;i<r;i++)
         {
             for(int j=0;j<c;j++)
             {
                 System.out.print(arr[i][j]+" ");
             }
            System.out.println();
         }
    }
}