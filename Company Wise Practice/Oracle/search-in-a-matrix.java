import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {
	public static void main (String[] args) {
		//code
		Scanner sc = new Scanner(System.in);
		
		Integer t = sc.nextInt();
		
		while(t-- > 0){
		    
		    Integer row = sc.nextInt();
		    Integer col = sc.nextInt();
		    
		    int arr[][] = new int[row][col];
		    boolean flag = false;
		    for(int i=0; i<row; i++){
		        for(int j=0; j<col; j++){
		            
		            arr[i][j] = sc.nextInt();
		        }
		    }
		    
		    int i = 0;
		    int j = col-1;
		    Integer search = sc.nextInt();
		    while(i < row && j >=0 ){
		        
		       if(search == arr[i][j]){
		           flag = true;
		           break;
		       }else if(search < arr[i][j]){
		           j--;
		       }else{
		           i++;
		       }
		    }
		    
		    if(flag){
		        System.out.println("1");
		    }else{
		        System.out.println("0");
		    }
		}
		
		sc.close();
	}
}