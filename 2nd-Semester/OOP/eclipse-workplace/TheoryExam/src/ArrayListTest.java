import java.io.*;
import java.util.ArrayList;

public class ArrayListTest {
	public static void main(String[] args){
		ArrayList<Integer> list= new ArrayList<Integer>();
		
		try(BufferedReader reader = new BufferedReader(new FileReader("D:\\Academic-Coding\\2nd Semester\\OOP\\eclipse-workplace\\TheoryExam\\src\\input.txt"))){
			String line;
			int sum;
			while((line=reader.readLine())!=null) {
				sum = 0;
				String[] s = line.split(",");
				for(String num: s) {
					list.add(Integer.parseInt(num.trim()));
					for(int i=0; i<list.size(); i++) {
						sum += list.get(i);
						list.remove(i);
					}
				}
				System.out.println(sum);
			}
		}
		catch(IOException e) {
			e.printStackTrace();
		}
	}
}
