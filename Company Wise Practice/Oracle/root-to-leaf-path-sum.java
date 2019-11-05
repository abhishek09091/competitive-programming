
// INITIAL CODE
import java.util.*;
import java.lang.*;
import java.io.*;
// A Binary Tree node
class Node
{
    int data;
    Node left, right;
    Node(int item)
    {
        data = item;
        left = right = null;
    }
}
class PathSum
{
    // driver function to test the above functions
    public static void main(String args[])
    {
		PathSum ps = new PathSum();
		//Index index_obj = new Index();
        // Input the number of test cases you want to run
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t > 0)
        {
            HashMap<Integer, Node> m = new HashMap<Integer, Node> ();
            int n = sc.nextInt();
            Node root = null;
            while (n > 0)
            {	
			
				int n1 = sc.nextInt();
                int n2 = sc.nextInt();
				char lr= sc.next().charAt(0);
				
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
			int a = sc.nextInt();
			
            GfG g = new GfG();
			boolean b = g.hasPathSum(root,a);
			if(b==true)
				System.out.println(1);
			else
				System.out.println(0);
			 t--;
        }
    }
}

/*This is a function problem.You only need to complete the function given below*/
/*
// A Binary Tree node
class Node
{
    int data;
    Node left, right;
    Node(int item)
    {
        data = item;
        left = right = null;
    }
} */
class GfG
{
    /*you are required to complete this function */
    boolean hasPathSum(Node node, int sum){
        
        if(node == null)  return false;
        
        sum -= node.data;
        
        if(node.left == null && node.right == null) 
            return (sum == 0 );
            
        return hasPathSum(node.left,sum) || hasPathSum(node.right,sum);
    }
}