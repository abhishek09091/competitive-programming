/*package whatever //do not write package name here */

import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {
	public static void main (String[] args) {
		//code
		Scanner sc = new Scanner(System.in);
		
		Integer t = sc.nextInt();
		
		while(t-- > 0){
		    
		    Integer n = sc.nextInt();
		    
		    int arr[] = new int[n];
		    
		    for(int i=0; i<n; i++){
		        arr[i] = sc.nextInt();
		    }
		    
		    int first_min = Integer.MAX_VALUE;
		    int second_min = Integer.MAX_VALUE;
		    
		    for(int i=0; i<n; i++){
		        
		        if(first_min > arr[i]){
		            second_min = first_min;
		            first_min = arr[i];
		        }else if( arr[i] < second_min &&first_min != arr[i]){
		            second_min = arr[i];
		        }
		    }
		    
		    if(first_min == Integer.MAX_VALUE || 
		        second_min == Integer.MAX_VALUE){
		        
		        System.out.println("-1");
		    }else{
		        System.out.println(first_min+" "+second_min);
		    }
		}
	}
}