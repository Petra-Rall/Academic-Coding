public class Error2 {
	static void action() throws Exception{
		int a[]= {7,9,45,63,10};
		int b=7;
		
		for(int i=0; i<7; i++) {
			int x=a[i]/(b-7);
			System.out.println(x);
		}
		
		for(int i=0; i<6; i++) {
			a[i]=9;
		}
	}
	
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int a[]= {7,9,45,63,10};
		int b=7;
		try {
			action();
		}

		catch (Exception e) {
			System.out.println(" "+e);
		}
		finally {
			System.out.println("Executed");	
		}
	}

}
