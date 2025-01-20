package CLabFinal;

import java.util.ArrayList;
import java.util.Collections;

public class medianDiff {
	static boolean isPrime(int n){
		if(n <= 1) {
			return false;
		}
		for(int i = 2; i*i <=n; i++) {
			if(n%i == 0) {
				return false;
			}
		}
		return true;
	}
	
	static String invert(String x, int p, int n) {
		StringBuilder binaryString = new StringBuilder(x);
		for(int i = p-1; i < p-1+n; i++) {
			if(x.charAt(i) == '0') {
				binaryString.setCharAt(i, '1');
			}
			else {
				binaryString.setCharAt(i, '0');
			}
		}
		return binaryString.toString();
	}
	
	public static void main(String[] args) {
		String str = "17 32 21 13 52 18";
		String[] numbers = str.split(" ");
		int c = numbers.length;
		int[] number = new int[c];
		ArrayList<Integer> primes = new ArrayList<>();
		ArrayList<Integer> composites= new ArrayList<>();
		int largestPrime = 0, medianComposite = 0;
		for(int i = 0; i < c; i++) {
			number[i] = Integer.parseInt(numbers[i]);
		}
		for(int i = 0; i < c; i++) {
			if(isPrime(number[i])) {
				primes.add(number[i]);
			}
			else {
				composites.add(number[i]);
			}
		}
		
		for(int i = 0; i < primes.size(); i++) {
			if(primes.get(i) > largestPrime) {
				largestPrime = primes.get(i);
			}
		}
		Collections.sort(composites);
		int s = composites.size();
		for(int i = 0; i < s; i++) {
			if(s%2 == 0) {
				medianComposite = (composites.get(s/2) > composites.get((s/2)-1) ? composites.get(s/2): composites.get((s/2)+1));
			}
			else {
				medianComposite = composites.get((s/2));
			}
		}
		System.out.println(composites);
		System.out.println(Math.abs(medianComposite - largestPrime));
		
		String bits = "1001101";
		System.out.println(invert(bits, 2, 3));
	}
}
