package sdet_2;


	//Initial Template for Java
	                              //Initial Template for Java
import java.util.*;
import java.io.*;
import java.lang.*;

class Driver_class{
	
	    public static void main(String args[])throws IOException{
	        BufferedReader read = new BufferedReader(new InputStreamReader(System.in));
	        int t = Integer.parseInt(read.readLine());
	        
	        while(t-- >0)
	        {
	            int n = Integer.parseInt(read.readLine());
	            
	            
	            int arr[] = new int[n];
	            String str[] = read.readLine().trim().split(" ");
	            for(int i = 0; i < n; i++)
	             arr[i] = Integer.parseInt(str[i]);
	             
	             
	            System.out.println(new Appearance().search(arr, 0, n-1));
	            
	        }
	    }
	}
	                              
	/*This is a function problem.You only need to complete the function given below*/
	//User function Template for Java
	 //User function Template for Java
	class Appearance{
	    // function to find the element once in the array
	    static int search(int arr[], int low, int high) {
	        
	    	Set<Integer> set = new HashSet<Integer>();
	        // your code here
	    	for(int i=0; i<=high; i++) {
	    		
	    		if(set.contains(arr[i])) {
	    			set.remove(arr[i]);
	    		}else {
	    			set.add(arr[i]);
	    		}
	    	}
	         
	    	if(set.size() == 1) {
	    		
	    		for (Integer integer : set) {
					return integer;
				}
	    	}
	    	
	    	return 0;
	    }
	}