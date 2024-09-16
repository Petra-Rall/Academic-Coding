class A1 extends Thread{
	public void run() {
		for(int i=1; i<=5; i++) {
			System.out.println("This is Thread A: "+i);
		}
		System.out.println("Exit from Thread A");
	}
}

class B1 extends Thread{
	public void run() {
		for(int i=6; i<=10; i++) {
			System.out.println("This is Thread B: "+i);
		}
		System.out.println("Exit from Thread B");
	}
}

class C1 extends Thread{
	public void run() {
		for(int i=11; i<=15; i++) {
			System.out.println("This is Thread C: "+i);
		}
		try {
			Thread.sleep(1000);
		} catch (InterruptedException e) {
			e.printStackTrace();
		}
		System.out.println("Exit from Thread C");
	}
}


public class ThreadClass {

	public static void main(String[] args) {
		
		A1 t= new A1();
		t.start();
		try {
			t.join();
		} catch (InterruptedException e) {
			e.printStackTrace();
		}
		new B1().start();
		
		C1 t2= new C1();
		t2.start();
		
		
	}

}
