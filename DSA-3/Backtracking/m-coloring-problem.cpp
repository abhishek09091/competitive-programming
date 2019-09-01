/*********

https://www.geeksforgeeks.org/m-coloring-problem-backtracking-5/

********/

#include<bits/stdc++.h>
using namespace std;
//Position this line where user code will be pasted.
 
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n,m,e;
    cin>>n>>m>>e;
    int i;
    bool graph[101][101];
    for(i=0;i<n;i++)
      {
        memset(graph[i],0,sizeof(graph[i]));
      }
    for(i=0;i<e;i++)
    {
      int a,b;
      cin>>a>>b;
      graph[a-1][b-1]=1;
      graph[b-1][a-1]=1;
    }
    graphColoring (graph, m,n);
  }
    return 0;
}


/*This is a function problem.You only need to complete the function given below*/
bool isSafe(int v,bool graph[101][101],int color[],int c,int V){
    
    for(int i=0; i<V; i++){
        
        if(graph[v][i] && c == color[i]){
            return false;   
        }
    }
    
    return true;
    
}

bool graphColoringUtil(bool graph[101][101],int m,int color[],int v,int V){
    
    if(v == V){
        return true;
    }
    
    for(int c=1; c<=m; c++){
        
        if(isSafe(v,graph,color,c,V)){
            color[v] = c;
            
            if(graphColoringUtil(graph,m,color,v+1,V)==true){
                return true;   
            }
            
            color[v] = 0;
        }
    }
    
    return false;
}

bool graphColoring(bool graph[101][101], int m,int V){
    // your code here
    int color[V] = {0};
    
    if(graphColoringUtil(graph,m,color,0,V) == false){
        cout<<"0"<<endl;
        return false;
    }else{
        cout<<"1"<<endl;
        return true;
    }
}