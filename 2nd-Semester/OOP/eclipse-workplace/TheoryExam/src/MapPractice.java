import java.util.*;
public class MapPractice {
	public static void main(String[] args){
		HashMap<Integer, String> hmap = new HashMap<Integer, String>();
		TreeMap<Integer, String> tmap = new TreeMap<Integer, String>();
		LinkedHashMap<Integer, String> lmap = new LinkedHashMap<Integer, String>();
		
		hmap.put(101,"Data");
		hmap.put(102, "Alg");
		
		tmap.put(101,"Data");
		tmap.put(102, "Alg");
		
		lmap.put(102, "Alg");
		lmap.put(101,"Data");
		lmap.put(103,"Program");
		
		System.out.println("hmap:");
		for(Integer s: hmap.keySet()) {
			System.out.println(hmap.get(s));
		}
		
		System.out.println("tmap:");
		for(Integer s: tmap.keySet()) {
			System.out.println(tmap.get(s));
		}
		
		System.out.println("lmap:");
		for(Integer s: lmap.keySet()) {
			System.out.println(lmap.get(s));
		}
		
		lmap.remove(101);
		
		if(hmap.containsKey(101) && lmap.containsKey(101)) {
			if(hmap.get(101)==lmap.get(101)) {
				System.out.println("hmap 101 match lmap 101!");
			}
			else {
				System.out.println("hmap 101 does not match lmap 101!");
			}
		}
		else {
			System.out.println("101 not found in lmap");
		}
		
		System.out.println(tmap.size());
		tmap.clear();
		
		System.out.println(tmap.size());
		
		if(tmap.isEmpty()) {
			tmap.putAll(lmap);
		}
		
		for(Integer s: tmap.keySet()) {
			System.out.println(tmap.get(s));
		}
		
		if(tmap.equals(lmap)) {
			System.out.println("lmap added to tmap sucessfully!");
		}
		
		System.out.println(lmap.values());
		System.out.println(lmap.keySet());
		System.out.println(lmap.toString());
	}
}
