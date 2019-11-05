/**********

https://www.geeksforgeeks.org/merge-two-sorted-lists-place/
https://www.geeksforgeeks.org/merge-two-sorted-linked-lists/

**********/
import java.util.*;
class Node
{
    int data;
    Node next;
    Node(int d) {
        data = d; 
        next = null;
    }
}
class MergeLists
{
    Node head;
    public void addToTheLast(Node node)
    {
      if (head == null) {
           head = node;
          } else {
           Node temp = head;
           while (temp.next != null)
            temp = temp.next;
        
           temp.next = node;
        }
    }
  /* Function to print linked list */
    void printList()
    {
        Node temp = head;
        while (temp != null)
        {
           System.out.print(temp.data+" ");
           temp = temp.next;
        }  
        System.out.println();
    }
	
	 
 
     /* Driver program to test above functions */
    public static void main(String args[])
    {
       
         
        /* Constructed Linked List is 1->2->3->4->5->6->
           7->8->8->9->null */
         Scanner sc = new Scanner(System.in);
		 int t=sc.nextInt();
		 
		 while(t>0)
         {
			int n1 = sc.nextInt();
			int n2 = sc.nextInt();
			MergeLists llist1 = new MergeLists();
		    MergeLists llist2 = new MergeLists();
			
				int a1=sc.nextInt();
				Node head1= new Node(a1);
				llist1.addToTheLast(head1);
				if (sc.hasNextInt())
				for (int i = 1; i < n1; i++) 
				{ 
					//int a;
 
					 int a = sc.nextInt(); 
					llist1.addToTheLast(new Node(a));
				}
			
			
				int b1=sc.nextInt();
				Node head2 = new Node(b1);
				llist2.addToTheLast(head2);
				if (sc.hasNextInt()) 
				for (int i = 1; i < n2; i++) 
				{
					//int b;
					
					 int b = sc.nextInt(); 
					llist2.addToTheLast(new Node(b));
				}
				llist1.head= new LinkedList().sortedMerge(llist1.head,llist2.head);
				llist1.printList();
			
			t--;
			
         }
    }
}


/*This is a function problem.You only need to complete the function given below*/
/*
  Merge two linked lists 
  head pointer input could be NULL as well for empty list
  Node is defined as 
    class Node
    {
        int data;
        Node next;
        Node(int d) {data = d; next = null; }
    }
*/
class LinkedList{
    
    Node mergeUtil(Node headA,Node headB){
        
        if(headA.next == null){
            headA.next = headB;
            return headA;
        }
        
        Node curr1 = headA , next1 = headA.next;
        Node curr2 = headB , next2 = headB.next;
        
        while(next1 != null && curr2 != null){
            
            if((curr2.data >= curr1.data) && (curr2.data <= next1.data)){
                
                next2 = curr2.next;
                curr1.next =curr2;
                curr2.next = next1;
                
                curr1 = curr2;
                curr2 = next2;
                
            }else{
                
                if(next1.next != null){
                    next1 = next1.next;
                    curr1 = curr1.next;
                    
                }else{
                    next1.next = curr2;
                    return headA;
                }
            }
        }
        
        return headA;
    }
    Node sortedMerge(Node headA, Node headB) {
     // This is a "method-only" submission. 
     // You only need to complete this method
     if(headA == null){
         return headB;
     }
     
     if(headB == null){
         return headA;
     }
     
     if(headA.data < headB.data){
         return mergeUtil(headA,headB);
     }else{
         return mergeUtil(headB,headA);
     }
   } 
}
