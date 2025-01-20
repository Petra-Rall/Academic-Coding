package CLabFinal;

import java.util.ArrayList;

public class SixJaroSimilarity {
	public static void main(String[] args) {
		String str1 = "WINKLER";
		String str2 = "WELFARE";
		double m = 0, n = 0;
		int s1 = str1.length(), s2 = str2.length();
		double t = 0, jaroSim = 0;
		ArrayList<Character> c1 = new ArrayList<>();
		ArrayList<Character> c2 = new ArrayList<>();
		
		boolean[] s1Matches = new boolean[s1];
		boolean[] s2Matches = new boolean[s2];
		
		for(int i = 0; i < str1.length(); i++) {
			for(int j = 0; j < str2.length(); j++) {
				if(str1.charAt(i) == str2.charAt(j) && (s2Matches[j] != true)) {
					s1Matches[i] = true;
					s2Matches[j] = true;
					m++;
					break;
				}
				
			}
		}
		
		for(int i = 0; i < s1; i++) {
			if(s1Matches[i]) {
				c1.add(str1.charAt(i));
			}
		}
		for (int j = 0; j < s2; j++) {
            if (s2Matches[j]) {
                c2.add(str2.charAt(j));
            }
        }
		for (int i = 0; i < c1.size(); i++) {
            if (c1.get(i) != c2.get(i)) {
                n++;
            }
        }
		t = n/2.0;
		if(m!=0) {
			jaroSim = ((m/s1)+(m/s2)+((m-t)/m))/3.0;
		}
		
		System.out.println(jaroSim);
	}
}
