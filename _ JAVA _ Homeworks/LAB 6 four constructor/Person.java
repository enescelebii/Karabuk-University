
public class Person {
	private String name,lastName;
	public static int id = 1;
	private int age;
	

	
	Person(String name,String lastname,int age){
		setName(name);
		setLastName(lastname);
		setId(id);
		setAge(age);
		id++;
	}
	Person(String name,String lastname){
		this(name,lastname,20);
	}
	Person(int id){
		setId(10);
	}
	Person(){
		this(null,null,1);
	}
	
	public String toString() {
		return ("Adı: "+name+" "+lastName+" id: "+id+" Yaşı: "+age);
	}
	
	
	
	public String getName() {
		return name;
	}
	public void setName(String name) {
		this.name = name;
	}
	public String getLastName() {
		return lastName;
	}
	public void setLastName(String lastName) {
		this.lastName = lastName;
	}
	public static int getId() {
		return id;
	}
	public static void setId(int id) {
		Person.id = id;
	}
	public int getAge() {
		return age;
	}
	public void setAge(int age) {
		this.age = age;
	}
}