
import java.util.*;
class QueueNode
{
	int data;
	QueueNode next;
	QueueNode(int a)
	{
	    data = a;
	    next = null;
	}
}
class GfG {
	public static void main(String args[])
	{
		 Scanner sc = new Scanner(System.in);
		 int t=sc.nextInt();
		 while(t>0)
		 {
			MyQueue obj = new MyQueue();
			int Q = sc.nextInt();
			while(Q>0)
			{
				int QueryType = 0;
				QueryType = sc.nextInt();
				if(QueryType == 1)
				{
					int a = sc.nextInt();
					
					obj.push(a);
					
				}else if(QueryType == 2)
				{
				System.out.print(obj.pop()+" ");
				}
				Q--;
			}
			System.out.println("");
			t--;
		 }
	}
}


/*This is a function problem.You only need to complete the function given below*/
/*The structure of the node of the queue is
class QueueNode
{
	int data;
	QueueNode next;
	QueueNode(int a)
	{
	    data = a;
	    next = null;
	}
}*/
class MyQueue
{
    QueueNode front, rear;
    
    // This function should add an item at
    // rear
	void push(int a){
        // Your code here
        QueueNode newNode = new QueueNode(a);
        if(front == null){
            front = rear = newNode;
            return;
        }
        
        rear.next = newNode;
        rear = newNode;
        return;
	}
	
    // This function should remove front
    // item from queue and should return
    // the removed item.
	int pop(){
        // Your code here
        if(front == null){
            front = rear = null;
            return -1;
        }
        
        int top = front.data;
        front = front.next;
        return top;
	}
}
