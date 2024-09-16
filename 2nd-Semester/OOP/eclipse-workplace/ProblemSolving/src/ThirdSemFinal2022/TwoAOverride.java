package ThirdSemFinal2022;

import java.util.Scanner;

abstract class ABC{
	abstract double estimateSweetPrice(double weight);
	abstract double estimateSnacksPrice(double quantity);
	
	final double VAT(double price){
		return price*0.15;
	}
}

class DEF extends ABC{
	//@override
	double estimateSweetPrice(double weight) {
		return weight*10;
	}
	//@override
	double estimateSnacksPrice(double quantity) {
		return quantity*5;
	}
	
}

class GHI extends DEF{
	//@override
	double estimateSweetPrice(double weight) {
		double basePrice= super.estimateSweetPrice(weight);
		double vat = super.VAT(basePrice);
		return basePrice+vat;
	}
	//@override
	double estimateSnacksPrice(double quantity) {
		double basePrice= super.estimateSnacksPrice(quantity);
		double vat = super.VAT(basePrice);
		return basePrice+vat;
	}
}

public class TwoAOverride {

	public static void main(String[] args) {
		GHI obj = new GHI();
		Scanner input = new Scanner(System.in);
		System.out.println("Enter Sweet Quantity: ");	
		int w = input.nextInt();
		System.out.println("Enter Sweet Quantity: ");
		int q = input.nextInt();
		input.close();
		double sweetPrice = obj.estimateSweetPrice(w);
		double snacksPrice = obj.estimateSnacksPrice(q);
		
		System.out.println("Sweet Price: " + sweetPrice);
	    System.out.println("Snacks Price: " + snacksPrice);

	}

}
