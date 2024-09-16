package ThirdSemFinal2022;

class Fruit{
	String a;
	double b;
	double c;
	Fruit(String a, double b, double c){
		this.a = a;
		this.b = b;
		this.c = c;
	}
	double reducePricePerKG(double r){
		c=c-r;
		return c;
	}
	double increasePricePerKG(double i) {
		c=c+i;
		return c;
	}
	void printDetails(){
		System.out.println("Name: "+a);
		System.out.println("Weight: "+b);
		System.out.println("Price per KG: "+c);
		System.out.println("Total price: "+b*c);
	}
}

public class ThreeAFruitShop {
	 public static void main(String[ ] args) {
		 Fruit fruit1 = new Fruit("Apple", 3.5, 110);
		 Fruit fruit2 = new Fruit("Mango", 5, 90);
		 fruit1.reducePricePerKG(10);
		 fruit2.increasePricePerKG(20);
		 fruit1.printDetails();
		 fruit2.printDetails();
	 }
}