/*package whatever //do not write package name here */
/*******

https://www.geeksforgeeks.org/segregate-0s-and-1s-in-an-array-by-traversing-array-once/

******/
import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {
    static class FastReader 
    { 
        BufferedReader br; 
        StringTokenizer st; 
  
        public FastReader() 
        { 
            br = new BufferedReader(new
                     InputStreamReader(System.in)); 
        } 
  
        String next() 
        { 
            while (st == null || !st.hasMoreElements()) 
            { 
                try
                { 
                    st = new StringTokenizer(br.readLine()); 
                } 
                catch (IOException  e) 
                { 
                    e.printStackTrace(); 
                } 
            } 
            return st.nextToken(); 
        } 
  
        int nextInt() 
        { 
            return Integer.parseInt(next()); 
        } 
  
        long nextLong() 
        { 
            return Long.parseLong(next()); 
        } 
  
        double nextDouble() 
        { 
            return Double.parseDouble(next()); 
        } 
  
        String nextLine() 
        { 
            String str = ""; 
            try
            { 
                str = br.readLine(); 
            } 
            catch (IOException e) 
            { 
                e.printStackTrace(); 
            } 
            return str; 
        } 
    }
	public static void main (String[] args) {
		//code
		FastReader sc = new FastReader();
		
		Integer t = sc.nextInt();
		
		while(t-- > 0){
		    
		    Integer n = sc.nextInt();
		    
		    int arr[] = new int[n];
		    
		    for(int i=0; i<n; i++){
		        arr[i] = sc.nextInt();
		    }
		    
		    int start = 0 , end = n - 1;
		    
		    while(start < end){
		        
		        if(arr[start] == 1){
		            arr[end] = arr[start] + arr[end];
		            arr[start] = arr[end] - arr[start];
		            arr[end] = arr[end] - arr[start];
		            end--;
		        }else{
		            start++;
		        }
		    }
		    
		    for(int i=0; i<n; i++){
		        System.out.print(arr[i]+" ");
		    }
		    
		    System.out.println();
		    
		}
		
	}
}