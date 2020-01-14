package sdet_3;

import java.io.*;
import java.util.*;
import java.lang.*;

public class Driver_class{
	
    public static void main(String args[])throws IOException{
        BufferedReader read = new BufferedReader(new InputStreamReader(System.in));
        int t  =Integer.parseInt(read.readLine());
        
        while(t-- > 0){
            int n = Integer.parseInt(read.readLine());
            int arr[] = new int[n];
            Arrays.fill(arr, 0);
            String str[] = read.readLine().trim().split(" ");
            for(int i = 0; i < n; i++)
             arr[i] = Integer.parseInt(str[i]);
             
            int ind = new LocalMin().LocalMinima(arr, n); 
            
                if(ind >= 0)
                {
                if(ind == 0 && arr[ind] < arr[ind+1]){
                    System.out.print("1");
                }
                else if(ind == n-1 && arr[ind] < arr[n-2]){
                    System.out.print("1");
                }
                else if(ind > 0 && ind < n-1 && arr[ind] < arr[ind-1] && arr[ind] < arr[ind+1]){
                    System.out.print("1");
                }
                else{
                    System.out.print("0");;
                }
    
                System.out.println();;
                }
                else
                {
                    System.out.println("0");
                }
        }
    }
}


/*This is a function problem.You only need to complete the function given below*/
//User function Template for Java
// Function which returns the index of average marks
// arr[]: input array containing marks of the students
// n: nmber of students
class LocalMin{
    
   static int LocalMinima(int arr[], int n){
        
        if(n==1){
            return 0;
        }
        // add your code here
        for(int i=0; i<n; i++){
            
            if(i==0){
                if(arr[i] < arr[i+1]){
                    return i;
                }
            }else if(i == n-1){
                if(arr[i-1] > arr[i]){
                    return i;
                }
            }else if((arr[i-1] > arr[i] )&& (arr[i] < arr[i+1])){
                return i;    
            }
        }
        
        return 0;
    }
}
