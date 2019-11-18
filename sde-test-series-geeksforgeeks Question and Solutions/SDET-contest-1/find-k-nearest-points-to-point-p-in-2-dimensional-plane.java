/*********
 * 
 * 
 * Given a point P in a 2-dimensional plane, a number K, and N points. 
 * You need to find K nearest points to the given Point P.
 * Note: The K nearest points will be unique.
 * 
 * 
 * Input Format:
 * The first line of input consists number of the test cases. 
 * The description of T test cases is as follows: The first line of each test case contains 
 * the total number of points in 2D space N and point P (Pi,Pj) and K, and the next N 
 * consecutive lines denotes all the points in 2D space.
 * 
 * Input:
 * 2
 * 5 0 0 3
 * -2 -1
 * 0 0 
 * 1 4 
 * -1 0
 * 1 1
 * 4 0 1 2
 * -2 1
 * 1 2
 * 3 6
 * 9 2
 *
 * Output:
 * -1 0
 * 0 0 
 * 1 1
 * -2 1
 * 1 2
 * 
 * 
 * 
 * **********/
	//Initial Template for Java
	import java.util.*;
	import java.io.*;
	import java.lang.*;
	class pair
	{
	    
	    int first;
	    int second;
	    pair(int f, int s)
	    {
	        this.first = f;
	        this.second = s;
	    }
	}
	class Driver_class{
		
	    public static void main(String args[])throws IOException{
	        BufferedReader read = new BufferedReader(new InputStreamReader(System.in));
	        int t = Integer.parseInt(read.readLine());
	        
	        while(t-- > 0){
	            String str[]= read.readLine().trim().split(" ");
	            int n = Integer.parseInt(str[0]);
	            pair P = new pair(Integer.parseInt(str[1]), Integer.parseInt(str[2]));
	            int K = Integer.parseInt(str[3]);
	            ArrayList<pair> points = new ArrayList<>();
	            
	            int x = 0, y = 0;
	            for(int i = 0; i < n; i++){
	                str = read.readLine().trim().split(" ");
	                x = Integer.parseInt(str[0]);
	                y = Integer.parseInt(str[1]);
	                points.add(new pair(x, y));
	            }    
	             Neighbours obj = new Neighbours();
	                ArrayList<pair> kClosest = obj.kNeighbourPoints(points, P, K);
	                Collections.sort(kClosest, new Comparator<pair>(){
	                    
	                    @Override
	                    public int compare(pair p1, pair p2)
	                    {
	                        if(p1.first < p2.first) {
	                            return -1;
	                        } else if(p1.first > p2.first) {
	                            return 1;
	                        } else {
	                            return p1.second < p2.second?-1:1;
	                        }
	                    }
	                });
	            for(int i = 0; i < K; i++)
	            System.out.println(kClosest.get(i).first + " " + kClosest.get(i).second);
	            
	        }
	        
	        
	        
	    }
	}
	
	/*This is a function problem.You only need to complete the function given below*/
	//User function Template for Java
	/**
	 * Params: 
	 * ArrayList<pair> points : All the points present in 2D space.
	 * P : The source point from which K nearest neighbours need to be find in 2D plane.
	 * K : Number of closest neighbours to be found. 
	 * 
	 * Return Type:
	 * static ArrayList<pair>  : K Closest neighbours
	 **/
	
	class Combined{
		
		public double distance;
		public pair inc;
		public Combined(double distance,pair inc) {
			this.distance = distance;
			this.inc = inc;
		}
	}
	
	class CombinedComparator implements Comparator<Combined>{   

		@Override
		public int compare(Combined arg0, Combined arg1) {
			// TODO Auto-generated method stub
			if (arg0.distance < arg1.distance) 
                return 1; 
            else if (arg0.distance > arg1.distance) 
                return -1; 
                            return 0; 
		} 
    } 
	 
	class Neighbours{
	    public static ArrayList<pair> kNeighbourPoints(ArrayList<pair> points, pair P, int K){
	        ArrayList<pair> ans = new ArrayList<>();
	        PriorityQueue<Combined> pq = new PriorityQueue<Combined>(K, new CombinedComparator());
	        
	        for(int i=0; i<K; i++) {
	        	double res = Math.sqrt(((P.first - points.get(i).first ) * (P.first - points.get(i).first )) + ((P.second - points.get(i).second ) * (P.second - points.get(i).second)));
	        	pq.add(new Combined(res,new pair(points.get(i).first, points.get(i).second)));
	        }
	        for(int i=K; i<points.size(); i++) {
	        	double res = Math.sqrt(((P.first - points.get(i).first ) * (P.first - points.get(i).first )) + ((P.second - points.get(i).second ) * (P.second - points.get(i).second)));
	        	Combined temp = pq.poll();
	        	if(temp.distance > res) {
	        		pq.add(new Combined(res,new pair(points.get(i).first, points.get(i).second)));
	        	}else {
	        		pq.add(new Combined(temp.distance,new pair(temp.inc.first,temp.inc.second)));
	        	}
	        }
	        
	        Iterator<Combined> itr =  pq.iterator();
	        
	        while(itr.hasNext()) {
	        	Combined temp = itr.next();
	        	ans.add(new pair(temp.inc.first,temp.inc.second));
	        }
	        return ans;
	    }
	}
