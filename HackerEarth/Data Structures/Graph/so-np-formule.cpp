/*

Question:

https://www.hackerearth.com/practice/algorithms/graphs/graph-representation/practice-problems/algorithm/so-np-c559f406/

Input :

4 3 2
1 2
2 3
1 3

Output:

1

*/

#include<bits/stdc++.h>
#define pb push_back
using namespace std;

void addEdge(vector<int> vec[],int source,int destination){
	
	vec[source].pb(destination);
	vec[destination].pb(source);
	
}

void BFSUtil(vector<bool> &visited ,vector<int> vec[],int i){
	
	list<int> queue;
	
	visited[i] = true;
	queue.pb(i);
	
	vector<int> :: iterator it;
	
	
	if(vec[i].size()==0){
		//cout<<"vec["<<i<<"].size(): "<<vec[i].size()<<endl;
		return;
	}
	
	while(!queue.empty()){
		
		i = queue.front();
		//cout<<i<<" ";
		queue.pop_front();
		
		for(it = vec[i].begin(); it!= vec[i].end(); it++){
			
			if(visited[*it] == false){
				queue.pb(*it);
				visited[*it] = true;
				
			}
		}
	}
	
}


int BFS(vector<int> vec[],int V){
	
	vector<bool> visited(V,false);
	
	int total_disconnected_components = 0;
	for(int i=0; i<V; i++){
		if(visited[i] == false){
			BFSUtil(visited,vec,i);
			total_disconnected_components++;
		}
	}
	return total_disconnected_components;
}

int main(){
	
	int n,m,k;
	
	cin>>n>>m>>k;
	vector<int> graph[n];
	for(int i=0; i<m; i++){
		int source,destination;
		cin>>source>>destination;
		addEdge(graph,source-1,destination-1);
	}
	
	int total_connected_components = BFS(graph,n);
	
	if(total_connected_components > k){
		cout<<-1<<endl;
	}else{
		int minimum_edges_required = n - k;
	
		cout<<(m - minimum_edges_required)<<endl;
	}
	return 0;
	
}