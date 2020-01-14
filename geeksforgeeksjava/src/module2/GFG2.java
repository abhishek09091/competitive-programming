package module2;


//Initial Template for Java
/*package whatever //do not write package name here */
import java.io.*;
import java.util.*;
	//Position this line where user code will be pasted.
	class GFG2 {
		public static void main (String[] args) {
			Scanner sc=new Scanner(System.in);
			int t=sc.nextInt();
			while(t-->0)
			{
			    int n=sc.nextInt();
			    long arr[]=new long[n];
			    
			    for(int i=0;i<n;i++)
			    {
			        long x=sc.nextLong();
			        arr[i]=x;
			    }
			    long sum=sc.nextLong();
			    Geeks2 obj=new Geeks2();
			   obj.findPairs(arr,n,sum);
			    
			    
			}
			
		}
	}

	
	/*This is a function problem.You only need to complete the function given below*/
	//User function Template for Java
	
	class Pair{
		
		public long x;
		public long y;
		
		public Pair(long x,long y) {
			
			this.x = x;
			this.y = y;
		}
		
	}
	class Geeks2{
		
	    static void findPairs(long arr[],int n,long sum) {
	         //Your code here
	    	List<Pair> result = new ArrayList<Pair>();
	    	
	    	int start = 0 , end = n-1;
	    	
	    	while(start < end) {
	    		
	    		if(arr[start] + arr[end] == sum) {
	    			result.add(new Pair(arr[start],arr[end]));
	    			start++;
	    			end--;
	    		}else if(arr[start] + arr[end] < sum) {
	    			start++;
	    		}else {
	    			end--;
	    		}
	    	}
	    	
	    	if(result.size() == 0) {
	    		System.out.println("-1");
	    		return;
	    	}
	    	
	    	for(int i=0; i<result.size(); i++) {
	    		System.out.println(result.get(i).x + " "+ result.get(i).y + " " + sum);
	    	}
	    	
	    	return;
	    }
	}
