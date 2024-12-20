import java.util.*;
public class D_UsingArrays {
	private int intValues[] = { 1,2,3,4,5,6 };
	private double doubleValues[] = { 8.4,9.3,0.2,7.9,3.4 };
	private int filledInt[], intValuesCopy[];
	
	public D_UsingArrays() {
		filledInt = new int[10];
		intValuesCopy = new int[intValues.length];
		
		Arrays.fill(filledInt, 7);
		Arrays.sort(doubleValues);
		System.arraycopy(intValues, 0, intValuesCopy, 0, intValues.length);
	}
	
	public void printArrays() {
		System.out.println("intValues: ");
		for(int count = 0; count < intValues.length; count++)
			System.out.print(intValues[count] + " ");
		
		System.out.print("\ndoubleValues: ");
		for(int count = 0; count < doubleValues.length; count++)
			System.out.print(doubleValues[count] + " ");
		
		System.out.print("\nfilledInt: ");
		for(int count = 0; count < filledInt.length; count++)
			System.out.print(filledInt[count] + " ");
		
		System.out.print("\nintValuesCopy: ");
		for(int count = 0; count < intValuesCopy.length; count++)
			System.out.print(intValuesCopy[count] + " ");
		
		System.out.println();
	}
	
	public int searchForInt(int value) {
		return Arrays.binarySearch(intValues, value);
	}
	
	public void printEquality() {
		boolean b = Arrays.equals(intValues, intValuesCopy);
		System.out.println("intValues"+ (b?"==":"!=")+ "intValuesCopy");
		
		b = Arrays.equals(intValues, filledInt);
		System.out.println("intValues"+ (b?"==":"!=")+ "filledInt");
	}
	
	public static void main(String[] args) {
		D_UsingArrays usingArraysObj = new D_UsingArrays();
		
		usingArraysObj.printArrays();
		usingArraysObj.printEquality();
		
		int location = usingArraysObj.searchForInt(5);
		System.out.println((location >=0?"Found 5 at element "+ location: "5 not found")+ "int intValues");
		
		location = usingArraysObj.searchForInt(8765);
		System.out.println((location >=0?"Found 8765 at element "+ location: "8765 not found ")+ "int intValues");
	}
}








