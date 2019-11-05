/*package whatever //do not write package name here */
/***********

https://www.geeksforgeeks.org/find-first-repeating-element-array-integers/

**********/
import java.util.*;
import java.util.Map.Entry;
import java.lang.*;
import java.io.*;

class GFG {
	
	static class Pair{
		public int index;
		public int count;
		
		public Pair(int index,int count) {
			
			this.index = index;
			this.count = count;
		}
	}
	public static int firstRepeat(int arr[]) {
		
		int res = Integer.MAX_VALUE;
		
		Map<Integer,Pair> count = new HashMap<Integer, GFG.Pair>();
		
		for(int i=0; i<arr.length; i++) {
			
			if(count.containsKey(arr[i])) {
				Pair temp = count.get(arr[i]);
				temp.count += 1;
				count.put(arr[i], temp);
			}else {
				count.put(arr[i], new Pair(i,1));
			}
		}
		
		//System.out.println(count);
		
		for (Map.Entry<Integer, Pair>  entry: count.entrySet()) {
			
			if(entry.getValue().count > 1 && entry.getValue().index < res) {
				
				res = entry.getValue().index;
			}
		}
		
		if(res == Integer.MAX_VALUE) {
			return -1;
		}
		return res+1;
	}
	
	public static void main (String[] args) {
		//code
		Scanner sc = new Scanner(System.in);
		
		Integer t = sc.nextInt();
		
		while(t-- > 0) {
			
			Integer n = sc.nextInt();
			int arr[] = new int[n];
			
			for(int i=0; i<n; i++) {
				arr[i] = sc.nextInt();
			}
			
			System.out.println(firstRepeat(arr));
			
		}
		
		sc.close();
	}
}
