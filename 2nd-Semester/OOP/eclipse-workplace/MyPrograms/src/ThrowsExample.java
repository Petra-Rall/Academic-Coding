
public class ThrowsExample {
	static void play() throws Exception{
	
		//System.out.println("Before");
		//throw new IllegalAccessException("demo");
		
		int x= 1/0;
	}
	
	public static void main(String[] args) {
		try {
			play();
		}
		catch(Exception e) {
			System.out.println("Caught me: "+e);
		}
	}
	
}
