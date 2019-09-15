import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {
	public static void main (String[] args) {
		//code
		Scanner sc = new Scanner(System.in);
		
		Integer t = sc.nextInt();
		
		while(t-- > 0){
		    
		    String str1 = sc.next();
		    String str2 = sc.next();
		   // System.out.println("Str1: " + str1 + " Str2: "+str2);
		    if(str1.length() != str2.length()){
		        System.out.println("NO");
		    }else{
		        
		        Map<Character,Integer> map = new HashMap<>();
		        for(int i=0; i<str1.length(); i++){
		            
		            if(map.containsKey(str1.charAt(i))){
		                map.put(str1.charAt(i),map.get(str1.charAt(i)) + 1);
		            }else{
                        map.put(str1.charAt(i),1);		                
		            }
		        }
		        
		        //System.out.println(map);
		        
		        for(int i=0; i<str2.length(); i++){
		            if(map.containsKey(str2.charAt(i))){
		            	map.put(str2.charAt(i) , map.get(str2.charAt(i)) - 1);
		                if(map.get(str2.charAt(i)) == 0) {
		                	map.remove(str2.charAt(i));
		                }
		            }else{
		               break; 
		            }
		        }
		        
		       // System.out.println(map);
		        if(map.size() > 0 ){
		            System.out.println("NO");
		        }else{
		            System.out.println("YES");
		        }
		    }
		}
		
		sc.close();
	}
}
