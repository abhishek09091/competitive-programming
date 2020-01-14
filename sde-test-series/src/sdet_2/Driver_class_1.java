package sdet_2;

//Initial Template for Java
import java.io.*;
import java.util.*;
import java.lang.*;
	     
class Driver_class_1{
	        public static void main(String args[])throws IOException
	        {
	            BufferedReader read = new BufferedReader(new InputStreamReader(System.in));
	            int t  =Integer.parseInt(read.readLine());
	     
	            while(t-- > 0)
	            {
	                String str[] = read.readLine().trim().split(" ");
	                int r =Integer.parseInt(str[0]);
	                int c = Integer.parseInt(str[1]);
	     
	     
	                long val = 0;
	                ArrayList<ArrayList<Long>> nums = new ArrayList<>();
	                for(int i = 0; i < r; i++)
	                {
	                    ArrayList<Long> v = new ArrayList<>();
	                    str = read.readLine().trim().split(" ");
	                    for(int j = 0; j < c; j++)
	                    {
	                        val = Long.parseLong(str[j]);
	                        v.add(val);
	                    }
	                    nums.add(v);
	                }
	     
	                System.out.println(new Median().findMedian(nums));
	            }
	        }
	    }
	    
	/*This is a function problem.You only need to complete the function given below*/
	//User function Template for Java
	/**
	 *  Param:
	 *  ArrayList<ArrayList<Long>> nums: 2D matrix which is row wise sorted and has odd number of elements.
	 *  Return int: Median of the 2D matrix.
	 **/
class Median{

	static long findMedian(ArrayList<ArrayList<Long>> nums){
	           // add your code here
	           int row = nums.size();
	           int col = nums.get(0).size();
	           
	           Long min = Long.MAX_VALUE;
	           Long max = Long.MIN_VALUE;
	           
	           for(int i=0; i<row; i++) {
	        	   ArrayList<Long> temp = nums.get(i);
	        	   if(temp.get(0) < min) {
	        		   min = temp.get(0);
	        	   }
	        	   
	        	   if(temp.get(col-1) > max) {
	        		   max = temp.get(col-1);
	        	   }
	           }
	           System.out.println("Min: "+min+" Max: "+max);
	           
	           int desired = (row * col +1)/2;
	           while(min < max) {
	        	   
	        	   long mid = min + (max - min) /2;
	        	   System.out.println("mid: "+mid);
	        	   int place = 0;
	        	   int get = 0;
	        	   
	        	   for(int i=0; i<row; i++) {
	        		   
	        		   get = Collections.binarySearch(nums.get(i), mid);
	        		   
	        		   if(get < 0) {
	        			   
	        			   get = Math.abs(get) - 1;
	        		   }else {
	        			   
	        			   while(get < nums.get(i).size() && nums.get(i).get(get) == mid) {
	        				   get += 1;
	        			   }
	        		   }
	        		   
	        		   place = place + get;
	        	   }
	        	   
	        	   if(place < desired) {
	        		   min = mid + 1;
	        	   }else {
	        		   max = mid;
	        	   }
	           }
	           
	           return min;
	 }
}