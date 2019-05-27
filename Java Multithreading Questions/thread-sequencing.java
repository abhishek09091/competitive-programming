package src;

class ResourceLock{
	
	public volatile int flag = 1;
}


class ThreadA extends Thread{

	ResourceLock lock;
	
	public ThreadA(ResourceLock lock) {
		// TODO Auto-generated constructor stub
		this.lock = lock;
	}
	
	@Override
	public void run() {
		
		try {
			synchronized (lock) {
				for(int i=0; i<100; i++) {
					while(lock.flag != 1) {
						lock.wait();
					}
					
					System.out.println("A ");
					Thread.sleep(1000);
					lock.flag = 2;
					lock.notifyAll();
				}
			}
		}catch(Exception e) {
			System.out.println("Exception 1: "+e.getMessage());
		}
	}
}


class ThreadB extends Thread{

	ResourceLock lock;
	
	public ThreadB(ResourceLock lock) {
		// TODO Auto-generated constructor stub
		this.lock = lock;
	}
	
	@Override
	public void run() {
		
		try {
			synchronized (lock) {
				for(int i=0; i<100; i++) {
					while(lock.flag != 2) {
						lock.wait();
					}
					
					System.out.println("B ");
					Thread.sleep(1000);
					lock.flag = 3;
					lock.notifyAll();
				}
			}
		}catch(Exception e) {
			System.out.println("Exception 2: "+e.getMessage());
		}
	}
}

class ThreadC extends Thread{

	ResourceLock lock;
	
	public ThreadC(ResourceLock lock) {
		// TODO Auto-generated constructor stub
		this.lock = lock;
	}
	
	@Override
	public void run() {
		
		try {
			synchronized (lock) {
				for(int i=0; i<100; i++) {
					while(lock.flag != 3) {
						lock.wait();
					}
					
					System.out.println("C ");
					Thread.sleep(1000);
					lock.flag = 1;
					lock.notifyAll();
				}
			}
		}catch(Exception e) {
			System.out.println("Exception 3: "+e.getMessage());
		}
	}
}

public class MainClass {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		ResourceLock lock = new ResourceLock();
		
		ThreadA a = new ThreadA(lock);
		ThreadB b = new ThreadB(lock);
		ThreadC c = new ThreadC(lock);
		
		a.start();
		b.start();
		c.start();
		

	}

}
