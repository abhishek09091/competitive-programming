/********

https://www.geeksforgeeks.org/count-possible-paths-top-left-bottom-right-nxm-matrix/
https://www.tutorialspoint.com/execute_python3_online.php
https://www.geeksforgeeks.org/maths-behind-number-of-paths-in-matrix-problem/
https://www.youtube.com/watch?v=M8BYckxI8_U

*******/

#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n,m;
	    cin>>n>>m;
	    
	    int path = 1;
	    
	    for(int i=m; i< (m+n-1); i++){
	        
	        path *= i;
	        path /= (i - m + 1);
	    }
	    
	    cout<<path<<endl;
	}
	return 0;
}