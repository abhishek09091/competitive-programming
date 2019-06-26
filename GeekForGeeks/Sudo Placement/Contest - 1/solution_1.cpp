#include <iostream>
using namespace std;

int function(int n){
    
    if(n == 0){
        return 1;
    }
    
    return function(n - 1) - n ;
}
int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int res = function(n);
	    
	    cout<<res + n <<endl;
	}
	return 0;
}