
public class MainThreadPriority {

	public static void main(String[] args) {
		Thread t = Thread.currentThread();
		System.out.println("Current Thread: "+t);
		System.out.println("Current Priority: "+t.getPriority());
		
		t.setName("CSE");
		System.out.println("New name: "+t);
		
		t.setPriority(t.getPriority()-2);
		System.out.println("New Priority: "+t.getPriority());

	}

}
