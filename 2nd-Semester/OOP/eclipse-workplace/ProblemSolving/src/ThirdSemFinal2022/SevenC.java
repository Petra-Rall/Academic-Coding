package ThirdSemFinal2022;

import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.FileWriter;
import java.io.FileReader;
import java.io.IOException;
import java.util.ArrayList;
import java.util.Collections;

public class SevenC {
    public static void main(String[] args) {
        //File names
        String inputFileName = "D:\\Academic-Coding\\2nd Semester\\OOP\\eclipse-workplace\\ProblemSolving\\src\\ThirdSemFinal2022\\data.txt";
        String outputFileName = "D:\\Academic-Coding\\2nd Semester\\OOP\\eclipse-workplace\\ProblemSolving\\src\\ThirdSemFinal2022\\reversed.txt";

        //Step 1: Create an ArrayList and read values from data.txt
        ArrayList<Double> values = new ArrayList<>();
        try (BufferedReader br = new BufferedReader(new FileReader(inputFileName))) {
            String line = br.readLine();
            if (line != null) {
                String[] numbers = line.split("\s+");
                for (String num : numbers) {
                    values.add(Double.parseDouble(num));
                }
            }
        } catch (IOException e) {
            System.out.println(e.getMessage());;
        }

        //Ensure the ArrayList has 10 elements
        if (values.size() != 10) {
            System.out.println("The input file does not contain exactly 10 numbers.");
            return;
        }

        // Step 2: Create a second ArrayList with reversed order
        ArrayList<Double> reversedValues = new ArrayList<>(values);
        Collections.reverse(reversedValues);

        // Step 3: Write the reversed ArrayList to reversed.txt
        try (BufferedWriter bw = new BufferedWriter(new FileWriter(outputFileName))) {
            for (Double value : reversedValues) {
                bw.write(value.toString() + " ");
            }
        } catch (IOException e) {
        	 System.out.println(e.getMessage());;
        }

        // Print the contents of both ArrayLists for verification
        System.out.println("Original values: " + values);
        System.out.println("Reversed values: " + reversedValues);
    }
}
