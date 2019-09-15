/*package whatever //do not write package name here */
/********

https://www.geeksforgeeks.org/find-element-bitonic-array/

*******/
import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {
    
    public static int searchInIncreasing(int arr[],int low,int high,int key){
        
        while(low <= high){
            
            int mid = low + (high - low)/2;
            
            if(arr[mid] == key) return mid;
            
            if(arr[mid] > key) high = mid - 1;
            
            else low = mid + 1;
                
        }
        
        return -1;
    }
    
    public static int searchInDecreasing(int arr[],int low,int high,int key){
        
        while(low <= high){
            
            int mid = low + (high - low)/2;
            
            if(arr[mid] == key) return mid;
            
            if(arr[mid] < key) high = mid - 1;
            
            else low = mid + 1;
                
        }
        
        return -1;
    }
    
    public static int findBiotonicIndex(int arr[],int low,int high){
        
        if(low == high) return low;
        
        int mid = low + (high - low)/2;
        
        if(mid == 0 && arr[0] > arr[1]) return 0;
        if(mid == 0 && arr[0] < arr[1]) return 1;
        
        if(arr[mid] > arr[mid-1] && arr[mid] > arr[mid + 1]) return mid;
        
        // if we are currently in the decreasing sequence subarray, search in left
        if(arr[mid] < arr[mid - 1] && arr[mid] > arr[mid+1]) 
            return findBiotonicIndex(arr,low,mid-1);
            
        // if we are currently in the increasing sequence subarray, search in right
        else if(arr[mid] > arr[mid-1] && arr[mid] < arr[mid+1])
            return findBiotonicIndex(arr,mid+1,high);
        
        return mid;
    }
    
    public static int findTheBitonic(int arr[],int n,int key){
        
        //Find the largest element in the bitonic array
        int index = findBiotonicIndex(arr,0,n-1);
        
         // check if the number to be found is less than the greatest or not
         if(arr[index] < key) return -1;
         
         if(arr[index] == key) return index;
         
         int left_index = searchInIncreasing(arr,0,index,key);
         
         if(left_index != -1) return left_index;
         
         int right_index = searchInDecreasing(arr,index,n-1,key);
         
         if(right_index != -1) return right_index;
         
         return -1;
    }
    
	public static void main (String[] args) {
		//code
		Scanner sc = new Scanner(System.in);
		Integer t = sc.nextInt();
		
		while(t-- > 0){
		    Integer n = sc.nextInt();
		    
		    int arr[] = new int[n];
		    
		    for(int i=0; i<n; i++){
		        arr[i] = sc.nextInt();
		    }
		    
		    Integer key = sc.nextInt();
		    
		    System.out.println(findTheBitonic(arr,n,key));
		}
		
		sc.close();
	}
}