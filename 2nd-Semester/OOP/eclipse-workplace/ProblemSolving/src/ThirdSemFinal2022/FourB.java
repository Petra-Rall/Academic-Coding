package ThirdSemFinal2022;

interface InterfaceA {
    void methodA();
}

interface InterfaceB {
    void methodB();
}


class ImplementingClass implements InterfaceA, InterfaceB {
    @Override
    public void methodA() {
        System.out.println("Implementation of methodA from InterfaceA");
    }

    @Override
    public void methodB() {
        System.out.println("Implementation of methodB from InterfaceB");
    }

}

public class FourB {
    public static void main(String[] args) {
        ImplementingClass obj = new ImplementingClass();
        obj.methodA();
        obj.methodB();
    }
}
