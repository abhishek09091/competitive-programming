/*

https://www.hackerearth.com/practice/algorithms/graphs/graph-representation/practice-problems/approximate/the-graph-permutation-be0db3d3/description/

*/


#include<bits/stdc++.h>
using namespace std;

#define pb push_back

int main(){
	
	int n,m;
	cin>>n>>m;
	
	int u,v;
	while(m--){
		cin>>u>>v;
	}
	
	int k;
	cin>>k;
	
	while(k--){
		cin>>u>>v;
	}
	
	vector<int> vec;
	
	for(int i=1; i<=n; i++){
		vec.pb(i);
	}
	
	random_shuffle(vec.begin(),vec.end());
	
	for(int i=0; i<n; i++){
		if(i!=0){
			cout<<" ";
		}
		
		cout<<vec[i];
	}
	return 0;
}