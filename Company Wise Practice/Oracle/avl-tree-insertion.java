import java.util.*;
import java.lang.Math;


/*****
*
* https://www.geeksforgeeks.org/avl-tree-set-1-insertion/
*
******/
class Node{
int data;
int height;
Node left,right;
Node(int d){
	data=d;
	height=0;
	left=null;
	right=null;
}
}
class AVL{
	public static void main(String[] args){
		Scanner sc=new Scanner(System.in);
		int t=sc.nextInt();
		while(t-->0){
			int n=sc.nextInt();
			boolean f=true;
			if(n==0){
				System.out.println("1");
				continue;
			}
			if(n==1){
				int a=sc.nextInt();
				System.out.println("1");
				continue;
			}
			if(n==2){
				int a=sc.nextInt();
				a=sc.nextInt();
				System.out.println("1");
				continue;
			}
			else{
			GfG g=new GfG();
			Node root=null;
			Node proot=null;
			f=true;
			while(n-->0){
				int a=sc.nextInt();
				proot=g.insertToAVL(root,a);
			if(isBalanced(proot)==0)
			{
				f=false;
				break;
			}
		if(!_B(root)){
			if(I_(root)){
            f=false;
				break;
				}
				}
			}
		}
		if(f==true)
			System.out.println("1");
		else
			System.out.println("0");
	}
}
public static int _B_(Node root)
{
    if(root==null)
        return 0;
    int lH = _B_(root.left);
    if(lH==-1)return -1;
    int rH = _B_(root.right);
    if(rH==-1)
        return -1;
    if(Math.abs(lH-rH)>1)
        return -1;
    return Math.max(lH,rH)+1;
}
public static boolean _B(Node root)
{
    if(_B_(root)==-1)
        return false;
    else 
        return true;
}
public static int isBalanced(Node root)
{
   int lh;
   int rh; 
   if(root == null)
    return 1; 
   lh = heigh(root.left);
   rh = heigh(root.right);
 
   if( Math.abs(lh-rh) <= 1)
	if(isBalanced(root.left)==1)
		if(isBalanced(root.right)==1)
     return 1;
   return 0;
}
public static int heigh(Node node)
{
   if(node == null)
       return 0;
   return 1 + Math.max(heigh(node.left), heigh(node.right));
} 
public static boolean I_(Node root)
{
    Node prev = null;     
    if (root!=null)
    {
        if (!I_(root.left))
			return false;
        if (prev != null && root.data <= prev.data)
         return false;
        prev = root;
        return I_(root.right);
    }
    return true;
}
}

/*This is a function problem.You only need to complete the function given below*/
/*The Node class is as follows
class Node{
	
	int height;
        int data;
        Node left,right;
	Node(int data)
        {
		this.data = data;
		this.height = 0;
		this.left = null;
		this.right = null;
	}
}*/
class GfG{
    
    public static int height(Node node) {
		
		if(node== null) {
			return 0;
		}
		
		return node.height;
	}
	
	public static int getBalance(Node node) {
		
		if(node == null) return 0;
		
		return height(node.left) - height(node.right);
	}
	
	public static Node rightRotation(Node node) {
		
		
		Node  x = node.left;
		Node T2 = x.right;
		//rotation
		x.right = node;
		node.left = T2;
		
		node.height = Math.max(height(node.left), height(node.right)) + 1;
		x.height = Math.max(height(x.left), height(x.right)) + 1;
		
		return x;
	}
	
	public static Node leftRotation(Node node) {
		
		Node x = node.right;
		Node T2 = x.left;
		//System.out.println("Inside left rotation: "+x.key);
		//rotation
		x.left = node;
		node.right = T2;
		
		node.height = Math.max(height(node.left), height(node.right)) + 1;
		x.height = Math.max(height(x.left), height(x.right)) + 1;
		
		return x;
	}
	
    public Node insertToAVL(Node root,int key){
         //add code here.
         
         
		//Inserting in the binary search tree pattern
		if(root == null) {
			return (new Node(key));
		}
		
		if(key < root.data) {
			root.left = insertToAVL(root.left,key);
		}else if(key > root.data) {
			root.right = insertToAVL(root.right,key);
		}else {
			return root;
		}
		
		//Logic of Assigning the height of node
		root.height = 1 + Math.max(height(root.left), height(root.right));
		
		//Now checking the balance of AVL tree
		//System.out.println("Root Height: "+root.height+" Root data: "+root.key);
		
		int balance = getBalance(root);
		
		//System.out.println("Balance: " + balance);
		
		//left left
		if(balance > 1 && key < root.left.data) {
			
			return rightRotation(root);
		}
		
		//right right
		if(balance < -1 && key > root.right.data) {
			return leftRotation(root);
		}
		
		//left right
		if(balance > 1 && key > root.left.data) {
			
			root.left = leftRotation(root.left);
			
			return rightRotation(root);
		}
		
		
		//right left
		if(balance < - 1 && key < root.right.data) {
			
			root.right = rightRotation(root.right);
			
			return leftRotation(root);
		}
		
		return root;
    }
}