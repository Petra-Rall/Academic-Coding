class Cat{
	void noise() {
		System.out.println("Meow");
		genericPractice.Dog.sleep();
	}
	static void sleep() {
		System.out.println("ZZZZZ");
	}
}


public class genericPractice {
	
	
	
	class example<T>{
		T item;
		
		example(T item){
			this.item=item;
			Cat.sleep();
			Dog.sleep();
		}
		
		T get() {
			return item;
		}
		
		T modify(T item){
			this.item= (T)item;
			return (T) item;
		}
		
		<U> void print(U item) {
			System.out.println(item);
		}
	}
	
	static class Dog{
		void noise() {
			System.out.println("Woof");
		}
		static void sleep() {
			System.out.println("zzzz");
		}
	}
	
	public static void main(String[] args){
		genericPractice obj1 = new genericPractice();
		example<String> obj2 = obj1.new example<>("Hi");
		System.out.println(obj2.get());
		obj2.modify("bye");
		System.out.println(obj2.get());
		obj2.print(123);
		
		Dog.sleep();
		Dog dog = new Dog();
		dog.noise();
		
		Cat.sleep();
		
		
	}
}
