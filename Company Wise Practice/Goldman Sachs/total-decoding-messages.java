/*package whatever //do not write package name here */
/**********

https://www.geeksforgeeks.org/count-possible-decodings-given-digit-sequence/

********/
import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {
    public static int countWays(String str){
        
            int n = str.length();
		    int arr[] = new int[n+1];
		    
		    arr[0] = 1;
		    arr[1] = 1;
		    
		    if(str.charAt(0) == '0') return 0;
		    
		    for(int i=2; i<=n; i++){
		        
		        arr[i] = 0;
		        
		        if(str.charAt(i-1) > '0'){
		            arr[i] = arr[i-1];
		        }
		        
		        if((str.charAt(i-2) == '1' ) ||( str.charAt(i-2) == '2' && str.charAt(i-1) < '7')){
		            arr[i] += arr[i-2];
		        }
		    }
		    
		    return arr[n];
    }
	public static void main (String[] args) {
		//code
		Scanner sc = new Scanner(System.in);
		
		Integer t = sc.nextInt();
		
		while(t-- > 0){
		    Integer n = sc.nextInt();
		    
		    String str = sc.next();
		    
		    System.out.println(countWays(str));
		    
		}
		
		sc.close();
	}
}