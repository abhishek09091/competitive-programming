/*package whatever //do not write package name here */
/*********

https://www.geeksforgeeks.org/non-repeating-element/

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
		    
		    long arr[] = new long[n];
		    
		    for(int i=0; i<n; i++){
		        arr[i] = sc.nextLong();
		    }
		    
		    
		    Map<Long,Integer> map = new LinkedHashMap<>();
		    
		    for(int i=0; i<n; i++){
		        if(map.containsKey(arr[i])){
		            map.put(arr[i] , map.get(arr[i]) + 1);
		        }else{
		            map.put(arr[i],1);
		        }
		    }
		    //System.out.println(map);
		    boolean flag = false;
		    for(Map.Entry<Long, Integer> x : map.entrySet()){
		        if(x.getValue() == 1){
		            System.out.println(x.getKey());
		            flag = true;
		            break;
		        }
		    }
		    
		    if(!flag){
		        System.out.println("0");
		    }
		}
	}
}