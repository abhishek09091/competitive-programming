/*package whatever //do not write package name here */

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
		
		while(t -- > 0){
		    Integer n = sc.nextInt();
		    
		    int arr[] = new int[n];
		    
		    for(int i=0; i<n; i++){
		        arr[i] = sc.nextInt();
		    }
		    
		    List<Integer> res = new ArrayList<>();
		    String regx = "[1-3]+";
		    for(int i=0; i<n; i++){
		        
		        String str = Integer.toString(arr[i]);
		        if(str.matches(regx)){
		            res.add(arr[i]);
		        }
		    }
		    
		    if(res.size() == 0){
		        System.out.print("-1");
		    }else{
		        Collections.sort(res);
		        for(Integer ele: res){
		            System.out.print(ele + " ");
		        }
		    }
		    
		    System.out.println();
		}
	}
}