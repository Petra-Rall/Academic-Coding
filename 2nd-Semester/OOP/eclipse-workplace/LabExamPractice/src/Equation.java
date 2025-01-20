import java.util.Scanner;
import java.lang.Math;
public class Equation {
	public static void main(String[] args) {
		Scanner myInput = new Scanner(System.in);
		double m;
		int t, x;
		System.out.println("Enter t: ");
		t = myInput.nextInt();
		System.out.println("Enter x: ");
		x = myInput.nextInt();
		m = Math.sqrt((6*t*t)/(Math.sqrt(t)+x));
		System.out.println(m);
		
		char ct1 = myInput.next().charAt(0);
		System.out.println(ct1);
	}
}
