package my_java;

import java.util.HashSet;
import java.util.Set;

public class Test {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int arr[][] = new int[3][];
	      arr[0] = new int[1];
	      arr[1] = new int[2];
	      arr[2] = new int[3];               
	      int sum = 0;

	    for (int i = 0; i < 3; ++i) 
	      for (int j = 0; j < i + 1; ++j)
	            arr[i][j] = j + 1;

	    for (int i = 0; i < 3; ++i) 
	      for (int j = 0; j < i + 1; ++j)
	            sum += arr[i][j];

	    	  System.out.println(sum);
	    	  
	   
	   Set<Character> set = new HashSet<Character>();
	   
	   set.add('a');
	   set.contains('a');
	   
	   char ch = (char)97;
	   System.out.println(ch);
	   

	}

}
