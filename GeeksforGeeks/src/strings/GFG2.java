package strings;

/*package whatever //do not write package name here */

import java.util.*;
import java.lang.*;
import java.io.*;

class GFG2 {
    
    public static void groupAnagrams(String arr[]){
        
        Map<String,List<String>> res = new HashMap<>();
        
        for(int i=0; i<arr.length; i++){
            
            String word = arr[i];
            char[] letters = word.toCharArray();
            Arrays.sort(letters);
            String newWord = new String(letters);
            
            if(res.containsKey(newWord)){
                
                res.get(newWord).add(word);
                
            }else{
                List<String> newList = new ArrayList<>();
                newList.add(word);
                res.put(newWord,newList);
            }
        }
        
        List<Integer> list = new ArrayList<>();
        for(String s : res.keySet()){
            
            List<String> temp = res.get(s);
            
            if(temp.size() > 1){
                list.add(temp.size());
            }
        }
        
        Collections.sort(list);
        
        for(int i=0; i<list.size(); i++){
            System.out.print(list.get(i)+" ");
        }
        
        System.out.println();
        
        return;
    }
	public static void main (String[] args) {
		//code
		Scanner sc = new Scanner(System.in);
		
		Integer t = sc.nextInt();
		
		while(t-- > 0){
		    
		    Integer n = sc.nextInt();
		    
		    String arr[] = new String[n];
		    
		    for(int i=0; i<n; i++){
		        arr[i] = sc.next();
		    }
		    
		    groupAnagrams(arr);
		}
		
		sc.close();
	}
}