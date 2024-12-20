class card{
	String name;
	String author;
	public void store(String name, String author){
		this.name = name;
		this.author = author;
	}
	
}

class LibraryCard extends card{
	LibraryCard(String n, String a){
		super.store(n, a);
	}
	public void show() {
		System.out.println(name+author);
	}
}

public class test{
	public static void main(String[] args){
		new LibraryCard("Ami topu", "Jafar").show();
	}
}