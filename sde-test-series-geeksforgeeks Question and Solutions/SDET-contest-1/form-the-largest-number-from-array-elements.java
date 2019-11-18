
/**********
 * 
 * Given an array of N non-negative integers, 
 * arrange them in such a manner that they form the largest number possible.
 * 
 * 
 * Input:
 * 2
 * 5
 * 31 30 34 51 92
 * 4
 * 54 56 58 60
 * Output:
 * 9251343130
 * 60585654
 * 
 * ***********/
import java.util.ArrayList;

import java.util.Arrays;
import java.util.Collections;
import java.util.Comparator;
import java.util.Iterator;
import java.util.List;



	//Initial Template for Java
	//Initial Template for Java
	import java.util.*;
	import java.io.*;
	import java.lang.*;
	class Driver_class1
	{
	    public static void main(String args[])throws IOException
	    {
	        BufferedReader read = new BufferedReader(new InputStreamReader(System.in));
	        int t= Integer.parseInt(read.readLine());
	        
	        while(t-- > 0)
	        {
	            int n = Integer.parseInt(read.readLine());
	            ArrayList<Integer> A = new ArrayList<>();
	            
	            String str[] = read.readLine().trim().split(" ");
	            for(int i= 0; i < n; i++)
	            {
	                A.add(Integer.parseInt(str[i]));
	            }
	            
	            System.out.println(new Largest().findLargestNumber(A));
	            
	            
	        }
	        
	    }
	}

	
	/*This is a function problem.You only need to complete the function given below*/
	//User function Template for Java
	/** 
	 *  Input param: A has the input numbers provided.
	 *  Return String: Return the largest number in the form of string.
	 **/ 

	class ExtendedNum 
	{ 
	    int originalValue; 
	    long modifiedValue; 
	  
	    public ExtendedNum(int originalValue, int n) 
	    { 
	        this.originalValue = originalValue; 
	        String s = Integer.toString(originalValue); 
	        StringBuilder sb = new StringBuilder(s); 
	        StringBuilder ans = new StringBuilder(); 
	        while (ans.length() <= n + 1) 
	            ans.append(sb); 
	  
	        s = ans.toString().substring(0, n + 1); 
	        modifiedValue = Long.parseLong(s); 
	    } 
	  
	    public String toString() 
	    { 
	        return "[" + modifiedValue + 
	                ", " + originalValue + "]"; 
	    } 
	} 



class Largest{
    public static String findLargestNumber(ArrayList<Integer> A){
       // add your code here
    	
    	List<String> list = new ArrayList<String>();
    	for(int i=0; i<A.size(); i++) {
    		list.add(A.get(i).toString());
    	}
    	
    	Collections.sort(list, new Comparator<String>(){ 
    		  
            // A comparison function which is used by  
            // sort() in printLargest() 
            @Override
            public int compare(String X, String Y) { 
              
            // first append Y at the end of X 
            String XY=X + Y; 
              
            // then append X at the end of Y 
            String YX=Y + X; 
              
            // Now see which of the two formed numbers  
            // is greater 
            return XY.compareTo(YX) > 0 ? -1:1; 
        } 
        }); 
    	
    	Iterator<String> it = list.iterator(); 
    	 String res = "";
        while(it.hasNext()) { 
            String temp =  it.next();
            res += temp;
         } 
        
        return res;
    }
    
    
    
    public static String findLargestNumber1(ArrayList<Integer> A){
        // add your code here
        
     	 // present in array 
         int n = Collections.max(A).toString().length(); 
   
         ArrayList<ExtendedNum> en = 
                        new ArrayList<ExtendedNum>(); 
         for (int i = 0 ; i < A.size(); i++) 
             en.add(new ExtendedNum(A.get(i), 
                               n)); 
   
         // sort based on modified value 
         Collections.sort(en, (p1, p2) -> 
          (int)(p2.modifiedValue - p1.modifiedValue)); 
   
         StringBuilder sb1 = new StringBuilder(); 
         for (int i = 0; i < en.size(); i++) 
             sb1.append(new StringBuilder 
             (Long.toString(en.get(i).originalValue))); 
   
   
         // To remove any zeroes at head. 
        // BigInteger bi = new BigInteger(sb.toString()); 
         
         int i = 0;
         String str = sb1.toString();
         while (i < str.length() && str.charAt(i) == '0') 
             i++; 
   
         // Convert str into StringBuffer as Strings 
         // are immutable. 
         StringBuffer sb = new StringBuffer(str); 
   
         // The  StringBuffer replace function removes 
         // i characters from given index (0 here) 
         sb.replace(0, i, ""); 
   
         
   
         return sb.toString(); 
     }
    
    
    
    
    public static String findLargestNumber2(ArrayList<Integer> num){
   		if(num == null || num.size() == 0)
   			return "";

   		// Convert int array to String array, so we can sort later on
   		String[] s_num = new String[num.size()];
   		for(int i = 0; i < num.size(); i++)
   			s_num[i] = String.valueOf(num.get(i));

   		// Comparator to decide which string should come first in concatenation
   		Comparator<String> comp = new Comparator<String>(){
   			@Override
   			public int compare(String str1, String str2){
   				String s1 = str1 + str2;
   				String s2 = str2 + str1;
   				return s2.compareTo(s1); // reverse order here, so we can do append() later
   			}
   		};

   		Arrays.sort(s_num, comp);
   		// An extreme edge case by lc, say you have only a bunch of 0 in your int array
   		if(s_num[0].charAt(0) == '0')
   			return "0";

   		StringBuilder sb = new StringBuilder();
   		for(String s: s_num)
   			sb.append(s);

   		return sb.toString();
    }
    
}
