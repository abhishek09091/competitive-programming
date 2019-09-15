/*package whatever //do not write package name here */
/*********

https://www.geeksforgeeks.org/minimum-length-subarray-sum-greater-given-value/

*********/
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
		    Integer sum = sc.nextInt();
		    
		    int arr[] = new int[n];
		    
		    for(int i=0; i<n; i++){
		        arr[i] = sc.nextInt();
		    }
		    
		    int curr_sum = 0 , len = n + 1;
		    
		    int start = 0 , end = 0;
		    
		    
		    while(end < n){
		        
		        while(curr_sum <= sum && end < n){
		            
		            if((curr_sum < 0 ) && sum > 0){
		                start = end;
		                curr_sum = 0;
		            }
		            
		            curr_sum += arr[end++];
		        }
		        
		        while(curr_sum > sum && start < n){
		            
		            if(end - start < len){
		                len = end - start;
		            }
		            
		            curr_sum -= arr[start++];
		        }
		    }
		    
		    System.out.println(len);
		}
		
		sc.close();
	}
}