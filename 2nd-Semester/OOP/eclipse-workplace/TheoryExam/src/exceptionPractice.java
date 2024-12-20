import java.util.Scanner;
import java.lang.Exception;

class NoMatchException extends Exception{
	NoMatchException(String msg){
		super(msg);
	}
}

class X{
	public void match(String s1, String s2) throws NoMatchException{
		if(s1.equals(s2)) {
			System.out.println("Match!");
		}
		else {
			throw new NoMatchException("No Match!");
		}
	}
}

public class exceptionPractice {
    public static void main(String[] args) {
        int i = 0; // Initialize 'i' outside the loop
        while (true) {
            try {
                if (i < 11) {
                    System.out.println(i);
                    i++;
                } else {
                    throw new ArithmeticException("Value of i is 11 or greater");
                }
            } catch (ArithmeticException e) {
                System.out.println("Caught Exception: " + e.getMessage());
                break; // Exit the infinite loop
            }
        }
        X objX = new X();
        String s2 = "CSE";
        Scanner scan = new Scanner(System.in);
        String s1 = scan.next();
        try {
        	objX.match(s1, s2);
        }
        catch(Exception e) {
        	System.out.println(e);
        }
    }
}
