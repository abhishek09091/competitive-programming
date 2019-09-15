
import java.util.*;
 
class RLEncoding
{
   public static void main(String[] args) 
   {
 
      Scanner sc = new Scanner(System.in);
    
	  int T = sc.nextInt();
	  sc.nextLine();
	  while(T>0)
	  {
		  
		String str = sc.nextLine();
		
		GfG g = new GfG();
		System.out.println(g.encode(str));
		
      
        T--;
	  }
   }
}


/*This is a function problem.You only need to complete the function given below*/
class GfG
 {
	String encode(String str){
          //Your code here
          String res = "";
          
          for(int i=0; i<str.length(); i++){
              
              res += Character.toString(str.charAt(i));
              int count = 1;
              i++;
              while(i < str.length() && str.charAt(i - 1) == str.charAt(i)){
                  i++;
                  count++;
              }
              
              i--;
              
              res += Integer.toString(count);
          }
          
          return res;
	}
	
 }