import java.io.*;
import java.util.HashMap;
import java.util.Scanner;

public class MapTest {
	public static void main(String[] args){
		HashMap<Integer, String> map = new HashMap<Integer, String>();
		map.put(101,"SP");
		map.put(102,"Al");
		map.put(103,"OP");
		
		String n;
		Integer i;
		Scanner scan = new Scanner(System.in);
		i = scan.nextInt();
		n = map.get(i);
		System.out.println(n);
	}
}
