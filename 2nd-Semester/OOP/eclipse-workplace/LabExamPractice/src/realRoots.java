import java.util.Scanner;
public class realRoots {
	public static void main(String[] args) {
		Scanner myInput = new Scanner(System.in);
		int a, b, c;
		a = myInput.nextInt();
		b = myInput.nextInt();
		c = myInput.nextInt();
		
		double x_1, x_2, D;
		
		D = b*b - 4*a*c;
		
		if(D < 0) {
			System.out.println("No real roots");
		}
		else if(a == b && b == 0) {
			System.out.println("No solution");
		}
		else if(a == 0) {
			System.out.println("Root: "+(-c/b));
		}
		else{
			x_1 = -b + Math.sqrt(b*b-4*a*c)/(2*a);
			x_2 = -b - Math.sqrt(b*b-4*a*c)/(2*a);
			
			System.out.println("x_1: "+x_1);
			System.out.println("x_2: "+x_2);
		}
	}
}
