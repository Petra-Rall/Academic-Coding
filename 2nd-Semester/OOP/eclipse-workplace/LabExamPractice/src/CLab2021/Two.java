package CLab2021;

public class Two {
	public static void main(String[] args) {
		int a = 100, n = 50, term = 0, result = 0;
		for(int i = 0; i <= n; i++) {
			term = (a-i)*(a-i);
			
			if(i%2==0) {
				result += term;
			}
			else {
				result -= term;
			}
		}
		System.out.println(result);
	}
}
