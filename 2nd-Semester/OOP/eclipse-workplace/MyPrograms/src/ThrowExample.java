
class ThrowA{
	public static void SaveUserAge(int age) {
		if(age<18) {
			throw new ArithmeticException();
		}
		else {
			System.out.println("Correct age is entered");
		}
	}
}

public class ThrowExample {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		try {
			ThrowA.SaveUserAge(17);
			//SaveUSerAge(17);
		}
		catch(ArithmeticException e) {
			System.out.println("Underage");
		}
		
		/*
		public static void SaveUserAge(int age) {
			if(age<18) {
				throw new ArithmeticException();
			}
			else {
				System.out.println("Correct age is entered");
			}
		}
		*/
		
	}
	
	

}
