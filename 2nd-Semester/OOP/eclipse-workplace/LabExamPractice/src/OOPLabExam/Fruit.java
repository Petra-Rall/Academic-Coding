package OOPLabExam;
import java.util.ArrayList;
import java.util.Collections;

public class Fruit implements Comparable<Fruit>{
	private String name;
	private int quantity;
	
	public Fruit(String name, int quantity) {
		this.name = name;
		this.quantity = quantity;
	}
	
	//comapreTo method for sorting
	@Override
	public int compareTo(Fruit other) {
		// First compare by quantity in descending order
		if(this.quantity!=other.quantity) {
			return Integer.compare(other.quantity, this.quantity);
		}
		// If quantities are equal, compare by name in lexicographic order
		return this.name.compareTo(other.name);
	}
	
	public String toString() {
		return "Fruit{name = "+ name + ", quantity = "+quantity + "}";
	}
	
	public static void main(String[] args) {
		ArrayList<Fruit> listFruits = new ArrayList<>();
		listFruits.add(new Fruit("Apple", 10));
		listFruits.add(new Fruit("Banana", 15));
        listFruits.add(new Fruit("Cherry", 15));
        listFruits.add(new Fruit("Date", 5));
        
        Collections.sort(listFruits);
        
        for(Fruit fruit: listFruits) {
        	System.out.println(fruit);
        }
	}
}
