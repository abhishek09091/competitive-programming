package weekly13Oct2019;

/***********
 * 
 * Question Link: https://leetcode.com/problems/maximum-equal-frequency
 * 
 * 	We need to count the frequency of numbers in A
 *	Also we need to know, for each frequency, we have how many different numbers.
 *  count[a] means the frequency of number a
 *  freq[c] means how many numbers that occur c times.
 *  
 *   There are three cases which satify the condition:
 *
 *    1. all elements appear exact once.
 *    2. all elements appear max_F times, except one appears once.
 *    3. all elements appear max_F-1 times, except one appears max_F.
 *
 *
 * Explanation:
 *  Iterate the input array A and we count the n first numbers.
 *
 * There actually only 2 situation to discuss:
 *
 * 1. we delete the current number a.
 *    In this case, the n - 1 first numbers have the same frequency,
 *    and we can easier detect this case when we iterate the previous number A[n - 1]
 *
 * 2. we don't delete the current number a
 *    the current a occurs c times.
 *    So except all numbers that also occurs c times,
 *    it should leave one single number, or c + 1 same number.
 * 
 * Time O(N)
 * Space O(K), where K = set(A).length
 * 
 * ***********/

import java.util.Scanner;

public class Solution4 {
	
	private void printArray(int arr[]) {
		
		for(int i=0; i<arr.length; i++) {
			System.out.print(arr[i]+" ");
		}
		
		System.out.println();
	}
	
	 public int maxEqualFreq(int[] nums) {
		 
		 int count[] = new int[500001];
		 int freq[] = new int[500001];
		 
		 int res = 0;
		 int a,c,d;
		 
		 for(int n=1; n<=nums.length; n++) {
			 
			 System.out.println(" **********************Start of the Iteration********************** ");
			 
			 a = nums[n-1];
			 --freq[count[a]];
			 c = ++count[a];
			 ++freq[count[a]];
			 
			 if(freq[c] * c == n && n < nums.length) {
				 res = n + 1;
			 }
			 
			 d = n - freq[c] * c;
			 
			 if((d == 1 || d == c+1) && freq[d] == 1) {
				 res = n;
			 }
			 
			 System.out.println("Values of n: "+ n +" a: "+ a +" c: "+ c + " d: " + d+" res: "+res);
			 
			 System.out.println("Printing the count array: ");
			 printArray(count);
			 
			 System.out.println("Printing the frequency array: ");
			 printArray(freq);
			 
			 System.out.println(" **********************End of the Iteration********************** ");
			 
		 }
		 
		 return res;
		 
	 }
	 
	 public static void main(String[] args) {
		
		 Scanner sc = new Scanner(System.in);
		 
		 Integer n = sc.nextInt();
		 
		 int arr[] = new int[n];
		 
		 for(int i=0; i<n; i++) {
			 arr[i] = sc.nextInt();
		 }
		 Solution4 sol = new Solution4();
		 System.out.println(sol.maxEqualFreq(arr));
		 sc.close();
	}

}
