/******

https://www.geeksforgeeks.org/merge-sort/

******/
import java.util.*;
class Merge_Sort
{
	static void printArray(int arr[])
    {
        int n = arr.length;
        for (int i=0; i<n; ++i)
            System.out.print(arr[i] + " ");
        System.out.println();
    }
    static void mergeSort(int arr[], int l, int r)
    {
        GfG g = new GfG();
        if (l < r)
        {
            int m = (l+r)/2;
            mergeSort(arr, l, m);
            mergeSort(arr , m+1, r);
            g.merge(arr, l, m, r);
        }
    }
	public static void main(String args[])
	{
		Scanner sc = new Scanner(System.in);
		int T = sc.nextInt();
		while(T>0)
		{
			int n = sc.nextInt();
			Merge_Sort ms = new Merge_Sort();
			int arr[] = new int[n];
			for(int i=0;i<n;i++)
				arr[i] = sc.nextInt();
			GfG g = new GfG();
			mergeSort(arr,0,arr.length-1);
			ms.printArray(arr);
		T--;
		}
	}
}


/*This is a function problem.You only need to complete the function given below*/
/* The task is to complete merge() which is used
in below mergeSort() */
class GfG
{
   // Merges two subarrays of arr[].  First subarray is arr[l..m]
   // Second subarray is arr[m+1..r]
    void merge(int arr[], int l, int m, int r){
         // Your code here
         
         int n1 = m - l + 1;
         int n2 = r - m;
         
         int left[] = new int[n1];
         int right[] = new int[n2];
         
         for(int i=0; i<n1; i++){
             left[i] = arr[l+i];
         }
         
         for(int j=0; j<n2; j++){
             right[j] = arr[m+1+j];
         }
         
         int i = 0;
         int j = 0;
         int z = l;
         
         while(i < n1 && j < n2){
             
             if(left[i] < right[j]){
                 arr[z++] = left[i++];
             }else{
                 arr[z++] = right[j++];
                 
             }
             
         }
         
         while(i < n1){
             arr[z++] = left[i++];
         }
         
         while(j < n2){
             arr[z++] = right[j++];
         }
         
         
    }
}
 /* This method is present in a class other than GfG class .
static void mergeSort(int arr[], int l, int r)
 {
    GfG g = new GfG();
    if (l < r)   
   {
        int m = (l+r)/2;
        mergeSort(arr, l, m);
        mergeSort(arr , m+1, r);
        g.merge(arr, l, m, r);
    }
}*/