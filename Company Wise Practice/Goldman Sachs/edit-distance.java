/*package whatever //do not write package name here */
/*********

https://www.geeksforgeeks.org/edit-distance-dp-5/

*********/
import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {
    
    public static int minOperations(String str1, String str2){
        
        int m = str1.length();
        int n = str2.length();
        int edit[][] = new int[m+1][n+1];
        
        for(int i=0; i<=m; i++){
            for(int j=0; j<=n; j++){
                
                if(i==0){
                    edit[i][j] = j;
                }else if(j == 0){
                    edit[i][j] = i;
                }else if(str1.charAt(i-1) == str2.charAt(j-1)){
                    edit[i][j] = edit[i-1][j-1];
                }else{
                    
                    edit[i][j] = 1+ Math.min(Math.min(edit[i-1][j-1],
                                        edit[i-1][j]),
                                        edit[i][j-1]
                                        );
                }
            }
        }
        
        return edit[m][n];
    }
	public static void main (String[] args) {
		//code
		Scanner sc = new Scanner(System.in);
		
		Integer t = sc.nextInt();
		
		while(t-- > 0){
		    
		    Integer n = sc.nextInt();
		    Integer m = sc.nextInt();
		    
		    String str1 = sc.next();
		    String str2 = sc.next();
		    
		    System.out.println(minOperations(str1,str2));
		}
		
		sc.close();
	}
}