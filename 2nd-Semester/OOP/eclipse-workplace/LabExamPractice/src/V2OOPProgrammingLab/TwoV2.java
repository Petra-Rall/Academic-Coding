package V2OOPProgrammingLab;

import java.util.Scanner;

public class TwoV2 {
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		double x = input.nextDouble();
		double y = input.nextDouble();
		
		if(x == 0 && y == 0) {
			System.out.println("Point is on origin");
		}
		else if(x == 0) {
			System.out.println("Point is on x-axis");
		}
		else if(y == 0) {
			System.out.println("Point is on y-axis");
		}
		else if(x > 0 && y > 0) {
			System.out.println("Point is on 1st Quadrant");
		}
		else if(x < 0 && y > 0) {
			System.out.println("Point is on 2nd Quadrant");
		}
		else if(x < 0 && y < 0) {
			System.out.println("Point is on 3rd Quadrant");
		}
		else if(x > 0 && y < 0) {
			System.out.println("Point is on 4th Quadrant");
		}
	}
}
