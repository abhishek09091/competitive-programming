#include<bits/stdc++.h>
using namespace std;

class Pair{
	
	public:
	int level;
	int value;
	
	public:
	
	Pair(){
		
	}
	
	Pair(int level,int value) {
		level = level;
		value = value;
	}
	
	int returnLevel(){
		return level;
	}
	
	int returnValue(){
		return value;
	}
	
};


void addEdge(list<int> adj[], int u, int v) { 
    adj[u].push_back(v); 
} 

int BFS(int s,list<int> adj[],int V) {
		
		vector<bool> visited(V,false);
		vector<Pair> listPair; 
		int level[V];
		list<int> queue;
		
		visited[s] = true;
		level[s] = 0;
		queue.push_back(s);
		Pair pair;
		pair.level = 0;
		pair.value = s;
		listPair.push_back(pair);
		
		list<int>::iterator i;		
		while(!queue.empty()) {
			
			s = queue.front();
			queue.pop_front();
			for (i = adj[s].begin(); i != adj[s].end(); ++i) { 
				int n = *i;
				Pair temp;
				if (!visited[n]) {
					temp.level = level[s] + 1;
					temp.value = n;
					listPair.push_back(temp);
					level[n] = level[s] + 1;
					visited[n] = true; 
					queue.push_back(n); 
				} 
			} 
			
		}
		
		
		
		
		
		
		//Find the maxLevel
		int maxlevel = 0;
		for(int j=0; j<listPair.size(); j++) {
			if(maxlevel < listPair[j].level) {
				maxlevel = listPair[j].level;
			}
		}
		
		int minimumindex = INT_MAX;
		for(int j=0; j<listPair.size(); j++) {
			
			if( (maxlevel == listPair[j].level) && (minimumindex > listPair[j].value)) {
				minimumindex = listPair[j].value;
			}
		}
		
		return minimumindex + 1;
}

int main(){
    ios_base::sync_with_stdio(false);
	
	int t ;
	cin>>t;
	
	while(t--){
		
		int V;
		cin>>V;
		list<int> adj[V];
		for(int i=0; i<V-1; i++){
			int u ,v;
			cin>>u>>v;
			addEdge(adj,u-1, v-1);
		}
		
		int source;
		cin>>source;
		cout<<BFS(source-1,adj,V)<<endl;
		
	}
	return 0;
}