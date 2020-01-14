package trees;

import java.util.*;
import java.lang.Integer;
import java.util.HashMap;
	// A Binary Tree node


class GFG1{
	    // driver function to test the above functions
	    public static void main(String args[]){
			
	        // Input the number of test cases you want to run
	        Scanner sc = new Scanner(System.in);
	        int t = sc.nextInt();
			//Node root=null;
			
			for(int i=0;i<2000;i++);
	        while (t > 0)
	        {
	            HashMap<Integer, Node> m = new HashMap<Integer, Node> ();
	            int n = sc.nextInt();
	            Node root=null;
	            while (n > 0)
	            {
	                int n1 = sc.nextInt();
	                int n2 = sc.nextInt();
	                char lr = sc.next().charAt(0);
	                //  cout << n1 << " " << n2 << " " << (char)lr << endl;
	                Node parent = m.get(n1);
	                if (parent == null)
	                {
	                    parent = new Node(n1);
	                    m.put(n1, parent);
	                    if (root == null)
	                        root = parent;
	                }
	                Node child = new Node(n2);
	                if (lr == 'L')
	                    parent.left = child;
	                else
	                    parent.right = child;
	                m.put(n2, child);
	                n--;
	            }
			
	            GfG_1 g = new GfG_1();
				boolean b = g.isSumTree(root);
				if(b==true)
					System.out.println(1);
				else
					System.out.println(0);
	            t--;
				
	        }
	    }
	}
	


class GfG_1{
	
	public static boolean isLeaf(Node node) {
		
		if(node.left == null && node.right == null) {
			return true;
		}
		
		return false;
	}
    
	boolean isSumTree(Node node){
        // Your code here
        
		int rs , ls;
		
		if(node == null || isLeaf(node)) {
			return true;
		}
		
		if(isSumTree(node.left) && isSumTree(node.right)) {
			
			if(node.left == null) {
				ls = 0;
			}else if(isLeaf(node.left)) {
				ls = node.left.data;
			}else {
				ls = 2* (node.left.data);
			}
			
			if(node.right == null) {
				rs = 0;
			}else if(isLeaf(node.right)) {
				rs = node.right.data;
			}else {
				rs = 2* (node.right.data);
			}
			
			return (node.data == (rs + ls));
		}
		
		
		
		return false;
	}
}