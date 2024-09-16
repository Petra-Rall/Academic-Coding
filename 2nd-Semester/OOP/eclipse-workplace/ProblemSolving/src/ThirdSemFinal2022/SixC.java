package ThirdSemFinal2022;

// Class B1 which class A1 needs to extend
class B1 {
    void someMethod() {
        System.out.println("Method in class B");
    }
}

// Class A1 which extends B1 and implements Runnable
class A1 extends B1 implements Runnable {
    @Override
    public void run() {
        someMethod();
        System.out.println("Thread A is running");
    }
}

public class SixC {
    public static void main(String[] args) {
        A1 obj = new A1();
        Thread thread = new Thread(obj);
        thread.start();
    }
}
