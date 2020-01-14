package module2_quiz;

public class Example {
	

	public static int fun(int n){
		if (n == 4)
			return n;
		else return 2*fun(n+1);
	}
	
	public static int fun(int x, int y) {
	  if (x == 0)
	    return y;
	  return fun(x - 1,  x + y);
	}
	
	public static void fun1(int n){
		
	  if (n == 0)
	    return;
	  
	  System.out.print(n%2);
	  fun1(n/2);
	}
	
	public static int fun1(int x, int y){
	    if (y == 0)   
	    	return 0;
	    return (x + fun1(x, y-1));
	}
	
	public static void print(int n){
	    if (n > 4000)
	        return;
	    System.out.print(n+" ");
	    print(2*n);
	    System.out.print(n+" ");
	}
	
	public static int fun3(int n){
	    if (n == 0 || n == 1)
	        return n;

	    if (n%3 != 0)
	        return 0;

	    return fun3(n/3);
	}
	
	public static int f(int n){
	    if(n <= 1)
	        return 1;
	    if(n%2 == 0)
	        return f(n/2);
	    return f(n/2) + f(n/2+1);
	}
	
	 public static int foo( int n, int r) {
		  if (n  > 0) return (n%r +  foo (n/r, r ));
		  else return 0;
	}
	
	
	public static void main(String[] args) {
		
		System.out.println(fun(2));
		System.out.println(fun(4,3));
		fun1(25);
		System.out.println();
		System.out.println(fun1(7,11));
		print(1000);
		System.out.println();
		System.out.println(fun3(25));
		System.out.println(f(11));
		System.out.println(foo(513,2));
	}

}
