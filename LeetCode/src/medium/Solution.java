package medium;


/**********
 * 
 * 
 * https://leetcode.com/problems/populating-next-right-pointers-in-each-node/submissions/
 * 
 * 
 * Input: {"$id":"1","left":{"$id":"2","left":{"$id":"3","left":null,"next":null,"right":null,"val":4},"next":null,"right":{"$id":"4","left":null,"next":null,"right":null,"val":5},"val":2},"next":null,"right":{"$id":"5","left":{"$id":"6","left":null,"next":null,"right":null,"val":6},"next":null,"right":{"$id":"7","left":null,"next":null,"right":null,"val":7},"val":3},"val":1}
 *
 * Output: {"$id":"1","left":{"$id":"2","left":{"$id":"3","left":null,"next":{"$id":"4","left":null,"next":{"$id":"5","left":null,"next":{"$id":"6","left":null,"next":null,"right":null,"val":7},"right":null,"val":6},"right":null,"val":5},"right":null,"val":4},"next":{"$id":"7","left":{"$ref":"5"},"next":null,"right":{"$ref":"6"},"val":3},"right":{"$ref":"4"},"val":2},"next":null,"right":{"$ref":"7"},"val":1}
 *
 * Explanation: Given the above perfect binary tree (Figure A), your function should populate 
 * each next pointer to point to its next right node, just like in Figure B.
 * 
 * 
 * ********/
//Definition for a Node.
class Node {
	public int val;
	public Node left;
	public Node right;
	public Node next;

	public Node() {
	}

	public Node(int _val, Node _left, Node _right, Node _next) {
		val = _val;
		left = _left;
		right = _right;
		next = _next;
	}
};

public class Solution {

	public static Node getNextRight(Node node) {
		
		Node temp = node.next;
		
		while(temp != null) {
			
			if(temp.left != null) return temp.left;
			
			if(temp.right != null) return temp.right;
			
			temp = temp.next;
		}
		return null;
	}

	public Node connect(Node root) {
		Node parent = root;
		if (root == null)
			return parent;

		root.next = null;

		while (root != null) {

			Node temp = root;

			while (temp != null) {

				if (temp.left != null) {
					
					if(temp.right != null) {
						temp.left.next = temp.right;
					}else {
						temp.left.next = getNextRight(temp);
					}
				}
				
				if(temp.right != null) {
					temp.right.next = getNextRight(temp);
				}
				
				temp = temp.next;
			}
			
			if(root.left != null) {
				root = root.left;
			}else if(root.right != null) {
				root = root.right;
			}else {
				root = getNextRight(root);
			}
		}

		return parent;

	}
}