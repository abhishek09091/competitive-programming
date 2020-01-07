package heap;


import java.lang.*;
import java.util.*;
import java.io.*;

public class Solution3{
	
    public static void main(String args[]){
    	
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        
        while(t-- > 0)
        {
            int n = sc.nextInt();
            int k = sc.nextInt();
            
            int arr[] = new int[n];
            for(int i = 0; i<n; ++i)
                arr[i] = sc.nextInt();
            
            new GFG3().kthLargest(arr, n, k);
            
        }
    }
}


/*This is a function problem.You only need to complete the function given below*/
class GFG3{
    public static void kthLargest(int arr[], int n, int k){
        // Your code here
       buildHeap(arr,n);        
        for(int i=0; i<k; i++){
            System.out.print(arr[0] + " ");
            arr[0] = arr[n-1];
            n--;
            heapify(arr,n,0);
        }
        
        System.out.println();
    }
    
    public static void buildHeap(int arr[],int n){
         for(int i=n/2 - 1; i>=0; i--){
            heapify(arr,n,i);
        }
    }
    
    public static void heapify(int arr[],int n,int i){
        
        int left = 2 * i  + 1;
        int right  = 2 * i + 2;
        int largest = i;
        
        if(left < n && arr[left]  > arr[largest]){
            largest = left;
        }
        
        if(right < n && arr[right] > arr[largest]){
            largest = right;
        }
        
        if(largest != i){
            int temp = arr[largest];
            arr[largest] = arr[i];
            arr[i] = temp;
            heapify(arr,n,largest);
        }
    }
}