package OOPLabExam;

import java.io.*;
import java.util.*;

public class OneLab {
	public static void main(String[] args) {
		Map<Integer, Double> temps = new TreeMap<>();
		Map<Integer, Double> hum = new TreeMap<>();
		Map<Integer, Double> rain = new TreeMap<>();
		try(BufferedReader reader = new BufferedReader(new FileReader("D:\\Academic-Coding\\2nd-Semester\\OOP\\eclipse-workplace\\LabExamPractice\\src\\OOPLabExam\\datafile.txt"))){
			String line;
			while((line=reader.readLine())!=null) {
				String[] words = line.split("\\s+");
				Integer IDs = Integer.parseInt(words[0]);
				if(temps.get(IDs)==null) {
					temps.put(IDs, (double) 1);
				}
				else {
					temps.put(IDs, temps.get(IDs)+Double.parseDouble(words[2]));
				}
				
				if(hum.get(IDs)==null) {
					hum.put(IDs, (double) 1);
				}
				else {
					hum.put(IDs, hum.get(IDs)+Double.parseDouble(words[2]));
				}
				
				if(rain.get(IDs)==null) {
					rain.put(IDs, (double) 1);
				}
				else {
					rain.put(IDs, rain.get(IDs)+Double.parseDouble(words[2]));
				}
			}
		}
		catch(IOException e) {
			e.printStackTrace();
		}
		for(Integer IDs: temps.keySet()) {
			temps.put(IDs, temps.get(IDs)/365);
		}
		for(Integer IDs: hum.keySet()) {
			hum.put(IDs, hum.get(IDs)/365);
		}
		for(Integer IDs: rain.keySet()) {
			rain.put(IDs, rain.get(IDs)/365);
		}
		
		try(BufferedWriter br = new BufferedWriter(new FileWriter("D:\\Academic-Coding\\2nd-Semester\\OOP\\eclipse-workplace\\LabExamPractice\\src\\OOPLabExam\\temps.txt"))){
			br.write("DistrictID\t\tTemperature");
			br.newLine();
			for(Integer IDs: temps.keySet()) {
				br.write("\t"+IDs+"\t\t\t\t"+Math.round(temps.get(IDs)*100.0)/100.0);
				br.newLine();
			}
		}
		catch(IOException e) {
			e.printStackTrace();
		}
		
		try(BufferedWriter br = new BufferedWriter(new FileWriter("D:\\Academic-Coding\\2nd-Semester\\OOP\\eclipse-workplace\\LabExamPractice\\src\\OOPLabExam\\hum.txt"))){
			br.write("DistrictID\t\tHumidity");
			br.newLine();
			for(Integer IDs: hum.keySet()) {
				br.write("\t"+IDs+"\t\t\t"+Math.round(hum.get(IDs)*100.0)/100.0);
				br.newLine();
			}
		}
		catch(IOException e) {
			e.printStackTrace();
		}
		
		try(BufferedWriter br = new BufferedWriter(new FileWriter("D:\\Academic-Coding\\2nd-Semester\\OOP\\eclipse-workplace\\LabExamPractice\\src\\OOPLabExam\\rain.txt"))){
			br.write("DistrictID\t\tRain");
			br.newLine();
			for(Integer IDs: rain.keySet()) {
				br.write("\t"+IDs+"\t\t\t"+Math.round(rain.get(IDs)*100.0)/100.0);
				br.newLine();
			}
		}
		catch(IOException e) {
			e.printStackTrace();
		}
	}
}
