/******

https://www.geeksforgeeks.org/sort-stack-using-temporary-stack/

*****/
import java.util.Scanner;
import java.util.Stack;
class SortedStack{
	public static void main(String[] args){
		Scanner sc=new Scanner(System.in);
		int t=sc.nextInt();
		while(t-->0){
			Stack<Integer> s=new Stack<>();
			int n=sc.nextInt();
			while(n-->0)
			s.push(sc.nextInt());
			GfG g=new GfG();
			Stack<Integer> a=g.sort(s);
			while(!a.empty()){
				System.out.print(a.peek()+" ");
				a.pop();
			}
			System.out.println();
		}
	}
}

/*This is a function problem.You only need to complete the function given below*/
/*Complete the function below*/
class GfG{
	public Stack<Integer> sort(Stack<Integer> s){
		//add code here.
		Stack<Integer> tmp = new Stack<>();
		
		while(!s.isEmpty()){
		    
		    Integer top = s.pop();
		    
		    while(!tmp.isEmpty() && top < tmp.peek()){
		        
		        s.push(tmp.pop());
		    }
		    
		    tmp.push(top);
		    
		}
		
		return tmp;
	}
}