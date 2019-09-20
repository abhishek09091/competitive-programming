/*********

https://www.geeksforgeeks.org/reverse-a-list-in-groups-of-given-size/
https://www.geeksforgeeks.org/reverse-linked-list-groups-given-size-set-2/

**********/
import java.util.*;
import java.lang.*;
class Node
{
    int data;
    Node next;
    Node(int key)
    {
        data = key;
        next = null;
    }
}
class ReverseInSize
{
    static Node head;
    public static void main (String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        
        while(t-- > 0)
        {
            int n = sc.nextInt();
            int a1 = sc.nextInt();
            Node head = new Node(a1);
            addToTheLast(head);
            for(int i = 1; i < n; i++)
            {
                int a = sc.nextInt();
                addToTheLast(new Node(a));
            }
            
            int k = sc.nextInt();
            GfG gfg = new GfG();
            Node res = gfg.reverse(head, k);
            printList(res);
            System.out.println();
        }
    }
    
    public static void addToTheLast(Node node)
    {
        if(head == null)
        {
            head = node;
        }
        else
        {
            Node temp = head;
            while(temp.next != null)
              temp = temp.next;
              temp.next = node;
        }
    }
    
    public static void printList(Node node)
    {
        while(node != null)
        {
            System.out.print(node.data + " ");
            node = node.next;
        }
    }
    
}


/*This is a function problem.You only need to complete the function given below*/
/*node class of the linked list
class Node
{
    int data;
    Node next;
    Node(int key)
    {
        data = key;
        next = null;
    }
}
*/
class GfG
{
    public static Node reverse(Node node, int k){
        //Your code here
        Stack<Node> s = new Stack<>();
        
        Node current = node;
        Node prev = null;
        
        while(current != null){
            
            int count = 0;
            while(current != null && count < k){
                s.push(current);
                current = current.next;
                count++;
            }
            
            while(s.size() > 0){
                
                if(prev == null){
                    prev = s.peek();
                    node = prev;
                    s.pop();
                }else{
                    prev.next = s.peek();
                    prev = prev.next;
                    s.pop();   
                }
            }
        }
        
        prev.next = null;
        return node;
        
        
    }
}
