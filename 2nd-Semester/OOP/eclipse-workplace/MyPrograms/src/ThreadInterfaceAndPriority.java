class X implements Runnable{
	public void run() {
		for(int i=1; i<=5; i++) {
			System.out.println("Thread X: "+i);
		}
		System.out.println("Exit from Thread X");
	}
}

class Y implements Runnable{
	public void run() {
		for(int i=6; i<=10; i++) {
			System.out.println("Thread Y: "+i);
		}
		System.out.println("Exit from Thread Y");
	}
}

public class ThreadInterfaceAndPriority {
	public static void main(String[] args) {
		X r1 = new X();
		Y r2 = new Y();
		
		Thread t1 = new Thread(r1);
		Thread t2 = new Thread(r2);
		
		t1.setPriority(Thread.MAX_PRIORITY);
		t2.setPriority(t1.getPriority()-2);
		
		t1.start();
		t2.start();

	}

}
