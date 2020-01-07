package heap;

import java.util.*;
import java.lang.*;
import java.io.*;
public class Solution6 {
	
	public static void main (String[] args) throws IOException
	 {
	 
	    Scanner scan=new Scanner(System.in);
	    int t=scan.nextInt();
	    while(t-- > 0){
	        int k=scan.nextInt();
	        int n=scan.nextInt();
	        int a[] = new int[n];
	        for(int i=0;i<n;i++)
	            a[i]=scan.nextInt();
	        
	        new GFG6().kthLargest(a, n, k);
	        System.out.println();
	    }
	 }
}

/*This is a function problem.You only need to complete the function given below*/
class GFG6 {
	
	public void kthLargest(int arr[], int n, int k){
		
	}
}