package heap;

import java.io.*;
import java.util.*;

public class Solution8 {
	
	public static void main(String[] args) throws IOException {
		
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int t = Integer.parseInt(br.readLine().trim());
		
		while(t-- > 0) {
			String inputLine[] = br.readLine().trim().split(" ");
			int n = Integer.parseInt(inputLine[0]);
			inputLine = br.readLine().trim().split(" ");
			int[] arr = new int[n];
			for(int i=0; i<n; i++) {
				arr[i] = Integer.parseInt(inputLine[i]);
			}
			
			int k = Integer.parseInt(br.readLine().trim());
			new GFG8().kMostOccuring(arr, n, k);
		}
		
	}

}

class GFG8{
	
	void kMostOccuring(int arr[],int n,int k) {
		
		Map<Integer,Integer> map = new HashMap<>();
		for (int i = 0; i < arr.length; i++) {
			
			if(map.containsKey(arr[i])) {
				map.put(arr[i], map.get(arr[i])+ 1);
			}else {
				map.put(arr[i], 1);
			}
		}
		
		PriorityQueue<Integer> heap = new PriorityQueue<Integer>(Collections.reverseOrder());
		
		for(Map.Entry<Integer, Integer> entry : map.entrySet()){
			
			heap.add(entry.getValue());
		} 
		
		int value = 0;
		while(k-- > 0) {
			value += heap.peek();
			heap.poll();
		}
		
		System.out.println(value);
	}
}