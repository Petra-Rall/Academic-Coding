package V2OOPProgrammingLab;

import java.io.*;
import java.util.*;

public class OneV2 {
	class Doc{
		Map<String, String> salaryMap = new TreeMap<>();
		void read() {
			try(BufferedReader reader = new BufferedReader(new FileReader("D:\\Academic-Coding\\2nd-Semester\\OOP\\eclipse-workplace\\LabExamPractice\\src\\V2OOPProgrammingLab\\playerSalary.txt"))){
				String line;
				while((line=reader.readLine())!= null) {
					String[] words = line.split("\t");
					salaryMap.put(words[0], words[1]);
				}
				for(String p: salaryMap.keySet()) {
					System.out.println(p+" : "+salaryMap.get(p));
				}
			}
			catch(IOException e) {
				e.printStackTrace();
			}
		}
		void increase(String player, Integer salary) {
			Integer newSalary = Integer.parseInt(salaryMap.get(player)) + salary;
			salaryMap.put(player, String.valueOf(newSalary));
			try(BufferedWriter br = new BufferedWriter(new FileWriter("D:\\Academic-Coding\\2nd-Semester\\OOP\\eclipse-workplace\\LabExamPractice\\src\\V2OOPProgrammingLab\\playerSalary.txt"))){
				for(String p: salaryMap.keySet()) {
					br.write(p+"\t"+salaryMap.get(p));
					br.newLine();
				}
			}
			catch(IOException e) {
				e.printStackTrace();
			}
		}
	}
	public static void main(String[] args) {
		OneV2 obj = new OneV2();
		Doc dObj = obj.new Doc();
		dObj.read();
		dObj.increase("Player A", 50000);
	}
}
