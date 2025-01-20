import java.util.Scanner;
public class Equation3 {
	
	class A{
		double t;
		A(double t){
			this.t = t;
		}
		double calculate() {
			return 4*t/Math.sqrt(10*t);
		}
	}
	
	class B extends A{
		double t, x, s;
		B(double t, double x){
			super(t);
			this.t = t;
			this.x = x;
		}
		double calculate() {
			s = super.calculate();
			return s/(Math.sqrt(x*t)+100);
		}
	}
	public static void main(String[] args) {
		Equation3 e = new Equation3();
		B b = e.new B(2,4);
		System.out.println(b.calculate());
	}
}
