import java.util.*;
public final class B_Map {
	public static void main(String[] args) {
		Map <String, Integer> ages = new TreeMap<String, Integer>();
		ages.put("Joe", 57);
		ages.put("Geneva", 2);
		ages.put("Vicki", 19);
		
		for(String name: ages.keySet()) {
			int age = ages.get(name);
			System.out.println(name + " -> " +age);
		}
		System.out.println(ages.values());
		System.out.println(ages.toString());
		System.out.println(ages.isEmpty());
		System.out.println(ages.size());
		
		Map <String, Integer> ages2 = new TreeMap<String, Integer>();
		ages2.putAll(ages);
		ages2.put("Geneva", 16);
		System.out.println(ages2.equals(ages));
		for(String name: ages2.keySet()) {
			int age = ages2.get(name);
			System.out.println(name+" -> "+age);
		}
	}
}
