import java.util.Scanner;

public class SMC {
	public static void main(String[] args) {
		Scanner myInput = new Scanner(System.in);
		String x = myInput.nextLine();
		String y = myInput.nextLine();
		int f01=0, f10=0, f00=0, f11=0;
		double SMC=0;
		
		for(int i = 0; i<x.length(); i++) {
			if(x.charAt(i) == '0' && y.charAt(i) == '1') {
				f01++;
			}
			if(x.charAt(i) == '1' && y.charAt(i) == '0') {
				f10++;
			}
			if(x.charAt(i) == '0' && y.charAt(i) == '0') {
				f00++;
			}
			if(x.charAt(i) == '1' && y.charAt(i) == '1') {
				f11++;
			}
		}
		
		SMC = (double)(f11+f00)*(f01+f10+f11+f00)/100;
		System.out.println(SMC);
	}

}
