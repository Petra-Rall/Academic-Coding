
class A extends Thread{
	public void run() {
		for(int i=1;i<5;i++) {
			System.out.println("From Thread A: " +i);
			}
		System.out.println("Exit From A");
	}
	
}

class B extends Thread{
	public void run() {
		for(int j=1;j<5;j++) {
			System.out.println("From Thread B: " +j);
			}
		System.out.println("Exit From B");
	}
	
}

class C extends Thread{
	public void run() {
		for(int k=1;k<5;k++) {
			System.out.println("From Thread C: " +k);
			}
		System.out.println("Exit From C");
	}
	
}

public class ThreadTest {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		new A().start();
		new B().start();
		new C().start();
	}

}
