import java.util.Scanner;
public class Equation2 {
	public static void main(String[] args) {
		/*Scanner myInput = new Scanner(System.in);
		double m;
		double t, x;
		System.out.println("Enter t: ");
		t = myInput.nextDouble();
		System.out.println("Enter x: ");
		x = myInput.nextDouble();*/
		
		Equation2 e = new Equation2();
		e.new eqn(5.5,2).calculate();;
		
	}
	
	class eqn{
		double t, x, m;
		eqn(int t, int x){
			this.t = t;
			this.x = x;
		}
		eqn(double t, int x){
			this.t = t;
			this.x = x;
		}
		eqn(int t, double x){
			this.t = t;
			this.x = x; 
		}
		eqn(double t, double x){
			this.t = t;
			this.x = x;
		}
		void calculate() {
			m = Math.sqrt((6*t*t)/(Math.sqrt(t)+x));
			System.out.println(m);
		}
	}
}
