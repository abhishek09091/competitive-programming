#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    long long int n;
	    cin>>n;
	    
	    if(n == 1){
	        cout<<"1"<<endl;
	    }else if( n == 2){
	        cout<<"1"<<" "<<"1"<<endl;
	    }else{
	        long long int num1 = 1;
	        long long int num2 = 1;
	        
	        cout<<num1<<" "<<num2<<" ";
	        for(long long int i=3; i<=n; i++){
	            long long int temp = num1 + num2;
	            num1 = num2;
	            num2 = temp;
	            cout<<temp<<" ";
	        }
	        cout<<endl;
	    }
	}
	return 0;
}