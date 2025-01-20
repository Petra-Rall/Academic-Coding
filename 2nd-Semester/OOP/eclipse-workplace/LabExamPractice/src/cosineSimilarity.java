import java.util.Scanner;
import java.util.HashMap;
import java.util.Map;

class similarityEstimation{
	Map<String, Integer> wordFreqEstimation(String str){
		Map<String, Integer> freqMap = new HashMap<String, Integer>();
		Integer count = null;
		
		String delim = " ";
		String[] token = str.split(delim);
		String word;
		
		for(int i = 0; i<token.length; i++) {
			word = token[i];
			count = freqMap.get(word);
			
			if(count == null) {
				count = 1;
			}
			else {
				count++;
			}
			freqMap.put(word, count);
			
			/*for(String wordd : token) {
				freqMap.put(wordd, freqMap.getOrDefault(wordd, 0)+1);
			}*/
		}
		return freqMap;
	}
	
	Double cosSim(String str1, String str2) {
		Map<String, Integer> docfreq1 = wordFreqEstimation(str1);
		Map<String, Integer> docfreq2 = wordFreqEstimation(str2);
		Double cosine_similarity;
		double mul = 0.0f;
		double fr1 = 0.0f;
		double fr2 = 0.0f;
		
		for(String key1: docfreq1.keySet()) {
			fr1 =+ Math.pow(docfreq1.get(key1), 2);
		}
		for(String key2: docfreq2.keySet()) {
			fr2 =+ Math.pow(docfreq2.get(key2), 2);
		}
		
		for(String key1: docfreq1.keySet()) {
			if(docfreq2.containsKey(key1)) {
				mul =+ docfreq1.get(key1)*docfreq2.get(key1);
			}
		}
		cosine_similarity = (Double) (mul/Math.sqrt(fr1*fr2));
		return cosine_similarity;
	}
	
}



public class cosineSimilarity {
	public static void main(String[] args) {
		similarityEstimation similarityEstimationObj = new similarityEstimation();
		Map<String, Integer> fMap = similarityEstimationObj.wordFreqEstimation("the best data science course in the best university");
		Map<String, Integer> fMap2 = similarityEstimationObj.wordFreqEstimation("the best course in university of science");
		System.out.println(fMap);
		System.out.println(fMap2);
		Double x = similarityEstimationObj.cosSim("the best data science course in the best university", "the best course in university of science");
		System.out.println(x);
	}
}
