package CF_Class;

import java.util.Collections;
import java.util.List;
import java.util.ArrayList;

public class CollectionTest {

	public static void main(String[] args) {
		List<String> a1=new ArrayList<>();
		a1.add("mango");
		a1.add("grapes");
		a1.add("orange");
		for(String fruit:a1) {
			System.out.println(fruit);
		}
		System.out.println();
		
		Collections.sort(a1);
		for(String fruit:a1) {
			System.out.println(fruit);
		}
		System.out.println();
		
		String key="mango";
		System.out.println("\nSearching for: "+key);
		int result=Collections.binarySearch(a1,key);
		System.out.println(result>=0?"Found at index: "+result: "Not Found("+result+")");

	}

}