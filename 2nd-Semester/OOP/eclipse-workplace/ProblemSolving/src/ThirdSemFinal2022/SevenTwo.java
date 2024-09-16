package ThirdSemFinal2022;

import java.util.HashMap;
import java.util.Map;

public class SevenTwo {

    public static void main(String[] args){
        Map<Integer, String> books = new HashMap<>();

        //Adding books to the HashMap
        books.put(101, "Structured Programming");
        books.put(102, "Algorithms");
        books.put(103, "Operating Systems");

        //Display all books
        System.out.println("Books in the store:");
        for (Map.Entry<Integer, String> entry : books.entrySet()) {
            System.out.println("ID: " + entry.getKey() + " Title: " + entry.getValue());
        }

        //Searching for a book by ID
        int searchId = 102;
        if (books.containsKey(searchId)) {
            System.out.println("Book found with ID " + searchId + ": " + books.get(searchId));
        } else {
            System.out.println("Book not found with ID " + searchId);
        }
    }
}

