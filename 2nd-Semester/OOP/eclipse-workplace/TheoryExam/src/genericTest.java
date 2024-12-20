import java.util.ArrayList;

public class genericTest {
	class Store<T>{
		ArrayList<T> list = new ArrayList<>();
		void add(T item) {
			list.add(item);
		}
		void remove(int i) {
			list.remove(i);
		}
		void retrieve(int i) {
			System.out.println(list.get(i));
		}
		void display() {
			System.out.println(list);
		}
	}
	
	public static void main(String[] args){
		genericTest obj = new genericTest();
		Store<String> store = obj.new Store<>();
		Store<Integer> store2 = obj.new Store<>();
		
		store.add("Powder");
		store.retrieve(0);
		store.remove(0);
		store.display();
		
	}
}
