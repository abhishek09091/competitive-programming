/***********

https://www.geeksforgeeks.org/detect-cycle-undirected-graph/

**********/
//Initial Template for Java
import java.util.*;
import java.io.*;
import java.lang.*;
class DriverClass
{
    public static void main (String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        
        while(t-- > 0)
        {
            ArrayList<ArrayList<Integer>> list = new ArrayList<>();
            int nov = sc.nextInt();
            int edg = sc.nextInt();
            
            for(int i = 0; i < nov+1; i++)
                list.add(i, new ArrayList<Integer>());
                
            for(int i = 1; i <= edg; i++)
            {
                int u = sc.nextInt();
                int v = sc.nextInt();
                list.get(u).add(v);
                list.get(v).add(u);
            }
            if(new DetectCycle().isCyclic(list, nov) == true)
                System.out.println("1");
            else System.out.println("0");
        }
    }
}

/*This is a function problem.You only need to complete the function given below*/
//User function Template for Java
/*
ArrayList<ArrayList<Integer>> list: represent graph containing 'V' number of
                                    vertices and edges between them
V: represent number of vertices
*/
class DetectCycle
{
    static boolean isCycleUtil(int u,boolean visited[],int parent,
                                ArrayList<ArrayList<Integer>> list){
        
        visited[u] =true;
        ArrayList<Integer> temp = list.get(u);
        for(int i=0; i<temp.size(); i++){
            
            if(!visited[temp.get(i)]){
                if(isCycleUtil(temp.get(i),visited,u,list)){
                    return true;
                }
            }else if(parent != temp.get(i)){
                return true;
            }
        }
        
        return false;
    }
    static boolean isCyclic(ArrayList<ArrayList<Integer>> list, int V){
       // add your code here
       
       boolean visited[] = new boolean[V];
       for(int i=0; i<V; i++){
           visited[i] = false;
       }
       
       for(int u=0; u<V; u++){
           
           if(!visited[u]){
               if(isCycleUtil(u,visited,-1,list)){
                return true;   
               }
           }
       }
       
       return false;
    }
}