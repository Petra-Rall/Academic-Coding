package CLab2021;

public class threeKSmooth {
	static boolean isPrime(int n) {
		if(n<=1) return false;
		for(int i = 2; i*i<=n; i++) {
			if(n%i==0) return false;
		}
		return true;
	}
	
	static boolean isKSmooth(int x, int k) {
			for(int i = 2; i<=x; i++) {
				while(x%i == 0) {
					if(isPrime(i) && i>k) {
						return false;
					}
					x/=i;
				}
			}
			return true;
	}
	
	public static void main(String[] args) {
		System.out.println(isKSmooth(64,2));
	}
}
