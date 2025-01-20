import java.io.*;
import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

public class FileProblem {
	
	public static void main(String[] args) {
		String filePath1 = "D:\\Academic-Coding\\2nd-Semester\\OOP\\eclipse-workplace\\LabExamPractice\\src\\oldmast.txt";
		String filePath2 = "D:\\Academic-Coding\\2nd-Semester\\OOP\\eclipse-workplace\\LabExamPractice\\src\\trans.txt";
		FileProblem f = new FileProblem();
		FileMatch fileMatchObj = f.new FileMatch(filePath1, filePath2);
		
		fileMatchObj.read();
		
		String outPath = "D:\\Academic-Coding\\2nd-Semester\\OOP\\eclipse-workplace\\LabExamPractice\\src\\newmast.txt";
		String errorPath = "D:\\Academic-Coding\\2nd-Semester\\OOP\\eclipse-workplace\\LabExamPractice\\src\\log.txt";;
		fileMatchObj.newRecord(outPath, errorPath);
	}
	
	class FileMatch{
		String filePath1, filePath2;
		Map<String, Double> map = new HashMap<String, Double>();
		Map<String, Double> map2 =  new HashMap<String, Double>();
		FileMatch(String filePath1, String filePath2){
			this.filePath1 = filePath1;
			this.filePath2 = filePath2;
			this.map = map;
			this.map2 = map2;
		}
		void read(){
			
			System.out.println("oldmast.txt");
			try(BufferedReader reader = new BufferedReader(new FileReader(filePath1))){
				String line;
				while((line = reader.readLine())!= null) {
					System.out.println(line);
				}
			}
			catch(IOException e){
				e.printStackTrace();
			}
			
			System.out.println("trans.txt");
			try(BufferedReader reader = new BufferedReader(new FileReader(filePath2))){
				String line;
				while((line = reader.readLine())!= null) {
					System.out.println(line);
				}
			}
			catch(IOException e){
				e.printStackTrace();
			}
		}
		
		void newRecord(String outPath, String errorPath){
			map = new HashMap<String, Double>();
			try(BufferedReader reader = new BufferedReader(new FileReader(filePath1))){
				String line;
				while((line = reader.readLine())!= null) {
					String[] words;
					words = line.split("\\s+");
					map.put(words[0], Double.parseDouble(words[2]));
					
				}
			}
			catch(IOException e){
				e.printStackTrace();
			}
			
			
			map2 = new HashMap<String, Double>();
			Map<String, Double> mapOut = new HashMap<String, Double>();
			Map<String, Double> mapLog = new HashMap<String, Double>();
			try(BufferedReader reader = new BufferedReader(new FileReader(filePath2))){
				String line;
				while((line = reader.readLine())!= null) {
					String[] words;
					words = line.split("\\s+");
					if(!map2.containsKey(words[0])) {
						map2.put(words[0], Double.parseDouble(words[1]));
					}
					else {
						map2.put(words[0], map2.get(words[0])+Double.parseDouble(words[1]));
					}
				}
			}
			catch(IOException e){
				e.printStackTrace();
			}
			
			for(String id: map2.keySet()) {
				if(map.containsKey(id)) {
					Double balance1 = map.get(id);
					Double balance2 = map2.get(id);
					Double balance = balance1 + balance2;
					mapOut.put(id,balance);
				}
				else if(!map.containsKey(id)) {
					mapLog.put(id, map2.get(id));
				}
			}
			for(String id: map.keySet()) {
				if(!map2.containsKey(id)) {
					mapOut.put(id, map.get(id));
				}
			}
			
			try(BufferedWriter br = new BufferedWriter(new FileWriter(outPath))){
				for(String id: mapOut.keySet()) {
					br.write(id+" "+mapOut.get(id));
					br.newLine();
				}
			}
			catch(IOException e){
				e.printStackTrace();
			}
			
			try(BufferedWriter br = new BufferedWriter(new FileWriter(errorPath))){
				for(String id: mapLog.keySet()) {
					br.write("Unmatched transaction for A/C no. "+id);
					br.newLine();
				}
			}
			catch(IOException e){
				e.printStackTrace();
			}
		}
	}
}