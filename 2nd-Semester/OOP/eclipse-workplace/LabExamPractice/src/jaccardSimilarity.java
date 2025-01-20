import java.util.HashMap;
import java.util.HashSet;
import java.util.Map;
import java.util.Scanner;
import java.util.Set;

public class jaccardSimilarity {
	
	class wordFrequency{
		Map<String, Integer> calculate(String str){
			Map<String, Integer> freqMap = new HashMap<String, Integer>();
			String[] token1 = str.split("\\s+");
			String word;
			Integer count = null;
			for(int i = 0; i< token1.length; i++) {
				word = token1[i];
				count = freqMap.get(word);
				
				if(count == null) {
					count = 1;
				}
				else {
					count++;
				}
				freqMap.put(word, count);
			}
			return freqMap;
		}
	}
	
	class jacSim{
		Map<String, Integer> freqMap1 = new HashMap<String, Integer>();
		Map<String, Integer> freqMap2 = new HashMap<String, Integer>();	
		jacSim(String str1, String str2){
			wordFrequency wFObj = new wordFrequency();
			freqMap1 = wFObj.calculate(str1);
			freqMap2 = wFObj.calculate(str2);
		}
		double calculate() {
			Set<String> set1 = new HashSet<String>();
			Set<String> set2 = new HashSet<String>();
			for(String key1: freqMap1.keySet()) {
				if(freqMap2.containsKey(key1)) {
					set1.add(key1);
				}
			}
			for(String key1: freqMap1.keySet()) {
				set2.add(key1);
			}
			for(String key2: freqMap2.keySet()) {
				set2.add(key2);
			}
			
			int x = set1.size();
			int y = set2.size();
			
			return (double)x/y;
		}
	}
	
	public static void main(String[] args) {
		String str1 = "Data is the new oil of the digital economy";
		String str2 = "Data is a new oil";
		
		jaccardSimilarity j = new jaccardSimilarity();
		jacSim jacSimObj = j.new jacSim(str1,str2);
		
		System.out.println(jacSimObj.calculate());
		
	}
}
