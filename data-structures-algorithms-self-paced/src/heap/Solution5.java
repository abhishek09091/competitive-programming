package heap;

import java.util.*;
import java.io.*;
import java.lang.*;

public class Solution5 {
	public static void main(String args[]) {

		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();

		while (t-- > 0) {
			int n = sc.nextInt();
			int k = sc.nextInt();

			int arr[] = new int[n];

			for (int i = 0; i < n; ++i)
				arr[i] = sc.nextInt();

			System.out.println(new GFG5().kthSmallest(arr, n, k));
		}

	}
}

/*
 * This is a function problem.You only need to complete the function given below
 */
class GFG5 {

	public static int kthSmallest(int arr[], int n, int k) {
		// Your code here
		buildheap(arr,n);
		
		int kthSmallest = Integer.MAX_VALUE;
		
		for(int i=0; i<k; i++) {
			kthSmallest = arr[0];
			arr[0] = arr[n-1];
			n--;
			minHeapify(arr, n, 0);
		}
		
		return kthSmallest;
	}
	
	public static void buildheap(int arr[],int n) {
		
		for(int i=n/2 - 1; i>=0; i--) {
			minHeapify(arr,n,i);
		}
	}
	
	public static void minHeapify(int arr[],int n,int i) {
		
		int left = 2 * i + 1;
		int right = 2 * i + 2;
		
		int smallest = i;
		
		if(left < n && arr[left] < arr[smallest]) {
			smallest = left;
		}
		
		if(right < n && arr[right] < arr[smallest]) {
			smallest = right;
		}
		
		if(smallest != i) {
			
			int temp = arr[smallest];
			arr[smallest] = arr[i];
			arr[i] = temp;
			minHeapify(arr, n,smallest);
		}
	}
}