/*

Question URL:

https://www.hackerearth.com/practice/algorithms/graphs/graph-representation/practice-problems/algorithm/monk-in-the-real-estate/



*/


#include<bits/stdc++.h>
using namespace std;


int main(){
	
	int t;
	cin>>t;
	while(t--){
		
		int e;
		cin>>e;
		bool visited[10001];
		int source , destination;
		
		for(int i=0; i<10001; i++){
		    visited[i] = false;
		}
		for(int i=0; i<e; i++){
			cin>>source>>destination;
			visited[source-1] = true;
			visited[destination-1] = true;
		}
		
		int counter = 0;
		for(int i=0; i<10001; i++){
			if(visited[i] == true){
				counter++;
			}
		}
		
		cout<<counter<<endl;
	}
	
	
	return 0;
}