/*package whatever //do not write package name here */

import java.util.*;
import java.lang.*;
import java.io.*;

class SortComparator implements Comparator<Integer>{
	
	private final Map<Integer,Integer> map;
	public SortComparator(Map<Integer,Integer> map) {
		// TODO Auto-generated constructor stub
		this.map = map;
	}

	@Override
	public int compare(Integer k1, Integer k2) {
		// TODO Auto-generated method stub
		int freqCompare = map.get(k2).compareTo(map.get(k1)); 
		  
        // Compare value if frequency is equal 
        int valueCompare = k1.compareTo(k2); 
  
        // If frequency is equal, then just compare by value, otherwise - 
        // compare by the frequency. 
        if (freqCompare == 0) 
            return valueCompare; 
        else
            return freqCompare; 
		
		
	}
	
}

class GFG {
	public static void main (String[] args) {
		//code
		Scanner sc = new Scanner(System.in);
		
		Integer t =  sc.nextInt();
		
		while(t-- > 0) {
			
			Integer n = sc.nextInt();
			
			int arr[] = new int[n];
			
			for(int i=0; i<n; i++) {
				arr[i] = sc.nextInt();
			}
			
			Map<Integer, Integer> map = new HashMap<>(); 
	        List<Integer> outputArray = new ArrayList<>(); 
	  
	        // Assign elements and their count in the list and map 
	        for (int current : arr) { 
	            int count = map.getOrDefault(current, 0); 
	            map.put(current, count + 1); 
	            outputArray.add(current); 
	        } 
	  
	        // Compare the map by value 
	        SortComparator comp = new SortComparator(map); 
	  
	        // Sort the map using Collections CLass 
	        Collections.sort(outputArray, comp); 
	  
	        // Final Output 
	        for (Integer i : outputArray) { 
	            System.out.print(i + " "); 
	        }
	        System.out.println();
	    }
			
		sc.close();
		}
		
		
	}
