
import java.util.*;
import java.util.Stack;
import java.util.LinkedList;
class GfG
{
	public static void main(String args[])
	{
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		while(t>0)
		{
			StackQueue g = new StackQueue();
			int q = sc.nextInt();
			while(q>0)
			{
				int QueryTyoe = sc.nextInt();
				if(QueryTyoe == 1)
				{
					int a = sc.nextInt();
					g.insert(a);
				}else
				if(QueryTyoe == 2)
				System.out.print(g.remove()+" ");
			q--;
				
			}
			System.out.println();
		t--;
		}
	}
}


/*This is a function problem.You only need to complete the function given below*/
class StackQueue
{
    Stack<Integer> s1 = new Stack<Integer>();
    Stack<Integer> s2 = new Stack<Integer>();
    /* The method insert to push element
       into the queue */
    void insert(int B){
	   // Your code here
	   s1.push(B);
    }
	
    
    /* The method remove which return the
      element popped out of the queue*/
    int remove(){
	   // Your code here
	   
	   if(s1.empty() && s2.empty()){
	       return -1;
	   }
	   
	   while(s2.empty()){
	       
	       while(!s1.empty()){
	           s2.push(s1.peek());
	           s1.pop();
	       }
	   }
	   
	   int x = s2.peek();
	   s2.pop();
	   return x;
    }
}
