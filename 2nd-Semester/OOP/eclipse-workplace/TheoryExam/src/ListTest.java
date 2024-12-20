import java.util.*;
public class ListTest {
	private static final String[] colors = {"black", "yellow", "green", "blue", "violet", "silver"};
	private static final String colors2[] = {"gold", "white", "brown", "blue", "gray", "silver"};
	
	public ListTest() {
		List link = new LinkedList();
		List link2 = new LinkedList();
		
		for(int i = 0; i<colors.length; i++) {
			link.add(colors[i]);
			link2.add(colors2[i]);
		}
		
		link.addAll(link2);
		link2 = null;
		
		printList(link);
		
		uppercaseStrings(link);
		
		printList(link);
		
		System.out.println("\nDeleting elemenrs 4 to 6....");
		removeItems(link,4,7);
		
		printList(link);
		
		printReversedList(link);
	}
	
	public void printList(List list) {
		System.out.println("\nlist: ");
		
		for(int i = 0; i<list.size(); i++) {
			System.out.println(list.get(i)+" ");
		}
		System.out.println();
	}
	private void uppercaseStrings(List list) {
		ListIterator  itr = list.listIterator();
		
		while(itr.hasNext()) {
			Object obj = itr.next();
		
			if(obj instanceof String) {
				itr.set(((String)obj).toUpperCase());
			}
		}
	}
	
	private void removeItems(List list, int start, int end) {
		list.subList(start,end).clear();
	}
	
	private void printReversedList(List list) {
		ListIterator itr = list.listIterator(list.size());
		
		System.out.println("\nReversed List: ");
		
		while(itr.hasPrevious()) {
			System.out.println(itr.previous()+" ");
		}
	}
	
	public static void main(String[] args){
		new ListTest();
	}
}
