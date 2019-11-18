/**************

Links for the help:

https://www.geeksforgeeks.org/level-order-tree-traversal/
https://www.geeksforgeeks.org/connect-nodes-at-same-level/
https://www.geeksforgeeks.org/connect-nodes-level-level-order-traversal/
https://www.geeksforgeeks.org/connect-nodes-at-same-level-with-o1-extra-space/

*************/
//Initial Template for Java
import java.util.*;
import java.io.*;
import java.lang.*;
class Node
{
    int data;
    Node left, right, nextRight;
    Node(int x)
    {
        this.data = x;
        left = right = nextRight = null;
    }
    
    
}
class Driver_code
{
    
    static void printSpecial(Node root)
    {
        if (root == null)
            return;
       Node node = root;
       while (node != null)
       {
          System.out.print(node.data+" ");
          node = node.nextRight;
       }
       if (root.left != null)
         printSpecial(root.left);
       else
         printSpecial(root.right);
        
        
    }
    
    static void inorder(Node root)
    {
        if (root == null)
             return;
        inorder(root.left);
        System.out.print(root.data+" ");
        inorder(root.right);
    }
    
    public static void main(String args[]) throws IOException
    {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(br.readLine());
        while (t-- > 0)
        {
            HashMap<Integer, Node> m = new HashMap<Integer, Node> ();
            int n = Integer.parseInt(br.readLine());
            
            Node root = null;
            
            String nums[] = br.readLine().split(" ");
            int mm = n;
            for( int idx = 0; idx < mm; idx++)
            {
                
                int n1 = Integer.parseInt(nums[idx*3]);
                int n2 = Integer.parseInt(nums[idx*3+1]);
                
                String lr = nums[idx*3+2];
                Node parent = m.get(n1);
                if (parent == null)
                {
                    parent = new Node(n1);
                    m.put(n1, parent);
                    if (root == null)
                        root = parent;
                }
                Node child = new Node(n2);
                if (lr.equals("L"))
                    parent.left = child;
                else
                    parent.right = child;
                m.put(n2, child);
            }
            new Level().connect(root);
            printSpecial(root);
            System.out.println();
            inorder(root);
            System.out.println();
            
        }
    
    }
    
    
}


/*This is a function problem.You only need to complete the function given below*/
//User function Template for Java
/*class Node
{
    int data;
    Node left, right, nextRight;
    Node(int x)
    {
        this.data = x;
        left = right = nextRight = null;
    }
    
    
}*/
class Level
{
    static Node getNextRight(Node node){
        
        Node temp = node.nextRight;
        
        while(temp != null){
            
            if(temp.left != null){
                return temp.left;
            }
            
            if(temp.right != null){
                return temp.right;
            }
            
            temp = temp.nextRight;
        }
        
        return null;
    }
    
    static void connect(Node root){
        // add your code here
        
        if(root == null) return;
        
        root.nextRight = null;
        
        while(root != null){
            
            Node temp = root;
            
            while(temp != null){
             
             if(temp.left != null){
                 
                 if(temp.right != null){
                     temp.left.nextRight = temp.right;
                 }else{
                     temp.left.nextRight = getNextRight(temp);
                 }
             }
             
             if(temp.right != null){
               temp.right.nextRight =   getNextRight(temp); 
             }
             
             temp = temp.nextRight;
            }
            
            if(root.left != null){
                root = root.left;
            }else if(root.right != null){
                root = root.right;
            }else{
                root = getNextRight(root);
            }
            
        }
     
     return;   
    }
    
    
}
