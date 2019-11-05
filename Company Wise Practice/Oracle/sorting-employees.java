import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import java.util.Scanner;

class Person implements Comparable<Person>{
	
	private String name;
	private Integer salary;
	
	public Person(String name,Integer salary) {
		this.name = name;
		this.salary = salary;
	}

	public String getName() {
		return name;
	}

	public Integer getSalary() {
		return salary;
	}

	@Override
	public int compareTo(Person o) {
		// TODO Auto-generated method stub
		int salComp = this.salary.compareTo(o.salary);
		
		if(salComp == 0) {
			return this.name.compareTo(o.name);
		}
		return salComp;
	}	
	
}
public class GFG {
	
	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		
		Integer t = sc.nextInt();
		
		while(t-- > 0) {
			
			Integer n = sc.nextInt();
			
			List<Person> personList = new ArrayList<Person>();
			
			for(int i=0; i<n; i++) {
				
				String name = sc.next();
				Integer salary = sc.nextInt();
				personList.add(new Person(name,salary));
			}
			
			Collections.sort(personList);
			
			for (Person person2 : personList) {
				System.out.print(person2.getName()+" "+person2.getSalary()+" ");
			}
			System.out.println();
		}
		
		sc.close();
	}

}
