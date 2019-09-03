/*********

https://www.geeksforgeeks.org/count-pairs-with-given-sum/

*********/

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
		    Integer length = sc.nextInt();
		    Integer sum = sc.nextInt();
		    
		    int arr[] = new int[length];
		    
		    for(int i=0; i<length; i++){
		        arr[i] = sc.nextInt();
		    }
		    
		    Map<Integer, Integer> map = new HashMap<>();
		    
		    for(int i=0; i<length; i++){
		        
		        if(!map.containsKey(arr[i])){
		            map.put(arr[i],0);
		        }
		        
		        map.put(arr[i],map.get(arr[i]) + 1);
		    }
		    
		    int count = 0;
		    
		    for(int i=0; i<length; i++){
		        
		        if(map.get(sum - arr[i]) != null){
		            
		            count += map.get(sum - arr[i]);
		        }
		        
		        if(sum - arr[i] == arr[i]){
		            count--;
		        }
		    }
		    
		    System.out.println((int)count/2);
		}
	}
}