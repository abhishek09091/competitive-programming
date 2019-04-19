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

int extraEdges(int nodes,int edges){
	
	if(edges >= nodes){
		return edges - (nodes - 1);
	}else{
		return 0;
	}
}

int BFSUtil(vector<bool> &visited,vector<int> vec[],int i){
	
	int total_nodes = 1;
	int total_edges = 0;
	
	list<int> queue;
	vector<int> node_number;
	visited[i] = true;
	queue.pb(i);
	node_number.pb(i);
	
	
	//check for the isolated node
	if(vec[i].size() == 0){
		cout<<"Total Number of Nodes and Edges in each connected component"<<endl;
		cout<<"Total number of Nodes: "<<total_nodes<<endl;
		cout<<"Total number of Edges: "<<total_edges<<endl;
		return 0;
	}
	
	vector<int> ::iterator it;
	
	while(!queue.empty()){
		
		i = queue.front();
		queue.pop_front();
		
		for(it = vec[i].begin(); it!=vec[i].end(); it++){
			
			if(visited[*it] == false){
				total_nodes++;
				queue.pb(*it);
				node_number.pb(*it);
				visited[*it] = true;
			}
		}
	}
	cout<<"Total Number of Nodes and Edges in each connected component"<<endl;
	cout<<"Total number of Nodes: "<<total_nodes<<endl;
	
	
	
	for(int i=0; i<node_number.size(); i++){
		total_edges += vec[node_number[i]].size();
	}
	
	cout<<"Total number of Edges: "<<total_edges<<endl;
	total_edges /= 2;
	
	//Logic for couting the number of extra edges in each components
	return extraEdges(total_nodes,total_edges);
	
}

void BFS(vector<int> vec[],int total_components,int V){
	
	vector<bool> visited(V, false);
	
	int result = 0;
	
	for(int i=0; i<V; i++){
		
		if(visited[i] == false){
			result += BFSUtil(visited,vec,i);
		}
	}
	
	cout<<result<<endl;
}

int main(){
	
	int n,m,total_components;
	
	cin>>n>>m>>total_components;
	
	vector<int> graph[n];
	for(int i=0; i<m; i++){
		int source,destination;
		cin>>source>>destination;
		addEdge(graph,source-1,destination-1);
	}
	
	BFS(graph,total_components,n);
	
	return 0;
}