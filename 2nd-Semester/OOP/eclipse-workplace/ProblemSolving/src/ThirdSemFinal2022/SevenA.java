package ThirdSemFinal2022;

import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;

public class SevenA {

    public static void main(String[] args) {
        String fileName = "D:\\Academic-Coding\\2nd Semester\\OOP\\eclipse-workplace\\ProblemSolving\\src\\ThirdSemFinal2022\\numbers.txt";

        try (BufferedReader br = new BufferedReader(new FileReader(fileName))) {
            String line;
            while ((line = br.readLine()) != null) {
                // Split the line by commas
                String[] numbers = line.split(",");
                int sum = 0;
                
                // Sum the numbers
                for (String num : numbers) {
                    sum += Integer.parseInt(num.trim());
                }
                
                // Print the result
                System.out.println("Input: " + line + " Output: " + sum);
            }
        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}
