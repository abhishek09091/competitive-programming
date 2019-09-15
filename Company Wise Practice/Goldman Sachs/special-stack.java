import java.util.Scanner;
import java.util.Stack;
class SpeStack{
	public static void main(String[] args){
		Scanner sc=new Scanner(System.in);
		int t=sc.nextInt();
		while(t-->0){
			int n=sc.nextInt();
			Stack<Integer> s=new Stack<>();
			GfG g=new GfG();
			while(!g.isFull(s,n)){
				g.push(sc.nextInt(),s);
			}
		System.out.println(g.min(s));
		}
	}
}

/*This is a function problem.You only need to complete the function given below*/
/*Complete the function(s) below*/
class GfG{
    
    public int minElem = 0 ;
    
	public void push(int a,Stack<Integer> s){
	    //add code here.
	    if(s.isEmpty()){
	        
	        minElem = a;
	        s.push(a);
	        return;
	    }
	    
	    if(a < minElem){
	        s.push(2*a - minElem);
	        minElem = a;
	        return;    
	    }
	    
	    s.push(a);
	    
	}
	public int pop(Stack<Integer> s){
            //add code here.
            if(s.isEmpty()){
                return -1;
            }
            
            Integer top = s.pop();
            
            if(top < minElem){
                minElem = 2*minElem - top;
                return minElem;
            }else{
                return top;
            }
	}
	public int min(Stack<Integer> s){
           //add code here.
           return minElem;
	}
	
	public boolean isFull(Stack<Integer>s, int n){
           //add code here.
           if(s.size() == n ){
               return true;
           }
           
           return false;
	}
	public boolean isEmpty(Stack<Integer>s){
           //add code here.
           if(s.size() == 0){
               return true;
           }
           
           return false;
	}
}