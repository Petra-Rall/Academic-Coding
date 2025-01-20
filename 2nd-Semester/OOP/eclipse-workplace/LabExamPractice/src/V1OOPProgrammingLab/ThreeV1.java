package V1OOPProgrammingLab;

import java.io.*;
import java.util.ArrayList;

public class ThreeV1 {
	class Doc{
		ArrayList<String> annote1 = new ArrayList<>();
		ArrayList<String> annote2 = new ArrayList<>();
		int a = 0, b = 0, c = 0, d = 0, row1 = 0, row2 = 0, col1 = 0, col2 = 0, total = 0;
		double P_F = 0, P_A = 0, P_0 = 0, P_e = 0, cohenKappa = 0.2f;
		void readDoc(){
			try(BufferedReader reader = new BufferedReader(new FileReader("D:\\Academic-Coding\\2nd-Semester\\OOP\\eclipse-workplace\\LabExamPractice\\src\\V1OOPProgrammingLab\\tweets.txt"))){
				String line;
				int i = 0;
				while((line = reader.readLine())!=null) {
					String[] words = line.split("\t");
					annote1.add(words[1]);
					annote2.add(words[2]);
					i++;
				}
			}
			catch(IOException e) {
				e.printStackTrace();
			}
		}
		void CohenKappa() {
			for(int i = 0; i< annote1.size(); i++) {
				if(annote1.get(i).equals("Favor") && annote2.get(i).equals("Favor")) {
					a++;
				}
				else if(annote1.get(i).equals("Favor") && annote2.get(i).equals("Against")) {
					b++;
				}
				else if(annote1.get(i).equals("Against") && annote2.get(i).equals("Favor")) {
					c++;
				}
				else if(annote1.get(i).equals("Against") && annote2.get(i).equals("Against")) {
					d++;
				}
			}
			row1 = a + b;
			row2 = c + d;
			col1 = a + c;
			col2 = b + d;
			total = row1 + row2;
			P_0 = (double)(a+d)/total;
			P_F = ((double)row1/total)*((double)col1/total);
			P_A = ((double)row2/total)*((double)col2/total);
			P_e = P_F + P_A;
			double g = 3.56;
			cohenKappa = (P_0-P_e)/(1-P_e);
			
			System.out.println(Math.round(cohenKappa*100.0)/100.0);
			System.out.println(String.format("%.1f", g));
		}
	}
	public static void main(String[] args) {
		ThreeV1 obj = new ThreeV1();
		Doc dObj = obj.new Doc();
		dObj.readDoc();
		dObj.CohenKappa();
	}
}
