package ThirdSemFinal2022;

class A{
	public int var=10;
	public static int par;
	static{
		par = 5; // par has to be static in order to be used in static block
		System.out.println("Static block in A");
	}
	void meth(){
		var = 15;
		System.out.println("Method in class A");
	}
}

class B extends A{
	void meth(){ //final can't be used in order to override
		var += 20;
		System.out.println("Method in class B");
	}
}

final class C extends B{
	 int star;
	 void meth(){
		 System.out.println("Method in class C");
	 }
}
public class ThreeB{
	public static void main(String[ ] args) {
		B obj1 = new B();
		B obj2 = new B();
		C obj3 = new C();
		obj1.meth();
		obj3.star = 100; // Class C has to be instantiated
		System.out.println("par = " + A.par+", var = "+ obj2.var+", star = " + obj3.star);
	}
}
