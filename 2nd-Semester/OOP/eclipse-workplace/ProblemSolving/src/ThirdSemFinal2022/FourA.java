package ThirdSemFinal2022;

class Equation {
    public double calculateM(double t, double x) {
        return Math.sqrt(Math.sqrt((24 * t / 2) / (Math.sqrt(x * t) + 100)));
    }
}

class T extends Equation {
    public double getT() {
        return 4;
    }
}


class X extends Equation {
    public double getX() {
        return 16;
    }
}

public class FourA {
    public static void main(String[] args) {
        T objT = new T();
        X objX = new X();

        double t = objT.getT();
        double x = objX.getX();

        Equation equation = new Equation();
        double m = equation.calculateM(t, x);

        System.out.println("Estimated value of m: " + m);
    }
}
