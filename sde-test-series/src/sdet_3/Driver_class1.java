package sdet_3;


//Initial Template for Java
import java.util.*;
import java.io.*;
import java.lang.*;

public class Driver_class1{
	
	    public static void main(String args[])throws IOException{
	    	
	        BufferedReader read = new BufferedReader(new InputStreamReader(System.in));
	        int t  =Integer.parseInt(read.readLine());
	        
	        while(t-- >0)
	        {
	            String s = read.readLine();
	            System.out.println(new Compress().generateCompressString(s));
	        }
	    }
	}
	/*This is a function problem.You only need to complete the function given below*/
	//User function Template for Java
	/**
	 * Param: intial string
	 * Return: compressed string
	**/
class Compress{
	    
	static String generateCompressString(String str){
        StringBuilder ans= new StringBuilder();

        for(int i=0; i<str.length();) {
            int j=0;
            while((i+j)<str.length() && str.charAt(i) == str.charAt(i+j)) {
                j++;
            }
            ans = ans.append(str.charAt(i));
            ans = ans.append(Integer.toString(j));
            i = i+j;
        }
    
        return ans.toString();
        
    }
}