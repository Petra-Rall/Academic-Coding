import java.util.*;

public class UsingArrays {
	private int intValues[]= {1,2,3,4,5,6};
	private double doubleValues[]= {8.4, 9.3,0.2,7.9,3.4};
	private int filledInt[], intValuesCopy[];
	
	public UsingArrays() {
		filledInt = new int[10];
		intValuesCopy = new int[intValues.length];
		
		Arrays.fill(filledInt, 7);
		Arrays.sort(doubleValues);
		
		System.arraycopy(intValues, 0, intValuesCopy, 0, intValues.length);
		
	}
	
	public void printArrays() {
		System.out.print("doubleValues: ");
		for(int i=0; i<doubleValues.length; i++) {
			System.out.print(doubleValues[i]+" ");
		}
		System.out.println();
		
		System.out.print("intValues: ");
		for(int i=0; i<intValues.length; i++) {
			System.out.print(intValues[i]+" ");
		}
		
		System.out.println();
		System.out.print("filledInt: ");
		for(int i=0; i<filledInt.length; i++) {
			System.out.print(filledInt[i]+" ");
		}
		System.out.println();
		
		System.out.print("intValuesCopy: ");
		for(int i=0; i<intValuesCopy.length; i++) {
			System.out.print(intValuesCopy[i]+" ");
		}
		System.out.println();
	}
	
	public int searchForInt(int value) {
		return Arrays.binarySearch(intValues, value);
	}
	
	public void printEquality() {
		boolean b = Arrays.equals(intValues, intValuesCopy);
		System.out.println("intValues "+ (b?"==":"!=")+" intValuesCopy");
	
		b = Arrays.equals(intValues, filledInt);
		System.out.println("intValues"+(b?"==":"!=")+"filledInt");
		
	}
	
	public static void main(String[] args){
		UsingArrays usingarrays = new UsingArrays();
		usingarrays.printArrays();
		usingarrays.printEquality();
		
		int location = usingarrays.searchForInt(5);
		System.out.println((location>=0?"Found 5 at elements "+location:"5 not found")+" in intValues");
		
		location = usingarrays.searchForInt(58797);
		System.out.println((location>=0?"Found 58797 at elements "+location:"58797 not found")+" in intValues");
		
		
	}
	
}
