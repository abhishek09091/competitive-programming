/**********

https://www.geeksforgeeks.org/power-set/

*********/
//Initial Template for Java
import java.util.*;
import java.lang.*;
import java.io.*;
class GFG{
    
	public static void main (String[] args)
	{
    	 Scanner sc = new Scanner(System.in);
    	 int t = sc.nextInt();
    	 
    	 boolean flag = false;
    	 while(t-- > 0){
    	  int n=sc.nextInt();
    	  int arr[]=new int[n];
    	  for(int i=0;i<n;i++)
    	  {
    	      arr[i]=sc.nextInt();
    	  }
    	  Geeks obj=new Geeks();
    	   System.out.println(obj.countSumSubsets(arr,n));
    	   
    	 }
    }
}
//Position this line where user code will be pasted.


/*This is a function problem.You only need to complete the function given below*/
//User function Template for Java
class Geeks{
    
    static int countSumSubsets(int arr[],int n){
        
        //Your code here
        long powerSetSize = (long)Math.pow(2,n);
        
        int count = 0;
        for(int counter = 0; counter < powerSetSize; counter++){
            
            int sum = 0;
            for(int j=0; j<n; j++){
                
                if((counter & (1<<j)) > 0){
                    sum += arr[j];
                }
            }
            if(sum != 0 && sum%2 == 0)
                count++;
        }
        return count;
        
    }
}