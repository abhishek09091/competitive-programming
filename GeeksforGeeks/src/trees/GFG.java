package trees;

import java.util.LinkedList;
import java.util.PriorityQueue;
import java.util.Queue;

class Node{
    int data;
    Node left, right;
    
    Node(int key)
    {
        data = key;
        left = right = null;
    }
}

public class GFG{
    
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