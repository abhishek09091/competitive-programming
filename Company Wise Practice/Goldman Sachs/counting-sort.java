/*********

https://www.geeksforgeeks.org/counting-sort/

*******/
import java.util.*;
import java.lang.*;
class CountSort
{
    public static void main (String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        
        while(t-- > 0)
        {
            long n = sc.nextLong();
            char seq[] = new char[(int)n+1];
            String str = "";
            str = sc.next();
            seq = str.toCharArray();
            GfG gfg = new GfG();
             gfg.countSort(seq);
            System.out.println(seq);
        }
    }
}


/*This is a function problem.You only need to complete the function given below*/
class GfG
{
    
    // Function to do count sort
    // seq[]: input array
    public static void countSort(char seq[]){
        // add your code here  
        int length = seq.length;
        int count[] = new int[26];
        
        for(int i=0; i<length; i++){
            int index = (int)seq[i] - 97;
            count[index]++;
        }
        
        int curr = 0;
        
        for(int i=0; i<26; i++){
            
            for(int j=0; j<count[i]; j++){
                
                seq[curr] = (char)(i + 97);
                curr++;
            }
        }
        
    }
}