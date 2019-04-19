/*

Question Link :

https://www.hackerearth.com/practice/algorithms/graphs/graph-representation/practice-problems/algorithm/monk-at-the-graph-factory/


Total Degree of the graph = 2E where E is edges in the graph;

(Summation of all degree) = 2E for the graph


if total edges is greater then or equal to number of vertices then it is graph

else it is a tree.

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int v;
	cin>>v;
	
	int total_degree = 0;
	for(int i=0; i<v; i++){
		int temp;
		cin>>temp;
		total_degree += temp;
	}
	
	int total_edges = total_degree / 2;
	
	if(total_edges >= v ){
		cout<<"No"<<endl;
	}else{
		cout<<"Yes"<<endl;
	}
	
	return 0;
}