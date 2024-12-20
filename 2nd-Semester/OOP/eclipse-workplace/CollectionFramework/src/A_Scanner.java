import java.util.Scanner;
public final class A_Scanner {
	public static void main(String[] args) {
		Scanner myobj = new Scanner(System.in);
		System.out.println("Enter name: ");
		String username = myobj.nextLine();
		System.out.println("Username is: "+ username);
	}
		
}