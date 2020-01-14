package graphs;

/***********
 * 
 * 
 * https://www.geeksforgeeks.org/detect-cycle-in-a-graph/
 * 
 * **********/
import java.util.*;
import java.io.*;
import java.lang.*;
class DriverClass{
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
            }
            if(new DetectCycle().isCyclic(list, nov) == true)
                System.out.println("1");
            else System.out.println("0");
        }
    }
}

class DetectCycle{
	
	
	public static List<ArrayList<Integer>> temp;
	
	static boolean isCyclicUtil(int i,boolean visited[],boolean recStack[]) {
		
		if(recStack[i]) {
			return true;
		}
		
		if(visited[i]) {
			return false;
		}
		
		visited[i] = true;
		recStack[i] = true;
		
		ArrayList<Integer> list = temp.get(i);
		
		for (Integer node : list) {
			
			if(isCyclicUtil(node,visited,recStack)) {
				return true;
			}
		}
		
		recStack[i] = false;
		
		return false;
	}
	static boolean isCyclic(ArrayList<ArrayList<Integer>> list, int V){
		temp = list;
		boolean visited[] = new boolean[V];
		boolean recStack[] = new boolean[V];
		
		for(int i=0; i<V; i++) {
			
			if(isCyclicUtil(i,visited,recStack)) {
				return true;
			}
		}
		
		return false;
	}
}
