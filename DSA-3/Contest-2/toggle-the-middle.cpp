
/*****

https://www.geeksforgeeks.org/toggling-k-th-bit-number/

https://www.exploringbinary.com/number-of-bits-in-a-decimal-integer/

****/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--){
	    
	    int n;
	    cin>>n;
	    
	    if(n == 1){
	        cout<<"0"<<endl;
	    }else if(n == 0){
	        cout<<"1"<<endl;
	    }else{
	        int number_of_bits = floor(log(n)/log(2)) + 1;
	        
	        if(!(number_of_bits % 2)){
	            //shift the middle and middle -1 bit
	            int middle = number_of_bits/2;
	            int beforeMiddle = middle - 1;
	            
	            n = (n ^ (1 << (middle)));
	            n = (n ^ (1 << (beforeMiddle)));
	            
	            cout<<n<<endl;
	        }else{
	            //shift the middle bit only
	            int middle = number_of_bits/2;
	            n = (n ^ (1 << (middle)));
	            cout<<n<<endl;
	        }
	    }
	}
	return 0;
}