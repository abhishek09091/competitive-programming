/*package whatever //do not write package name here */
/**********

https://www.geeksforgeeks.org/check-if-an-array-can-be-divided-into-pairs-whose-sum-is-divisible-by-k/

**********/
import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {
    
    public static boolean checkPairs(int arr[],int n,int k){
        
        if((n & 1) == 1){
            return false;
        }
        
        Map<Integer,Integer> map = new HashMap<>();
        
        for(int i=0; i<n; i++){
            
            if(map.containsKey(arr[i]%k)){
                map.put(arr[i]%k, map.get(arr[i]%k)+1);
            }else{
                map.put(arr[i]%k,1);
            }
        }
        
        for(int i=0; i<n; i++){
            
            int rem = arr[i]%k;
            
            if(2*rem == k){
                
                if(map.get(rem)%2 != 0){
                    return false;
                }
            }
            
            else if(rem == 0){
                
                if((map.get(rem) & 1)==1)
                    return false;
            }
            
            else if(map.get(rem) != map.get(k-rem)){
                return false;
            }
            
        }
        
        return true;
    }
    
	public static void main(String[] args) {
		//code
		Scanner sc = new Scanner(System.in);
		
		Integer t = sc.nextInt();
		
		while(t-- > 0){
		    
		    Integer n = sc.nextInt();
		    
		    int arr[] = new int[n];
		    
		    for(int i=0; i<n; i++){
		        arr[i] = sc.nextInt();
		    }
		    
		    Integer k = sc.nextInt();
		    if(checkPairs(arr,n,k)){
		        System.out.println("True");
		    }else{
		        System.out.println("False");
		    }
		    
		}
		
		sc.close();
	}
}