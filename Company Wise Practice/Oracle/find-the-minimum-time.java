/************

Here is my O(1) solution. To utilize the time used by two machines, we should try to achieve S1*k = S2(N-k) with some k. 
Rearrange the equation, we have k=(S2*N)/(S1+S2).
Code:
int k = (S2*N)/(S1+S2);
return min(max(S1*k, S2*(N-k)), max(S1*(k+1), S2*(N-k-1)));

We are trying to make the two machines share the job in a utilized way. 
Suppose Scanner1 takes k documents and runs a period of S1*k, Scanner2 will take (N-k) documents and runs a period of S2*(N-k). 
Ideally, the time is utilized if S1*k = S2*(N-k)since both scanner run the same time and kind of share the total job in an efficient way. 
However, k will be a double number in most cases. So the answer to this problem is finding the closest integer to k such that S1*k = S2*(N-k). 
Rearrange the equation, we should have k = (S2*N)/(S1+S2).

Why do we need to takeout max(S1*(k+1), S2*(N-k-1))

Because the total time will be the longer time between two machines. 
For example, if the scanner 1 takes 1 minute and the scanner 2 takes 2 minutes, the total time would be 2 minutes.

But why max(S1*(k+1), S2*(N-k-1)) ?

Since k is floored in that division operation, it can be possible that k+1 is the utilized output. 
For example, the ideal k is 3.6, computed k is then 3 while k should be 4 to utilize the time.

**************/

import java.util.Scanner;

class GFG {
	
	public static int minTime(Integer s1,Integer s2,Integer n) {
		
		// s1 * k = s2 * ( n - k);
		
		Integer k =(int) (s2 * n)/(s1 + s2);
		return Math.min(Math.max(s1*k,s2*(n-k)), Math.max(s1 * (k + 1), s2*(n-k -1)));
	}
	
	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		
		Integer t = sc.nextInt();
		
		while(t-- > 0) {
			
			Integer s1 = sc.nextInt();
			Integer s2 = sc.nextInt();
			
			Integer n = sc.nextInt();
			
			System.out.println(minTime(s1,s2,n));
		}
		
		sc.close();
	}

}
