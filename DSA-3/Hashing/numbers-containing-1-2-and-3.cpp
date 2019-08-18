#include <bits/stdc++.h>
using namespace std;

bool checkOneTwoThree(int num){
    
    while(num > 0){
        int rem = num % 10;
        num /= 10;
        if(rem != 1 || rem != 2 || rem != 3){
            return false;
        }
    }
    
    return true;
}

int main() {
	//code
	int t;
	cin>>t;
	
	while(t--){
	    
	    int n,temp;
	    cin>>n;
	    vector<int> vec;
	    
	    for(int i=0; i<n; i++){
	        
	        cin>>temp;
	        if(checkOneTwoThree(temp)){
	            vec.push_back(temp);
	        }
	    }
	    
	    sort(vec.begin(),vec.end());
	    
	    for(int i=0; i<vec.size(); i++){
	        cout<<vec[i]<<" ";
	    }
	    
	    cout<<endl;
	}
	return 0;
}