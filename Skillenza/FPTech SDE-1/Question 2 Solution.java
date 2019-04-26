import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;
import java.util.Comparator;
import java.util.Stack;
import java.util.StringTokenizer;


class Interval {
	int start ,end;
	
	public Interval(int start,int end) {
		this.start = start;
		this.end = end;
	}
}


public class Solution2 {
	
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
	
	  public static void mergeIntervals(Interval arr[])  
	    {  
	        // Test if the given set has at least one interval  
	        if (arr.length <= 0)  
	            return;  
	    
	        // Create an empty stack of intervals  
	        Stack<Interval> stack=new Stack<>(); 
	    
	        // sort the intervals in increasing order of start time  
	        Arrays.sort(arr,new Comparator<Interval>(){ 
	            public int compare(Interval i1,Interval i2) 
	            { 
	                return i1.start-i2.start; 
	            } 
	        }); 
	    
	        // push the first interval to stack  
	        stack.push(arr[0]);  
	    
	        // Start from the next interval and merge if necessary  
	        for (int i = 1 ; i < arr.length; i++)  
	        {  
	            // get interval from stack top  
	            Interval top = stack.peek();  
	    
	            // if current interval is not overlapping with stack top,  
	            // push it to the stack  
	            if (top.end < arr[i].start)  
	                stack.push(arr[i]);  
	    
	            // Otherwise update the ending time of top if ending of current  
	            // interval is more  
	            else if (top.end < arr[i].end)  
	            {  
	                top.end = arr[i].end;  
	                stack.pop();  
	                stack.push(top);  
	            }  
	        }  
	    
	        // Print contents of stack  
	       // System.out.print("The Merged Intervals are: "); 
	        int total_distance = 0;
	        while (!stack.isEmpty())  
	        {  
	            Interval t = stack.pop();
	            
	            if(t.start >= 0 && t.end >=0) {
	            	total_distance += (t.end - t.start +1);
	            }else if(t.start < 0 && t.end >=0){
	            	total_distance += (t.end + 1);
	            	t.start *= -1;
	            	total_distance += t.start; 
	            }else {
	            	t.start *= -1;
	            	t.end *= -1;
	            	
	            	total_distance += (t.start - t.end +1);
	            }
	         //   System.out.print("["+t.start+","+t.end+"] "); 
	        }
	        
	        System.out.println(total_distance);
	    } 
	
	
	public static void main(String[] args) {
		
		FastReader sc =new FastReader();
		
		int t = sc.nextInt();
		
		while(t-- > 0) {
			
			int n = sc.nextInt();
			
			Interval arr[] = new Interval[n];
			
			for(int i=0; i<n; i++) {
				int u = sc.nextInt();
				int v = sc.nextInt();
				
				arr[i] = new Interval(u, v);
			}
			
			mergeIntervals(arr);
			
		}
	}

}
