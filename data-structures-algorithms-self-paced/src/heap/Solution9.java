package heap;

import java.util.*;

public class Solution9 {
	
	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		
		while(t-- > 0) {
			int n = sc.nextInt();
			int arr[] = new int[n];
			for (int i = 0; i < arr.length; i++) {
				arr[i] = sc.nextInt();
			}
			new GFG9().minCost(arr, n);
		}
		sc.close();
	}

}


class GFG9{
	
	 void minCost(int arr[], int n){
		 
		 PriorityQueue<Integer> minHeap = new PriorityQueue<Integer>();
		 
		 for(int i=0; i<n; i++) {
			 minHeap.add(arr[i]);
		 }
		 
		 long sum = 0;
		 
		 while(!minHeap.isEmpty()) {
			 int firstMin = minHeap.peek();
			 int secondMin = 0;
			 minHeap.poll();
			 
			 if(!minHeap.isEmpty()) {
				 secondMin = minHeap.peek();
				 minHeap.poll();
			 }
			 
			 int temp = firstMin + secondMin;
			 if(minHeap.size() == 0) {
				 sum += temp;
				 break;
			 }
			 sum += temp;
			 minHeap.add(temp);
		 }
		 
		 System.out.println(sum);
	  }
	 
	 void minCost1(int arr[], int n){
		 
		 PriorityQueue<Integer> minHeap = new PriorityQueue<Integer>();
		 
		 for(int i=0; i<n; i++) {
			 minHeap.add(arr[i]);
		 }
		 
		 long result = 0;
		 
		 while(!minHeap.isEmpty() && (minHeap.size() != 1 )) {
			 int sum = minHeap.peek();
			 minHeap.poll();
			 sum += minHeap.peek();
			 minHeap.poll();
			 minHeap.add(sum);
			 result += sum;
		 }
		 
		 System.out.println(result);
	  }
}