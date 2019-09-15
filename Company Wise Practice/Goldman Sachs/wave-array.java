/*package whatever //do not write package name here */
/********

https://www.geeksforgeeks.org/sort-array-wave-form-2/

********/
import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {
    
     public static void swap(int arr[], int a, int b) { 
    
            int temp = arr[a]; 
            arr[a] = arr[b]; 
            arr[b] = temp; 
    
         
     } 
     
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
		    
		    for(int i=0; i<n; i +=2){
		        
		        if(i>0 && arr[i-1] > arr[i]){
	                swap(arr,i-1,i);	            
		        }
		        
		        if(i<n-1 && arr[i] < arr[i+1]){
		            swap(arr,i,i+1);
		        }
		    }
		    
		    for(int i=0; i<n; i++){
		        System.out.print(arr[i]+" ");
		    }
		    
		    System.out.println();
		}
		
		sc.close();
	}
}