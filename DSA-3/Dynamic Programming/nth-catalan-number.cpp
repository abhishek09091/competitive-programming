/******

https://www.geeksforgeeks.org/program-nth-catalan-number/
https://www.geeksforgeeks.org/factorial-large-number-using-boost-multiprecision-library/
https://www.geeksforgeeks.org/space-and-time-efficient-binomial-coefficient/

*****/
#include <bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp> 
using boost::multiprecision::cpp_int;
using namespace std;
cpp_int catalanDP(int n,int k) { 
    k = min(n-k, k);
    cpp_int res = 1;
    for(int i=0; i<k; i++){
        res *= n - i;
        res /= i + 1;
    }
    return res;
}

cpp_int catalan(int n){
    return catalanDP(n << 1, n) / (n + 1);
}

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    
	    int n;
	    cin>>n;
	    cout<<catalan(n)<<endl;
	    
	}
	return 0;
}