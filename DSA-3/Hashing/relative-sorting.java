/********

https://www.geeksforgeeks.org/sort-array-according-order-defined-another-array/

********/

import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {
	public static void main (String[] args) throws IOException{
		//code
		 // Using BufferedReader class to take input 
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in)); 
  
	    // taking input of number of testcase 
        int t = Integer.parseInt(br.readLine()); 
        
        while(t-- > 0){
            
            String line = br.readLine();
            String[] strs = line.trim().split("\\s+");
            int n = Integer.parseInt(strs[0]);
            int m = Integer.parseInt(strs[1]);
            
            line = br.readLine();
            strs = line.trim().split("\\s+");
            int arr1[] = new int[n];
            
            for (int j = 0; j < n; j++){ 
                arr1[j] = Integer.parseInt(strs[j]);
            }    
            line = br.readLine(); 
            strs = line.trim().split("\\s+"); 
            
            int arr2[] = new int[m];
            for (int j = 0; j < m; j++){ 
                arr2[j] = Integer.parseInt(strs[j]);
            }
            
            Map<Integer,Integer> lookUp = new TreeMap<>();
            for(int e: arr1){
                lookUp.merge(e,1,Integer::sum);
            }
            
            for(int e: arr2){
                
                if(lookUp.containsKey(e)){
                    
                    while(lookUp.get(e) > 0){
                        System.out.print(e + " ");
                        lookUp.merge(e,-1,Integer::sum);
                    }
                    
                    lookUp.remove(e);
                }
            }
            
            for(int e: lookUp.keySet()){
                
                while(lookUp.get(e) > 0){
                        System.out.print(e + " ");
                        lookUp.merge(e,-1,Integer::sum);
                    }
            }
            System.out.println();
        }
	}
}