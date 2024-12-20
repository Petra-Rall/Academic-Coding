import java.util.*;
public class UsingToArray {
	public UsingToArray() {
		String colors[]= {"black", "red", "purple"};
		List list = new LinkedList(Arrays.asList(colors));
		
		list.add("white");
		list.addFirst("pink");
		list.addLast("cyan");
		list.add(3, "green");
		
		colors = (String[])list.toArray(new String[list.size()]);
		
		System.out.println("colors: ");
		
		for(int i=0;i<colors.length;i++) {
			System.out.println(colors[i]);
		}
	}
	public static void main(String[] args){
		new UsingToArray();
	}
}
