/*************

https://www.geeksforgeeks.org/median-of-stream-of-integers-running-integers/
https://www.geeksforgeeks.org/median-of-stream-of-running-integers-using-stl/

************/

import java.util.Collections;
import java.util.PriorityQueue;
import java.util.Scanner;

class GFG {
	
	public static void runningMedian(int arr[],int n) {
		
		int median = arr[0];
		
		//max-heap
		PriorityQueue<Integer> smaller = new PriorityQueue<Integer>(Collections.reverseOrder());
		//min-heap
		PriorityQueue<Integer> greater = new PriorityQueue<Integer>();
		
		smaller.add(arr[0]);
		System.out.println(median);
		
		for(int i=1; i<n; i++) {
			
			int x = arr[i];
			
			if(smaller.size() > greater.size()) {
				
				if(x < median) {
					greater.add(smaller.remove());
					smaller.add(x);
				}else {
					greater.add(x);
				}
				
				median = (greater.peek() + smaller.peek() ) / 2;
			}else if(smaller.size() == greater.size()) {
				
				if(x < median) {
					smaller.add(x);
					median = smaller.peek();
				}else {
					greater.add(x);
					median = greater.peek();
				}
			}else {
				
				if(x > median) {
					smaller.add(greater.remove());
					greater.add(x);
				}else {
					smaller.add(x);
				}
				median = (greater.peek() + smaller.peek() ) / 2;
			}
			System.out.println(median);
		}
		
	}
	
	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		
		Integer n = sc.nextInt();
		
		int arr[] = new int[n];
		
		for(int i=0; i<n; i++) {
			arr[i] = sc.nextInt();
		}
		runningMedian(arr,n);
		sc.close();
	}

}
