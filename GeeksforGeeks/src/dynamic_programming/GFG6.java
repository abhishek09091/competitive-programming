package dynamic_programming;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class GFG6 {
	
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
	
	public static void main(String[] args) {
		
		FastReader  sc = new FastReader();
		
		Integer t = sc.nextInt();
		
		while(t-- > 0) {
			Integer n = sc.nextInt();
			
			long arr[]=new long[n];
			
			for(int i=0; i<n; i++) {
				arr[i] = sc.nextLong();
			}
			
			long curr_max = arr[0];
			long res = arr[0];
			
			for(int i=1; i<n; i++) {
				
				curr_max = Math.max(arr[i],  curr_max + arr[i]);
				res = Math.max(res, curr_max);
			}
			
			System.out.println(res);
		}
		
	}

}
