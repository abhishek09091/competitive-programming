/*package whatever //do not write package name here */
/***********

https://www.geeksforgeeks.org/stock-buy-sell/

***********/
import java.util.ArrayList;
import java.util.Scanner;

class Interval{
	
	public int buy;
	public int sell;
}

class GFG {
	
	public static void buyOrSell(int arr[],int n) {
		
		if(n == 1) {
			System.out.println("No Profit");
		}else {
			
			int count = 0;
			
			ArrayList<Interval> list = new ArrayList<Interval>();
			
			int i = 0;
			while( i < n -1) {
				
				while((i < n - 1) && (arr[i+1] <= arr[i])) {
					i++;
				}
				
				if(i == n-1) {
					break;
				}
				
				Interval inter = new Interval();
				inter.buy = i++;
				
				while((i < n ) && ( arr[i] >= arr[i-1])) {
					i++;
				}
				
				inter.sell = i- 1;
				list.add(inter);
				count++;
			}
			
			if(count == 0) {
				System.out.println("No Profit");
			}else {
				for(int j=0; j<list.size(); j++){
	                   System.out.print("("+list.get(j).buy+" "+list.get(j).sell+") ");
	               }
	                System.out.println();
			}
		}
	}
	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		
		Integer t = sc.nextInt();
		
		while(t-- > 0) {
			
			Integer n = sc.nextInt();
			
			int arr[]= new int[n];
			for(int i=0; i<n; i++) {
				arr[i] = sc.nextInt();
			}
			
			buyOrSell(arr,n);
		}
		
		sc.close();
	}

}
