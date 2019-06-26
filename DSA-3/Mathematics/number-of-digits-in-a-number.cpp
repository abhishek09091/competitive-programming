#include<bits/stdc++.h>

using namespace std;


/**

Better Solution: A better solution is to use mathematics to solve this problem. 
The number of digits in a number say N can be easily obtained by using the formula:
number of digits in N = log10(N) + 1.

Derivation: Suppose the number of digits in the number N is K.

Therefore, we can say that:
10^K-1 <= N < 10^K

Applying base-10 logarithm to both sides in the above equation, we get:
K-1 <= log10(N) < K.

or, K - 1 + 1 <= log10(N) + 1 < K + 1
or, K <= log10(N) + 1 < K + 1 

Therefore, 
K = floor(log10(N) + 1)

Analysis of above algorithm: Since the above algorithm works in a single operation by using two mathematical operations,
finding logarithmic and floor value. Therefore, the time complexity of the solution is O(1).

https://stackoverflow.com/questions/25892665/performance-of-log10-function-returning-an-int

**/

int number_of_digits(int num){
	
	int count = 0;
	
	while(num > 0){
		count++;
		num /= 10;
		
	}
	
	return count;
}

int number_of_digits_order_one(int num){
	
	return floor(log10(num) + 1);
}

int main(){

	int t;
	cin>>t;
	
	while(t--){
		int n;
		cin>>n;
		cout<<number_of_digits(n)<<endl;
		cout<<number_of_digits_order_one(n)<<endl;
	}
	return 0;

}