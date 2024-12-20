class sqrtBase{
	double x;
	double sqrt(double x){
		return Math.sqrt(x);
	}
}

class AA extends sqrtBase{
	double a;
	AA(double t){
		a = sqrt(24*t/2);
	}
}

class BB extends sqrtBase{
	double b;
	BB(double x, double t){
		b = sqrt(x*t) + 100;
	}
}

class CC extends sqrtBase{
	double c;
	CC(AA objA, BB objB){
		c = sqrt(objA.a/objB.b);
	}
}

class DD extends sqrtBase{
	double d;
	DD(CC objC){
		d = sqrt(objC.c);
	}
}


public class HierarchicalTest {
	public static void main(String[] args){
		AA objA = new AA(4.0);
		BB objB = new BB(16.0,4.0);
		CC objC = new CC(objA,objB);
		DD objD = new DD(objC);
		
		System.out.println(objD.d);
		
	}
}
