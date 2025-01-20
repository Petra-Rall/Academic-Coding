package V1OOPProgrammingLab;

import java.io.*;
import java.util.*;

public class OneV1 {
	class course{
		String courseName;
		String[] stdIDs;
		Map<String, String[]> courseMap = new HashMap<String, String[]>();
		course() {
			try(BufferedReader reader = new BufferedReader(new FileReader("D:\\Academic-Coding\\2nd-Semester\\OOP\\eclipse-workplace\\LabExamPractice\\src\\V1OOPProgrammingLab\\course.txt"))){
				String line;
				int i = 0;
				while((line=reader.readLine())!= null) {
					String[] elements = line.split("\t");
					this.courseName = elements[0];
					this.stdIDs = elements[1].split(", ");
					i++;
				}
				courseMap.put(courseName, stdIDs);
			}
			catch(IOException e){
				e.printStackTrace();
			}
		}
		void readStds(String courseName) {
			String[] stds = courseMap.get(courseName);
			for(int i = 0; i < stds.length; i++) {
				System.out.println(stds[i]);
			}
		}
		void readAll() {
			for(String cN: courseMap.keySet()) {
				String[] stds = courseMap.get(cN);
				System.out.print(cN + " : ");
				for(int i = 0; i < stds.length; i++) {
					System.out.print(stds[i]);
					if(i < stds.length - 1) {
						System.out.print(", ");
					}
				}
			}
		}
	}
	
	public static void main(String[] args) {
		OneV1 oneObj = new OneV1();
		course cObj = oneObj.new course();
		cObj.readStds("CSE312");
		cObj.readAll();
	}
}
