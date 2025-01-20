package CLab2021;

import java.util.ArrayList;

public class tenLongestSubstring {
	static void longestSubstring(String str1, String str2) {
		ArrayList<Character> cs = new ArrayList<>();
		ArrayList<Character> ls = new ArrayList<>();
		for(int i = 0; i < str1.length(); i++) {
			for(int j = 0; j < str2.length(); j++) {
				int tempi = i, tempj = j;
				cs.clear();
				while(tempi<str1.length() && tempj < str2.length() && str1.charAt(tempi)==str2.charAt(tempj)){
					cs.add(str1.charAt(tempi));
					tempi++;
					tempj++;
				}
				if(cs.size() > ls.size()) {
					ls = new ArrayList<>(cs);
				}
			}
		}
		StringBuilder result = new StringBuilder();
	    	for (char c : ls) {
	    		result.append(c);
	        }		
		System.out.println(result);
		
	}
	
	public static void main(String[] args) {
		longestSubstring("abcdef", "ccddefg");
	}
}
