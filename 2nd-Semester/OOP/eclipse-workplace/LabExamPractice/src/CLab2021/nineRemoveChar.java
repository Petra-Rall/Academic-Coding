package CLab2021;

public class nineRemoveChar {
	static void removeChar(String str, char ch) {
		char[] parts = str.toCharArray();
		int index = 0;
		for(int i = 0; i < parts.length; i++) {
			if(parts[i] !=(ch)) {
				parts[index++]= parts[i];
			}
		}
		while (index < parts.length) {
			parts[index++] = '\0';
		}
		for(int i = 0; i < parts.length; i++) {
			System.out.print(parts[i]);
		}
	}
	public static void main(String[] args) {
		removeChar("abcdcec", 'c');
	}
}
