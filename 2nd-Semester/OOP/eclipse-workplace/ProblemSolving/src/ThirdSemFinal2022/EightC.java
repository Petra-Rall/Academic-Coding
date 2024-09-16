package ThirdSemFinal2022;

class Card {
    String title;
    String edition;

    public void store(String title, String edition) {
        this.title = title;
        this.edition = edition;
    }

    public void show() {
        System.out.println("Title: " + title);
        System.out.println("Edition: " + edition);
    }
}

class LibraryCard extends Card {
    String author;

    public void store(String title, String edition, String author) {
        super.store(title, edition);
        this.author = author;
    }

    @Override
    public void show() {
        super.show();
        System.out.println("Author: " + author);
    }
}

public class Main {
    public static void main(String[] args) {
        LibraryCard card = new LibraryCard();
        card.store("Effective Java", "3rd Edition", "Joshua Bloch");
        card.show();
    }
}
