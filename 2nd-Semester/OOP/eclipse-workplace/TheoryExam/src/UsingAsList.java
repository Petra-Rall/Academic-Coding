import java.util.*;

public class UsingAsList {
	private static final String values[] = {"red", "white", "blue"};
	private List list;
	
	public UsingAsList(){
		list = Arrays.asList(values);
		list.set(1,"green");
	}
	
	public void printElements() {
		System.out.println("List elements: ");	
		for(int i = 0; i<list.size(); i++) {
			System.out.println(list.get(i)+" ");
		}
		
		System.out.println("\nArray elements: ");
		for(int i = 0; i<values.length; i++) {
			System.out.println(values[i]+" ");
		}
	}
	
	public static void main(String[] args){
		new UsingAsList().printElements();
	}
}
