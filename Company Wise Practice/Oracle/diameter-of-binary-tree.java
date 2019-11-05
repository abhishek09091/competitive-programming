/************

https://www.geeksforgeeks.org/diameter-of-a-binary-tree/
https://www.geeksforgeeks.org/diameter-of-a-binary-tree-in-on-a-new-method/

************/
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
class Binary_Tree_Diameter
{
    // driver function to test the above functions
    public static void main(String args[])throws IOException
    {
        // Input the number of test cases you want to run
        // Scanner sc = new Scanner(System.in);
        // int t = sc.nextInt();
        BufferedReader read = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(read.readLine());
        while (t > 0)
        {
            HashMap<Integer, Node> m = new HashMap<Integer, Node>();
            int n = Integer.parseInt(read.readLine());
            Node root = null;
            int k = 0;
            String str[] = read.readLine().trim().replace("  ", " ").split(" ");
            for(k = 0; k < n*3;)
            {
                int n1 = Integer.parseInt(str[k++]);
                int n2 = Integer.parseInt(str[k++]);
                char lr = str[k++].charAt(0);
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
                
            }
            Tree g = new Tree();
            System.out.println(g.diameter(root));
            t--;
        }
    }
}


/*This is a function problem.You only need to complete the function given below*/
/* A Binary Tree node
class Node
{
    int data;
    Node left, right;
   Node(int item)    {
        data = item;
        left = right = null;
    }
} */

class Ans{
    
    int res = Integer.MIN_VALUE;
}

class Tree{
    
      int heightFunc(Node node,Ans a){
        
        if(node == null){
            return 0;
        }
        
        Integer leftHeight = heightFunc(node.left,a);
        Integer rightHeight = heightFunc(node.right,a);
        
        a.res = Math.max(a.res,leftHeight+rightHeight + 1);
        
        return 1 + Math.max(leftHeight,rightHeight);
        }
   /* Complete the function to get diameter of a binary tree */
    int diameter(Node node){
        // Your code here
        
        if(node == null){
            return 0;
        }
        
        Ans height = new Ans();
        
        Integer heightOfTree = heightFunc(node,height);
        
        return height.res;
    }
}