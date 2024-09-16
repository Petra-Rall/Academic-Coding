class Person{
	String name;
	int age;
	Person(String name, int age){
		this.name=name;
		this.age=age;
		//System.out.println(""+name+" is "+age+" years old");
	}
	String getName() {
		return name;
	}
	int getAge() {
		return age;
	}
}

public class One {

	public static void main(String[] args) {
		Person person1=new Person("Suma", 21);
		Person person2=new Person("Nasif", 24);
		Person person3=new Person("Nusa", 14);
		System.out.println(person1.getName()+" is " +person1.getAge()+" years old");
		System.out.println(person2.getName()+" is " +person2.getAge()+" years old");
		System.out.println(person3.getName()+" is " +person3.getAge()+" years old");
	}

}
