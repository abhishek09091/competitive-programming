
//Initial Template for Java
import java.util.*;
import java.lang.*;
import java.io.*;
class GFG
{
    
	public static void main (String[] args)
	{
    	 Scanner sc = new Scanner(System.in);
    	 int t = sc.nextInt();
    	 
    	 boolean flag = false;
    	 while(t-- > 0){
    	   String s1=sc.next();
    	   String s2=sc.next();
    	   Geeks obj=new Geeks();
    	   System.out.println(obj.coutChars(s1,s2));
    	   
    	 }
    }
}
//Position this line where user code will be pasted.


/*This is a function problem.You only need to complete the function given below*/
//User function Template for Java
/*Function to count number of characters 
* to make s1 and s2 equal
* s1 : first string
* s2 : second string
*/
class Geeks{
    
    static int coutChars(String s1, String s2)
    {
        
       //Your code here
       int count[] = new int[26];
       
       for(int i=0; i<s1.length(); i++){
           int index = (int)s1.charAt(i);
           count[index - 97]++;
       }
       
       for(int i=0; i<s2.length(); i++){
           int index = (int)s2.charAt(i);
           count[index - 97]--;
       }
       int res = 0;
       for(int i=0; i<26; i++){
           
           if(count[i] >= 1){
               res += count[i];
           }else if(count[i] < 0){
               res += ((-1) * count[i]);
           }
       }
       
       return res;
    }
}