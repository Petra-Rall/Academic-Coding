import java.io.*;
import java.io.IOException;

public class OddEvenFile10 {
	public static void main(String[] args) {
		File inFile = new File("D:/num.txt");
		File oddFile = new File("D:/odd.txt");
		File evenFile = new File("D:/even.txt");
		BufferedReader ins = null;
		FileWriter odd = null;
		FileWriter even = null;
		try {
			ins = new BufferedReader(new FileReader(inFile));
			odd = new FileWriter(oddFile);
			even = new FileWriter(evenFile);
			String intr = "";
			String filedata = "";
			while ((intr = ins.readLine()) != null) {
				filedata += intr + " ";
			}
			String delims = " ";
			String[] token = filedata.split(delims);
			int word;
			for (int i = 0; i < token.length; i++) {
				word = Integer.parseInt(token[i]);
				if (word % 2 == 0)
					even.write(word + " ");
				else
					odd.write(word + " ");
			}

		} catch (IOException e) {
			System.out.println(e);
			System.exit(-1);
		} finally {
			try {
				ins.close();
				odd.close();
				even.close();
			} catch (IOException e) {
				System.out.println(e);
			}
		}
	}
}