package queue;


class Node{
	
	int data;
	Node prev;
	Node next;
	
	public Node(int data) {
		this.data = data;
		prev = null;
		next = null;
	}
}

class Dequeue{
	
	int size;
	Node front;
	Node rear;
	
	public Dequeue() {
		front = rear = null;
		size = 0;
	}
	
	void insertFront(int data) {
		
		Node newNode = new Node(data);
		
		if(front == null){
			rear = front = newNode;
		}else{
			newNode.next = front;
			front.prev = newNode;
			front = newNode;
		}
		
		size++;
	}
	
	void insertRear(int data) {
		
		Node newNode = new Node(data);
		if(rear == null) {
			rear = front = newNode;
		}else {
			
			rear.next = newNode;
			newNode.prev = rear;
			rear = newNode;
		}
		size++;
	}
	
	void deleteFront() throws Exception{
		
		if(isEmpty()) {
			throw new Exception("Dequeue doesn't contain any thing i.e. Underflow");
		}else {
			
			Node temp = front;
			front = front.next;
			
			if(front == null) {
				rear = null;
			}else {
				front.prev = null;
			}
		}
		
		size--;
	}
	
	void deleteRear() throws Exception{
		
		if(isEmpty()) {
			throw new Exception("Dequeue doesn't contain any thing i.e. Underflow");
		}else {
			
			Node temp = rear;
			rear = rear.prev;
			
			if(rear == null) {
				front = null;
			}else {
				rear.next = null;
			}
		}
		
		size--;
	}
	
	int getFront() throws Exception{
		
		if(isEmpty()){
			throw new Exception("Dequeue is Empty");
		}
		
		return front.data;
	}
	
	int getRear() throws Exception{
		
		if(isEmpty()){
			throw new Exception("Dequeue is Empty");
		}
		
		return rear.data;
	}
	
	int getSize() {
		return size;
	}
	
	boolean isEmpty() {
		 return ( null == front );
	}
	
}

public class DQueue {
	
	public static void main(String[] args) throws Exception{
		try {
			Dequeue queue = new Dequeue();
			queue.insertFront(1);
			queue.insertFront(2);
			System.out.println(queue.getRear());
			System.out.println(queue.getFront());
			queue.deleteRear();
			queue.deleteFront();
			System.out.println(queue.getSize());
			System.out.println(queue.isEmpty());
			queue.deleteFront();
		}catch(Exception ex) {
			System.out.println(ex.getMessage());
		}
	}
	

}
