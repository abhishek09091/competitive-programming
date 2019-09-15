/***********

https://www.geeksforgeeks.org/find-excel-column-name-given-number/

*********/

#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<char> vec;
	    
	    while(n > 0){
	        
	        int rem = n % 26;
	        if(rem == 0){
	            vec.push_back('Z');
	            n = (n/26) - 1;
	        }else{
	            char temp = (rem - 1) + 'A';
	            vec.push_back(temp);
	            n /= 26;
	        }
	    }
	    
	    reverse(vec.begin(),vec.end());
	    
	    for(int i=0; i<vec.size(); i++){
	        cout<<vec[i];
	    }
	    
	    cout<<endl;
	}
	return 0;
}