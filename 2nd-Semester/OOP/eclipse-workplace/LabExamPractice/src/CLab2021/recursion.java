package CLab2021;

public class recursion {
	static int f(int n) {
		if(n == 0) return 1;
		else{
			return n*f(n-1)+n;
		}
	}
	
	static boolean check(int x) {
		for(int i = 0; i <=x; i++) {
			if(x == f(i)) return true;
		}
		return false;
	}
	
	public static void main(String[] args) {
		System.out.println(check(50));
	}
}
