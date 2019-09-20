/*********

https://www.geeksforgeeks.org/design-a-stack-that-supports-getmin-in-o1-time-and-o1-extra-space/

*********/
import java.util.*;
class Get_Min_From_Stack
{
	public static void main(String args[])
	{
		Scanner sc = new Scanner(System.in);
		int T = sc.nextInt();
		while(T>0)
		{
			int q = sc.nextInt();
			GfG g = new GfG();
			while(q>0)
			{
				int qt = sc.nextInt();
				
				if(qt == 1)
				{
					int att = sc.nextInt();
					g.push(att);
					//System.out.println(att);
				}
				else if(qt == 2)
				{
					System.out.print(g.pop()+" ");
				}
				else if(qt == 3)
				{
					System.out.print(g.getMin()+" ");
				}
			
			q--;
			}
			System.out.println();
		T--;
		}
		
	}
}


/*This is a function problem.You only need to complete the function given below*/
class GfG{
	
    int minEle;
    Stack<Integer> s = new Stack<>();
    /*returns min element from stack*/
    int getMin(){
	// Your code here
	    if(s.size() == 0) return -1;
	    return minEle;
    }
    
    /*returns poped element from stack*/
    int pop(){
	// Your code here
	    if(s.size()==0) return -1;
	    
	    int temp = s.peek();
	    s.pop();
	    
	    if(temp >= minEle){
	        return temp;
	    }else{
	        
	        int res = minEle;
	        minEle = ( 2 * minEle) - temp;
	        return res;
	    }
	    
    }
    /*push element x into the stack*/
    void push(int x){
	// Your code here
	    if(s.size() == 0){
	        minEle = x;
	        s.push(x);
	        return;
	    }
	    
	    if(x < minEle){
	        s.push(2*x - minEle);
	        minEle = x;
	    }else{
	        s.push(x);
	    }
	    return;
    }	
}
