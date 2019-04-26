#include<bits/stdc++.h>
#define pb push_back
using namespace std;

void addEdge(vector<int> edges[],int u,int v){
	edges[u].pb(v);
	edges[v].pb(u);
}

int BFS(vector<int> edges[],int u,int v,int n){
		
	vector<bool> visited(n,false);
	
	vector<int> distance(n,0);
	
	queue<int> Q;
	distance[u] = 0;
	
	Q.push(u);
	visited[u] = true;
	
	while(!Q.empty()){
		
		int x = Q.front();
		Q.pop();
		
		for(int i=0; i<edges[x].size(); i++){
			
			if(visited[edges[x][i]]){
				continue;
			}
			
			distance[edges[x][i]] = distance[x] + 1;
			Q.push(edges[x][i]);
			visited[edges[x][i]] = true;
		}
	}
	
	return distance[v];
}

int main(){
	
	int n,q;
	cin>>n>>q;
	
	for(int i=0; i<n; i++){
		int temp;
		cin>>temp;
	}
	
	vector<int> edges[n];
	for(int i=0; i<n-1; i++){
		int u,v;
		cin>>u>>v;
		addEdge(edges,u-1,v-1);
	}
	
	for(int i=0; i<q; i++){
		int u,v;
		cin>>u>>v;
		
		int result = BFS(edges,u-1,v-1,n);
		
		if(result%2 == 0){
			cout<<"Bob"<<endl;
		}else{
			cout<<"Alex"<<endl;
		}
		
	}
	
	
	
	return 0;
}