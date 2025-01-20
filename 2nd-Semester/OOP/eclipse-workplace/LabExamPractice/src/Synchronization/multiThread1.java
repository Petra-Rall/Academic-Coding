package Synchronization;

public class multiThread1{
	 public static void main(String[] args) {
		 multiTable obj = new multiTable();
		 MyThread1 t1 = new MyThread1(obj);
		 MyThread2 t2 = new MyThread2(obj);
		 
		 /*Thread t3 = new Thread(()-> 
		 {multiTable p = new multiTable();
		 p.printTable(3);
		 });
		 */
		 t1.start();
		 t2.start();
		 //t3.start();
		 try {
			 t1.join();
			 //t2.join();
			 //t3.join();
		 }
		 catch(Exception e) {
			 e.printStackTrace();
		 }
	}
}
 

class multiTable {
	synchronized void printTable(int n) {
		for(int i = 1; i <= 10; i++) {
			System.out.println(n*i);
		}
		try {
			Thread.sleep(100);
		}
		catch(Exception e){
			e.printStackTrace();
		}
	}
	
}
class MyThread1 extends Thread{
	multiTable p;
	MyThread1(multiTable p) {
		this.p = p;
	}
	public void run() {
		p.printTable(1);
	}
}

class MyThread2 extends Thread{
	multiTable p;
	MyThread2(multiTable p) {
		this.p = p;
	}
	public void run() {
		p.printTable(2);
	}
}

