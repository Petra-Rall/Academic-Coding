class A extends Thread{
	public void run() {
		for(int i=0;i<5;i++) {
			System.out.println("Thread A "+i);
		}
	}
	
}

class B extends Thread{
	public void run() {
		for(int i=0;i<5;i++) {
			System.out.println("Thread B "+i);
		}
	}
	
}

class C implements Runnable{
	public void run() {
		for(int i=0;i<5;i++) {
			System.out.println("Thread C "+i);
		}
	}
}

class newThread extends Thread{
	String name;
	Thread t;
	newThread(String name){
		this.name = name;
		t = new Thread(this,name);
		t.start();
	}
	public void run() {
		for(int i=0;i<5;i++) {
			System.out.println("Thread D "+i);
		}
	} 
}


public class threadPractice{
	public static void main(String[] args) {
		new A().start();
		new B().start();
		C runnable = new C();
		Thread threadC = new Thread(runnable);
		threadC.setPriority(threadC.getPriority()-1);
		
		newThread threadD = new newThread("D");
		threadD.setPriority(Thread.MAX_PRIORITY);
		threadC.start();
		try {
			threadC.sleep(1000);
			threadC.join();
		}
		catch(Exception e) {
			System.out.println(e);
		}
		threadD.start();
		
		Thread t = Thread.currentThread();
		System.out.println("Current Thread "+t);
		t.setName("ThreadPractice");
		System.out.println("Current Thread "+t);
		
	}
}