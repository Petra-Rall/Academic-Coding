package V1OOPProgrammingLab;

import java.io.*;
import java.util.ArrayList;

public class TwoV1 {
	class Words{
		String[] words;
		ArrayList<String> largestWords = new ArrayList<>();
		void largestWord(){
			try(BufferedReader reader = new BufferedReader(new FileReader("D:\\Academic-Coding\\2nd-Semester\\OOP\\eclipse-workplace\\LabExamPractice\\src\\V1OOPProgrammingLab\\strings.txt"))){
				String line;
				while((line = reader.readLine())!= null) {
					words = line.split("\\s+");
					String largest = "";
					for(int i = 0; i < words.length; i++) {
						if(words[i].length() > largest.length()) {
							largest = words[i];
						}
					}
					largestWords.add(largest);
				}
				for(int i = 0; i < largestWords.size(); i++)
				System.out.println("Largest word: "+largestWords.get(i));
			}
			catch(IOException e) {
				e.printStackTrace();
			}
		}
	}
	public static void main(String[] args) {
		TwoV1 obj = new TwoV1();
		Words wObj = obj.new Words();
		wObj.largestWord();
	}
}
