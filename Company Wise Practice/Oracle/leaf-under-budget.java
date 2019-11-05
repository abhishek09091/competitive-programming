/*************


https://www.geeksforgeeks.org/maximum-number-of-leaf-nodes-that-can-be-visited-within-the-given-budget/
https://www.geeksforgeeks.org/print-level-order-traversal-line-line/
https://www.geeksforgeeks.org/level-order-traversal-line-line-set-2-using-two-queues/
https://www.geeksforgeeks.org/level-order-traversal-line-line-set-3-using-one-queue/

*************/
import java.util.Scanner;
import java.util.*;
import java.lang.*;
import java.io.*;
class Node
{
    int data;
    Node left, right;
    
    Node(int key)
    {
        data = key;
        left = right = null;
    }
}
class BinaryTree
{
    public static void main (String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        
        while(t-- > 0)
        {
           // int n = sc.nextInt();
            HashMap<Integer, Node> m = new HashMap<Integer, Node> ();
            int n = sc.nextInt();
            Node root = null;
            while (n > 0)
            {	
			
		int n1 = sc.nextInt();
                int n2 = sc.nextInt();
		char lr= sc.next().charAt(0);
				
               
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
			
            int budget = sc.nextInt();
            GfG gfg = new GfG();
            System.out.println(gfg.getCount(root, budget));
            
        }
        
    }
}


/*This is a function problem.You only need to complete the function given below*/
class GfG{
    
	PriorityQueue<Integer> pq = new PriorityQueue<Integer>();
	
    public int getCount(Node node, int bud){
        // your code here
        Queue<Node> q = new LinkedList<Node>();
        int count = 0;
        if(node == null) {
        	return count;
        }
        
        int len , level = 0;
        q.add(node);
        while(true) {
        	len = q.size();
        	if(len == 0) {
        		break;
        	}
        	level++;
        	while(len > 0) {
        	
        		Node top = q.remove();
        	
        		if(top.left != null) {
        			q.add(top.left);
        		}
        	
        		if(top.right != null) {
        			q.add(top.right);
        		}
        	
        		if(null == top.left && null == top.right) {
        			pq.add(level);
        		}
        		len--;
        	}
        }
        
        while(pq.size() != 0) {
        	
        	int data = pq.poll();
        	
        	if(data <= bud) {
        		count++;
        		bud -= data;
        	}else {
        		break;
        	}
        }
        
        return count;
    }
}