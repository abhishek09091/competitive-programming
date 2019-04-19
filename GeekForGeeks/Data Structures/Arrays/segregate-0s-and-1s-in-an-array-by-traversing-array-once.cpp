/**

https://www.geeksforgeeks.org/segregate-0s-and-1s-in-an-array-by-traversing-array-once/

Input:

6

5
1 0 1 0 1

5
0 0 0 0 0

5
1 1 1 1 1

1
0

1
1

5
1 1 1 0 0

Output:

0 0 1 1 1 
0 0 0 0 0 
1 1 1 1 1 
0 
1 
0 0 1 1 1 

**/

#include<bits/stdc++.h>
#define pb push_back
using namespace std;

int main(){
	
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int> vec;
		for(int i=0; i<n; i++){
			int temp;
			cin>>temp;
			vec.pb(temp);
		}
		
		int type0 = 0;
		int type1 = n-1;
		
		while(type0 < type1){
			
			if(vec[type0] == 1){
				swap(vec[type0],vec[type1]);
				type1--;
			}else{
				type0++;
			}
		}
			
			
		for(int i=0; i<n; i++){
			cout<<vec[i]<<" ";
		}
		cout<<endl;
	}

	return 0;
}