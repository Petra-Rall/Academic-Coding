package CLabFinal;

public class SemiPrime {
	int[] prime = new int[100];
	int count = 0;
	boolean isPrime(int n){
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
	
	
	boolean isSemiPrime(int n) {
		for(int i = 2; i <= n/2; i++) {
			if(isPrime(i) && n%i == 0) {
				int otherFactor = n / i;
				if(isPrime(otherFactor)) {
					return true;
				}
			}
		}
		return false;
	}
	
	void preCalculate(int n) {
		System.out.println("Primes: ");
		for(int i = 2; i <=n; i++) {
			if(isPrime(i)) {
				prime[count] = i;
				count++;
				System.out.println(i);
			}
		}
		System.out.println("SemiPrimes: ");
		for(int i = 2; i <=n; i++) {
			if(isSemiPrime(i)) {
				System.out.print(i+", ");
			}
		}
	}
	
	public static void main(String[] args) {
		SemiPrime obj = new SemiPrime();
		System.out.println(obj.isPrime(5));
		obj.preCalculate(100);
		System.out.println(obj.isSemiPrime(25));
	}
}
