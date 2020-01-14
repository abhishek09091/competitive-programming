package my_java;

	//Initial Template for Java
	import java.io.*;
	import java.util.*;
	import java.lang.*;
	//Position this line where user code will be pasted.
	// Driver class
public	class GFG_1 {
		public static void main (String[] args) {
		    
		    // Taking input through Scanner class
			Scanner sc = new Scanner(System.in);
			
			int testcase = sc.nextInt();
			
			while(testcase-- > 0){
			    int sizeof_array = sc.nextInt();
			    int k = sc.nextInt();
			    
			    int a[] = new int[sizeof_array];
			    
			    for(int i = 0;i<sizeof_array;i++){
			        a[i] = sc.nextInt();
			    }
			    
			    Geeks obj = new Geeks();
			    obj.countSpecials(a, sizeof_array, k);
			}
			
		}
	}
	
	/*This is a function problem.You only need to complete the function given below*/
	//User function Template for Java
	/*Class Geeks with countSpecials as its member function
	* a : input array
	* n : size of array
	k : to calculate floor(n/k)
	*/
	class Geeks{
	    static void countSpecials(int a[], int n, int k){
	       
	    	
	    	int f = (int)Math.floor(n/k);
	        // your code here
	       
	        
	        int count[] = new int[1001];
	        
	        for(int i=0; i<n; i++){
	            count[a[i]]++;
	        }
	        
	        int res = 0;
	        for(int i=0; i<1001; i++){
	            if(count[i] == f){
	                res++;
	            }
	        }
	        System.out.println(res);
	    }
	}
