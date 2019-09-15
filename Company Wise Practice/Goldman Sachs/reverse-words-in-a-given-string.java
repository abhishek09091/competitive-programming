/*********

https://www.geeksforgeeks.org/reverse-words-given-string-java/
https://www.geeksforgeeks.org/reverse-words-in-a-given-string/

********/

import java.util.*;
import java.lang.*;
import java.io.*;
class GFG {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int test = sc.nextInt();
        while (test > 0) {
            String s = sc.next();
            Reverse obj = new Reverse();
            obj.reverseWords(s);
             System.out.println();
            test--;
        }
    }
}


/*This is a function problem.You only need to complete the function given below*/
class Reverse {
    public static void reverseWords(String sd) {
        // Your code here
        String arr[] = sd.split("\\.");
        int i = 0;
        int n = arr.length - 1;
        while(i < n){
            String t = arr[i];
            arr[i] = arr[n];
            arr[n] = t;
            i++;
            n--;
        }
        
        String res = String.join(".",arr);
        System.out.print(res);
    }
}