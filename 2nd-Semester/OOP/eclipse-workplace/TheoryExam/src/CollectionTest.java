import java.awt.Color;
import java.util.*;
public class CollectionTest {
	private static final String colors[] = {"red", "white", "blue"};
	
	public CollectionTest() {
		List list = new ArrayList();
		
		list.add(Color.MAGENTA);
		
		for(int i = 0; i<colors.length; i++) {
			list.add(colors[i]);
		}
		
		list.add(Color.CYAN);
		
		System.out.println("\nArrayList: ");
		
		for(int i = 0; i<list.size(); i++) {
			System.out.println(list.get(i)+" ");
		}
		
		removeStrings(list);
			
		System.out.println("\nAfter calling removeString");
		
		for(int i = 0; i<list.size(); i++) {
			System.out.println(list.get(i)+" ");
		}
	}
	
	private void removeStrings(Collection collection) {
		Iterator itr = collection.iterator();
		
		while(itr.hasNext()) {
			if(itr.next() instanceof String) {
				itr.remove();
			}
		}
	}
	
	public static void main(String[] args){
		new CollectionTest();
	}
}
