import java.util.Scanner;
public class Result {
	public static void main(String[] args) {
		Scanner myInput = new Scanner(System.in);
		double mathMarks, phyMarks, chemMarks, totalMarks, mpMarks;
		mathMarks = myInput.nextDouble();
		phyMarks = myInput.nextDouble();
		chemMarks = myInput.nextDouble();
		totalMarks = mathMarks + phyMarks + chemMarks;
		mpMarks = mathMarks + phyMarks;
		if(mathMarks >= 60 && phyMarks >= 50 && chemMarks >=40 && (totalMarks >= 200 || mpMarks >= 150)) {
			System.out.println("Eligible");
		}
		else {
			System.out.println("Not Eligible");
		}
	}
}
