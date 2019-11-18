
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
    	   String s=sc.next();
    	   Geeks obj=new Geeks();
    	   obj.follPatt(s);
    	   
    	 }
    }
}
//Position this line where user code will be pasted.


/*This is a function problem.You only need to complete the function given below*/
//User function Template for Java
class Geeks{
    
    static void follPatt(String s)
    {
        
        //Your code here
        int i = 0;
        boolean flag = true;
        while(i < s.length()){
            
            int yCount = 0;
            int xCount = 0;
            
            while(i < s.length() && s.charAt(i) == 'x'){
                xCount++;
                i++;
            }
            
            while(i < s.length() && s.charAt(i) == 'y'){
                yCount++;
                i++;
            }
            
            if(xCount != yCount){
                flag = false;
                break;
            }
        }
       
       if(flag){
            System.out.print("1");    
       }else{
            System.out.print("0");
       }
      System.out.println();
    }
}
