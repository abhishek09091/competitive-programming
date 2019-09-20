/*package whatever //do not write package name here */
/********

https://www.geeksforgeeks.org/stock-buy-sell/

********/
import java.util.*;
import java.lang.*;
import java.io.*;

class Interval{
    int buy;
    int sell;
}

class GFG {
    
    public static void stockBuySell(int arr[],int n){
        
        int count = 0;
        
        if(n == 1){
            System.out.println("No Profit");
        }else{
            
            List<Interval> list = new ArrayList<>();
            
            int i = 0;
            while(i < n - 1){
                
                while((i < n - 1) && (arr[i+1] <= arr[i])){
                    i++;
                }
                
                if(i == n-1){
                    break;
                }
                
                Interval temp = new Interval();
                temp.buy = i++;
                
                while( (i < n) && (arr[i] >= arr[i-1])){
                    i++;
                }
                
                temp.sell = i - 1;
                list.add(temp);
                count++;
            }
            
            if(count == 0){
                System.out.println("No Profit");
            }else{
               
               for(int j=0; j<list.size(); j++){
                   System.out.print("("+list.get(j).buy+" "+list.get(j).sell+") ");
               }
                System.out.println();
            }
        }
    }
    
	public static void main (String[] args) {
		//code
		Scanner sc =new Scanner(System.in);
		Integer t = sc.nextInt();
		
		while(t-- > 0){
		    
		    Integer n = sc.nextInt();
		    
		    int arr[] = new int[n];
		    
		    for(int i=0; i<n; i++){
		        arr[i] = sc.nextInt();
		    }
		    stockBuySell(arr,n);
		    
		}
		
		sc.close();
	}
}