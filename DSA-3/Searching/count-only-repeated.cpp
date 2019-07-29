/******

https://www.geeksforgeeks.org/count-of-only-repeated-element-in-a-sorted-array-of-consecutive-elements/

********/

#include <bits/stdc++.h>
using namespace std;

void countRepeated(vector<int> vec){
    
    int start = 0;
    int end = vec.size() - 1;
    
    while(start < end){
        
        int mid = start + ((end - start)/2);
        
        if(vec[mid] >= mid + vec[0]){
            start = mid + 1;
        }else{
            end = mid;
        }
    }
    
    cout<<vec[start]<<" "<<( vec.size() - (vec[ vec.size() - 1 ] - vec[0]))<<endl;
    return;
}

int main() {
	//code
	int t;
	cin>>t;
	
	while(t--){
	    int n;
	    cin>>n;
	    vector<int> vec;
	    int temp;
	    for(int i=0; i<n; i++){
	        cin>>temp;
	        vec.push_back(temp);
	    }
	    
	    countRepeated(vec);
	}
	return 0;
}