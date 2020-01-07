/******

https://www.geeksforgeeks.org/program-to-find-number-of-squares-on-a-chessboard/

*****/

#include <iostream>
using namespace std;

int main() {
		//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    
	    long long int res = 1;
	    
	    res = n * ( n + 1) * (2*n + 1) / 6;
	    cout<<res<<endl;
	}
	return 0;
}