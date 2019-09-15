/*package whatever //do not write package name here */

/********

https://www.geeksforgeeks.org/second-repeated-word-sequence/

********/

import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {
	public static void main (String[] args) {
		//code
		Scanner sc = new Scanner(System.in);
		
		Integer t = sc.nextInt();
		
		while(t--  > 0){
		    
		    Integer n = sc.nextInt();
		    String arr[] = new String[n];
		    
		    for(int i=0; i<n; i++){
		        arr[i] = sc.next();
		    }
		    
		    Map<String,Integer> map = new HashMap<>();
		    
		    for(int i=0; i<n; i++){
		        
		        if(map.containsKey(arr[i])){
		            map.put(arr[i],map.get(arr[i]) + 1);
		        }else{
		            map.put(arr[i],1);
		        }
		    }
		    
		    Integer first_max = Integer.MIN_VALUE , second_max = Integer.MIN_VALUE;
		    
		    Iterator<Map.Entry<String,Integer>> itr = map.entrySet().iterator();
		    
		    while(itr.hasNext()){
		        
		        Map.Entry<String,Integer> entry = itr.next();
		        int v = entry.getValue();
		        
		        if(v > first_max){
		            second_max = first_max;
		            first_max = v;
		        }else if( v > second_max && v != first_max){
		            second_max = v;
		        }
		    }
		    
		    itr = map.entrySet().iterator();
		    String res = "";
		    while(itr.hasNext()){
		        Map.Entry<String,Integer> entry = itr.next();
		        
		        if(entry.getValue() == second_max){
		           res = entry.getKey();
		           break;
		        }
		    }
		    
		    System.out.println(res);
		    
		}
		
		
		sc.close();
	}
}