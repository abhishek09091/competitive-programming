/***********

https://www.geeksforgeeks.org/convex-hull-set-1-jarviss-algorithm-or-wrapping/
https://www.geeksforgeeks.org/how-to-remove-duplicates-from-arraylist-in-java/
https://www.geeksforgeeks.org/convex-hull-set-2-graham-scan/


Follow up reading:
https://www.geeksforgeeks.org/orientation-3-ordered-points/
https://www.geeksforgeeks.org/check-if-two-given-line-segments-intersect/

***********/

/**
* 
* Given a set of points in the plane. 
* The convex hull of the set is the smallest convex polygon that contains all the points of it
*
* @author Abhishek Tripathi
* @date 20-Sep-2019
* @reference https://www.geeksforgeeks.org/convex-hull-set-1-jarviss-algorithm-or-wrapping/
* @reference https://www.geeksforgeeks.org/convex-hull-set-2-graham-scan/
* @Wiki https://en.wikipedia.org/wiki/Gift_wrapping_algorithm
* 
*/

import java.util.*;
import java.lang.*;
import java.io.*;
 
class JarvisAlgorithm {
 
    static class Point{
 
        public int x;
        public int y;
 
        public Point(int x,int y){
            this.x = x;
            this.y = y;
        }
    }
 
    public static int orientation(Point p, Point i, Point q){
 
        int value = (i.y - p.y) * (q.x - i.x) -
                    (i.x - p.x) * (q.y - i.y);
 
 
        if(value == 0) return 0;
 
        return (value > 0) ? 1 : 2;
    }
 
    public static void printList(List<Point> res){
        if(res.size() < 3){
		        System.out.print("-1");
		    }else{
 
		        for(int i=0; i<res.size(); i++){
 
		            if(i == res.size() - 1 ){
		                System.out.print(res.get(i).x +" "+res.get(i).y);
		            }else{
		                System.out.print(res.get(i).x +" "+res.get(i).y+", ");
		            }
 
		        }
		    }
		    System.out.println();
    }
 
    public static List<Point> removeDuplicates(List<Point> list){
 
    	if(list.size() < 3) {
    		return new ArrayList<>();
    	}
    	List<Point> res = new ArrayList<>();
    	res.add(list.get(0));
    	for(int i=1; i<list.size(); i++) {
 
    		Point old = list.get(i);
    		Point updated = res.get(res.size() - 1);
 
    		if(old.x == updated.x && old.y == updated.y){
    			continue;
    		}else {
    			res.add(old);
    		}
 
    	}
 
    	return res;
    }
 
    public static List<Point> convexHull(List<Point> list){
 
        List<Point> res = new ArrayList<>();
        //printList(list);
        if(list.size() < 3 ){
            return res;
        }
 
        int l = 0;
        for(int i=1; i<list.size(); i++){
 
            if(list.get(i).x < list.get(l).x){
                l = i;
            }
        }
 
        int p = l , q;
 
        do{
            res.add(list.get(p));
 
            q = (p + 1) % list.size();
 
            for(int i=0; i<list.size(); i++){
 
                if(orientation(list.get(p),list.get(i),list.get(q)) == 2){
                    q = i;
                }
            }
 
            p = q;
 
        }while(p != l);
 
 
        return res;
    }
	public static void main (String[] args) {
		//code
		Scanner sc = new Scanner(System.in);
 
		Integer t = sc.nextInt();
 
		while(t-- > 0){
 
		    Integer n = sc.nextInt();
 
		    List<Point> list = new ArrayList<>();
 
		    for(int i=0; i<n; i++){
		        Integer x = sc.nextInt();
		        Integer y = sc.nextInt();
		        Point p = new Point(x,y);
		        list.add(p);
		    }
		    List<Point> res = convexHull(list);
		    Collections.sort(res, new Comparator() {
				@Override
				public int compare(Object arg0, Object arg1) {
					Integer x1 = ((Point)arg0).x;
					Integer x2 = ((Point)arg1).x;
					int temp = x1.compareTo(x2);
 
					if(temp != 0) {
						return temp;
					}
					Integer y1 = ((Point)arg0).y;
					Integer y2 = ((Point)arg1).y;
 
					return y1.compareTo(y2);
				}});
		    List<Point> unique = removeDuplicates(res);
		    printList(unique);
 
		}
 
		sc.close();
	}
}