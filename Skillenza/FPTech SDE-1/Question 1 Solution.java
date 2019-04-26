import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.LinkedList;
import java.util.StringTokenizer;

class Pair{
	
	public int level;
	public int value;
	
	public Pair(int level,int value) {
		this.level = level;
		this.value = value;
	}
	
}

class Graph{
	
	
	private int V;
	private LinkedList<Integer> adj[];
	
	public Graph(int V) {
		// TODO Auto-generated constructor stub
		this.V = V;
		adj = new LinkedList[V];
		for(int i=0; i<V; i++) {
			adj[i] = new LinkedList<Integer>();
		}
	}
	
	void addEdge(int u,int v) {
		adj[u].add(v);
	}
	
	int BFS(int s) {
		
		boolean visited[] = new boolean[V];
		ArrayList<Pair> list = new ArrayList<Pair>();
		int level[] = new int[V];
		
		LinkedList<Integer> queue = new LinkedList<Integer>();
		
		visited[s] = true;
		level[s] = 0;
		queue.add(s);
		list.add(new Pair(0, s));
		
		while(queue.size() != 0) {
			
			s = queue.poll();
			
			Iterator<Integer> it = adj[s].listIterator();
			
			while(it.hasNext()) {
				int n = it.next();
				
				if(!visited[n]) {
					list.add(new Pair(level[s] + 1,n));
					level[n] = level[s] + 1;
					visited[n] = true;
					queue.add(n);
				}
			}
		}
		
		
		
		/*
		 * for(int i=0; i<list.size(); i++) {
		 * System.out.println("level: "+list.get(i).level+" value: "+list.get(i).value);
		 * }
		 */
		
		//Find the maxLevel
		int maxlevel = 0;
		for(int i=0; i<list.size(); i++) {
			if(maxlevel < list.get(i).level) {
				maxlevel = list.get(i).level;
			}
		}
		int minimumindex = Integer.MAX_VALUE;
		for(int i=0; i<list.size(); i++) {
			
			if( (maxlevel == list.get(i).level) && (minimumindex > list.get(i).value)) {
				minimumindex = list.get(i).value;
			}
		}
		
		return minimumindex + 1;
	}
}


public class Solution {
	
	
	static class FastReader 
    { 
        BufferedReader br; 
        StringTokenizer st; 
  
        public FastReader() 
        { 
            br = new BufferedReader(new
                     InputStreamReader(System.in)); 
        } 
  
        String next() 
        { 
            while (st == null || !st.hasMoreElements()) 
            { 
                try
                { 
                    st = new StringTokenizer(br.readLine()); 
                } 
                catch (IOException  e) 
                { 
                    e.printStackTrace(); 
                } 
            } 
            return st.nextToken(); 
        } 
  
        int nextInt() 
        { 
            return Integer.parseInt(next()); 
        } 
  
        long nextLong() 
        { 
            return Long.parseLong(next()); 
        } 
  
        double nextDouble() 
        { 
            return Double.parseDouble(next()); 
        } 
  
        String nextLine() 
        { 
            String str = ""; 
            try
            { 
                str = br.readLine(); 
            } 
            catch (IOException e) 
            { 
                e.printStackTrace(); 
            } 
            return str; 
        } 
    } 
	

	public static void main(String[] args) throws Exception {
		// TODO Auto-generated method stub
		
		FastReader sc =new FastReader();
		int t = sc.nextInt();
		
		while(t-- > 0) {
			int V = sc.nextInt();
			
			Graph graph = new Graph(V);
			
			for(int i=0; i<V-1; i++) {
				int u = sc.nextInt();
				int v = sc.nextInt();
				
				graph.addEdge(u-1, v-1);
			}
			
			int source = sc.nextInt();
			
			System.out.println(graph.BFS(source-1));
			
			
		}

	}

}
