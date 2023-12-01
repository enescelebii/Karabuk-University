
public class Main {

	public static void main(String[] args) {
		Person enes = new Person("enes","celebi",12);  //butun parametreler
		System.out.println(enes.toString());
		Person omer = new Person("omer","guney"); // sadece isim ve soyisim
		System.out.println(omer.toString());
		Person ahmet = new Person(10); // sadece id set eder
		System.out.println(ahmet.toString());
		Person goksel = new Person(); // sadece id incrament yapar
		System.out.println(goksel.toString());
	}
}