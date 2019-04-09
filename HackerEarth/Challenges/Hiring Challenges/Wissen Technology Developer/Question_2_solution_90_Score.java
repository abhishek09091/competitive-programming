import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.StringTokenizer;

class Pair{
	
	public int i;
	public int j;
	
	public Pair(int i,int j) {
		this.i = i;
		this.j = j;
	}
	
	
}


public class TestClass {
	
	
	
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

	public static void main(String[] args) throws Exception {
		// TODO Auto-generated method stub
		FastReader sc = new FastReader();
		
		Integer n = sc.nextInt();
		
		int []arr = new int[n];
		
		ArrayList<Pair> pair = new ArrayList<Pair>();
		for(int i=0; i<n; i++) {
			int temp = sc.nextInt();
			arr[i] = temp;
		}
		
		int leftsumarr[] = new int[n];
		leftsumarr[0] = 0;
		for(int i=1; i<n; i++) {
			leftsumarr[i] = leftsumarr[i-1] + arr[i-1];
		}
		
		//System.out.println("Sum array");
		for(int i=0; i<n; i++) {
			//System.out.print(leftsumarr[i]+" ");
		}
		//System.out.println();
		
		int rightsumarr[] = new int[n];
		rightsumarr[n-1] = 0;
		for(int i=n-2; i>=0; i--) {
			rightsumarr[i] = rightsumarr[i+1] + arr[i+1];
		}
		
		//System.out.println("Sum array");
		for(int i=0; i<n; i++) {
			//System.out.print(rightsumarr[i]+" ");
		}
		//System.out.println();
		
		int result = 0;
		for (int i = 0; i <= n - 1; i++) { 
	        int val = 0; 
	        for (int j = i; j <= n - 1; j++) {
	        	
	        	
	        	float new_sum = rightsumarr[j] + leftsumarr[j] - val;
	            val = val + arr[j];
	            
	            float denominator_1 = (j-i)+1;
	            float average_1 = ((float)val/denominator_1);
	            
	            
	            float denominator_2 = (n-denominator_1);
	            float average_2 = 0.0f;
	            
	            
	            
	            if(denominator_2 == 0.0) {
	            	average_2 = 0.0f;
	            }else {
	            	average_2 = new_sum/denominator_2;
	            }
	            
	            if(average_1 > average_2) {
	            	//System.out.println("i:"+i+" j:"+j);
		            //System.out.println("average_1: "+average_1+" average_2: "+average_2);
		            pair.add(new Pair(i+1,j+1));
	            	result++;
	            }
	        } 
	    }
		
		
		System.out.println(result);

		for(int i=0; i<pair.size(); i++) {
			Pair temp = pair.get(i);
			System.out.println(temp.i+" "+temp.j);
		}
	}

}
