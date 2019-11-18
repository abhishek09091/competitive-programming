/*package whatever //do not write package name here */
import java.io.*;
import java.util.*;
import java.util.Map.Entry;
	//Position this line where user code will be pasted.
	public class GFG1 {
		public static void main (String[] args) {
			Scanner sc=new Scanner(System.in);
			int t=sc.nextInt();
			while(t-->0)
			{
			    int n=sc.nextInt();
			    int arr[]=new int[n];
			    
			    for(int i=0;i<n;i++)
			    {
			        int x=sc.nextInt();
			        arr[i]=x;
			    }
			    Geeks1 obj=new Geeks1();
			   System.out.println(obj.findLoner(arr,n));
			    
			    
			}
			
		}
	}

	
	/*This is a function problem.You only need to complete the function given below*/
	//User function Template for Java
	class Geeks1{
		
	    static long findLoner(int arr[],int n) {
	    	//Your code here
	    	long res = arr[0];
	    	for(int i=1; i<n; i++) {
	    		
	    		res = res ^ arr[i];
	    	}
	         
	    	if(res == 0) {
	    		return -1;
	    	}
	    	
	    	return res;
	    }
	    
	    static long findLoner1(int arr[],int n) {
	    	//Your code here
	    	Map<Integer,Integer> map = new HashMap<Integer, Integer>();
	    	
	    	for(int i=0; i<n; i++) {
	    		
	    		if(map.containsKey(arr[i])) {
	    			map.put(arr[i],map.get(arr[i]) + 1);
	    		}else {
	    			map.put(arr[i], 1);
	    		}
	    	}
	    	
	    	for (Map.Entry<Integer, Integer>  entry: map.entrySet()) {
				
	    		if(entry.getValue() == 1){
	    			return entry.getKey();
	    		}
			}
	    	
	    	return -1;
	    }
	    
		//
	    static long findLoner2(int[] arr, int n) 
	    { 
	        HashMap<Integer, Integer> m = new HashMap<>(); 
	        long sum1 = 0, sum2 = 0; 
	        for (int i = 0; i < n; i++) 
	        { 
	            if (!m.containsKey(arr[i])) 
	            { 
	                sum1 += arr[i]; 
	                m.put(arr[i], 1); 
	            } 
	            sum2 += arr[i]; 
	        } 
	  
	        // applying the formula. 
	        long res = (2 * (sum1) - sum2);  
	        
	        if(res == 0) {
	        	return -1;
	        }
	        
	        return res;
	    } 
	}