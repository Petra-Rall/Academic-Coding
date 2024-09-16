package ThirdSemFinal2022;

//Feature used: Overloading
class Display{
	void disp(char a){
		System.out.println(""+a);
	}
	void disp(char a, int b){
		System.out.println(""+a+","+b);
	}
	void disp(char a, int b, double c){
		System.out.println(""+a+","+b+","+c);
	}
}

public class TwoBSample {
	public static void main(String[] args) {
		Display obj = new Display();
		obj.disp('a');
		obj.disp('a',10);
		obj.disp('a',10, 5.5); 
	}
}
