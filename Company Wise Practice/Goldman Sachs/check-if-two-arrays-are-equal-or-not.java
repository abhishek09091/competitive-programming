/*package whatever //do not write package name here */
/*******

https://www.geeksforgeeks.org/check-if-two-arrays-are-equal-or-not/

********/
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
		    
		    Map<Long,Integer> map = new HashMap<>();
		    
		    for(int i=0; i<n; i++){
		        Long temp = sc.nextLong();
		        
		        if(map.containsKey(temp)){
		            map.put(temp,map.get(temp) + 1);
		        }else{
		            map.put(temp,1);
		        }
		        
		    }
		    
		    boolean flag = true;
		    
		    long arr[] = new long[n];
		    
		    for(int i=0; i<n; i++){
		      arr[i] = sc.nextLong();  
		    }
		    
		    
		    for(int i=0; i<n; i++){
		        
		        long temp = arr[i];
		        
		        if(map.containsKey(temp)){
		            map.put(temp,map.get(temp) - 1);
		            
		            if(map.get(temp) == 0){
		                map.remove(temp);
		            }
		        }else{
		            flag = false;
		            break;
		        }
		    }
		    
		    if(map.size() == 0){
		        flag = true;
		    }
		    
		    if(flag){
		        System.out.println("1");
		    }else{
		        System.out.println("0");
		    }
		}
		
		sc.close();
	}
}