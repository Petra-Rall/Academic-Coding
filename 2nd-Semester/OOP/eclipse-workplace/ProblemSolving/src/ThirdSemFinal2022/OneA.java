package ThirdSemFinal2022;

class Circle {
    double radius;

    Circle(double r) {
        radius = r;
    }

    double area() {
        return 3.14 * radius * radius;
    }
}

class ColoredCircle extends Circle {
    String color;

    ColoredCircle(double r, String c) {
        super(r);
        color = c;
    }

    @Override
    double area() {
        return super.area();
    }

    void displayColor() {
        System.out.println("Color of colored circle: " + color);
    }
}

public class OneA {
    public static void main(String[] args) {
        Circle circle = new Circle(5.0);
        System.out.println("Area of circle: " + circle.area());

        Circle coloredCircle = new ColoredCircle(5.0, "red");
        System.out.println("Area of colored circle: " + coloredCircle.area());
        ((ColoredCircle) coloredCircle).displayColor();
        
        }
}

