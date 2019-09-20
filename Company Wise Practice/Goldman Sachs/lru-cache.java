
import java.util.Scanner;
import java.util.*;
class LRU_Cache
{
	public static void main(String args[])
	{
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		while(t>0)
		{
			Set<Integer> s = new HashSet<Integer>() ;
				int n = sc.nextInt();
				LRUCache g = new LRUCache(n);
			int q = sc.nextInt();
			
			while(q>0)
			{
			
				String c = sc.next();
			//	System.out.println(c);
				if(c.equals("GET"))
				{
					int x = sc.nextInt();
					System.out.print(g.get(x)+" ");
				}
				if(c.equals("SET"))
				{
					int x = sc.nextInt();
					int y  = sc.nextInt();
					g.set(x,y);
				}
			
			q--;
			//System.out.println();
			}
		t--;
		System.out.println();
		}
	}
}


/*This is a function problem.You only need to complete the function given below*/
/*You are required to complete below class */
class LRUCache {
 
   Map<Integer,Integer> map;
    int capacity;
    Queue<Integer> q;
    
    /*Inititalize an LRU cache with size N */
    public LRUCache(int N) {
       //Your code here
       capacity = N;
       map = new HashMap<>(N);
       q = new LinkedList<>();
       
    }
    
    /*Returns the value of the key x if 
     present else returns -1 */
    public int get(int x) {
       //Your code here
       if(map.containsKey(x)){
           q.remove(new Integer(x));
           q.add(x);
           return map.get(x);
       }
        
        return -1;
       
    }
    
    /*Sets the key x with value y in the LRU cache */
    public void set(int x, int y) {
       //Your code here
       if(!q.contains(x)){
           
           if(q.size() == capacity){
               int oldest = q.poll();
               map.remove(oldest);
           }
       }else{
           q.remove(new Integer(x));
       }
       
       q.add(x);
       map.put(x,y);
    }
}
