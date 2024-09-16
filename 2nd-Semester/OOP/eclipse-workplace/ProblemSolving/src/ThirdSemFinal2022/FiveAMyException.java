package ThirdSemFinal2022;

import java.util.Scanner;

public class FiveAMyException {
    public static void main(String[] args) {
        int a[] = new int[5];
        try {
        	a[5]=10;
        	Integer.parseInt("abc");
        	Scanner scan = new Scanner(System.in);
        	int x=scan.nextInt();
        }
        catch(ArrayIndexOutOfBoundsException e) {
        	System.out.println(e.getMessage());
        }
    }
}