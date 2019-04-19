/**

Breadth First Search or BFS for a Graph (implementation using BFS)


Test Case :

Input :

1
6
8
0 1
0 2
1 3
3 4
3 5
4 5
2 4
1 4

Output :(One of the output starting from source 2)

2 0 4 1 3 5

**/


#include<bits/stdc++.h>
#define pb push_back
using namespace std;

class Graph{
	
	int V;
	
	list<int> *adj;
	
	public:
	
	Graph(int V);
	
	void addEdge(int v,int w);
	
	void BFSGraph(int s);
};

Graph::Graph(int V){
	this->V = V;
	adj = new list<int>[V];
}


void Graph::addEdge(int v,int w){
	adj[v].pb(w);
}

void Graph::BFSGraph(int s){
	
	bool *visited = new bool[V];
	
	for(int i=0; i<V; i++){
		visited[i] = false;
	}
	
	list<int> queue;
	
	visited[s] = true;
	queue.pb(s);
	
	list<int>::iterator i;
	
	while(!queue.empty()){
		
		s = queue.front();
		
		cout<<s<<" ";
		queue.pop_front();
		
		for(i = adj[s].begin(); i!=adj[s].end(); i++){
			
			if(!visited[*i]){
				visited[*i] = true;
				queue.pb(*i);
			}
		}
	}
}

int main(){
	
	int t;
	cin>>t;
	
	while(t--){
		int v;
		cin>>v;
		
		Graph graph(v);
		
		int e;
		cin>>e;
		for(int i=0; i<e; i++){
			
			int source,destination;
			cin>>source>>destination;
			graph.addEdge(source,destination);
			graph.addEdge(destination,source);
			
		}
		
		graph.BFSGraph(2);
	}

	return 0;
}