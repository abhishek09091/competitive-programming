/**********

https://www.geeksforgeeks.org/form-minimum-number-from-given-sequence/

*********/

#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    string str;
	    cin>>str;
	    int n = str.length();
	    string result(n + 1, ' ');
	    int count = 1;
	    
	    for(int i=0; i<=n; i++){
	        
	        if(i == n || str[i] == 'I'){
	            
	            for(int j = i - 1; j>= -1; j--){
	                
	                result[j + 1] = '0' + count++;
	                if(j>=0 && str[j] == 'I'){
	                    break;
	                }
	            }
	        }
	    }
	    
	    cout<<result<<endl;
	}
	return 0;
}