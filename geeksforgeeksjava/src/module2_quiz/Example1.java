package module2_quiz;


/***
 * 
 * https://www.geeksforgeeks.org/can-we-overload-or-override-static-methods-in-java/
 * 
 ***/

interface SuperBase{
	
	public static void display() {
		System.out.println("Display from superbase");
	}
	
	public void print();
}

class Base implements SuperBase{
	
	public static void display() {
		System.out.println("Display from base");
	}
	
	public void print() {
		System.out.println("Print from base");
	}
}

class Derived extends Base{
	
	public static void display() {
		System.out.println("Display from derived");
	}
	
	public void print() {
		System.out.println("Print from derived");
	}
}

public class Example1 {
	
	public static void main(String[] args) {
		
		SuperBase.display(); 
		
		SuperBase base = new Base();
		
		base.print();
	}

}
