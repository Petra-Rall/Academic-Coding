import java.io.*;
import java.util.Scanner;

public class FilePractice {
	public static void main(String[] args){
		Scanner scan = new Scanner(System.in);
		
			try(BufferedWriter writer = new BufferedWriter(new FileWriter("D:\\Academic-Coding\\2nd Semester\\OOP\\eclipse-workplace\\TheoryExam\\src\\info.txt"))) {
				String line;
				while((line = scan.nextLine())!="exit") {
					if(line.equals("exit")) {
						break;
					}
					writer.write(line);
					writer.newLine();
				}
			}
		
		catch(IOException e) {
			e.printStackTrace();
		}
		finally {
			scan.close();
		}
			
			try(BufferedReader reader = new BufferedReader(new FileReader("D:\\Academic-Coding\\2nd Semester\\OOP\\eclipse-workplace\\TheoryExam\\src\\info.txt"))){
				String line2;
				while((line2 = reader.readLine())!= null) {
					System.out.println(line2);
				}
			}
			catch(IOException e){
				e.printStackTrace();
			}
	}
}
