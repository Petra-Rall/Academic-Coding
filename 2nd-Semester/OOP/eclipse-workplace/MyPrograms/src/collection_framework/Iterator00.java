package collection_framework;

import java.util.Iterator;
import java.util.Set;
import java.util.HashSet;
import java.util.TreeSet;

public class Iterator00 {
	public static void main(String[] args) {
		Set<String> set = new HashSet<String>();
		set.add("Sumaiya");
		set.add("Nusaiba");
		set.add("Nasif");
		
		Iterator<String> itr = set.iterator();
		while (itr.hasNext()) {
			String name = itr.next();
			System.out.println("The name is "+ name);
			
		}
		Set<Integer> scores = new TreeSet<Integer>();
		scores.add(94);
		scores.add(38);
		scores.add(87);
		scores.add(43);
		scores.add(72);
		
		Iterator<Integer> it = scores.iterator();
		while(it.hasNext()) {
			int score = it.next();
			System.out.println("The score is "+ score);
			
			if(score<60) {
				it.remove();
			}
		}
		System.out.println(scores);
	}
}