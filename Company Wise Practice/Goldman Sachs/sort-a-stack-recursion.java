/*********

https://www.geeksforgeeks.org/sort-a-stack-using-recursion/

********/
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
    
    public void sortedStack(Stack<Integer> s, Integer top){
        
        if(s.isEmpty() || top > s.peek()){
            s.push(top);
            return;
        }
        
        int temp = s.pop();
        sortedStack(s,top);
        
        s.push(temp);
    }
    
    public void sortStack(Stack<Integer> s){
        
        if(!s.isEmpty()){
            
            Integer temp = s.pop();
            
            sortStack(s);
            
            sortedStack(s,temp);
            
        }
    }
    
	public Stack<Integer> sort(Stack<Integer> s){
		//add code here.
		
		sortStack(s);
		
		
		return s;
	}
}