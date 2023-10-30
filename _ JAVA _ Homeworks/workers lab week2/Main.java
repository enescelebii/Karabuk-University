import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		try (Scanner scanner = new Scanner(System.in)) {
			isci isci1 = new isci();
			System.out.println("Isci icin bir isim giriniz: ");
			isci1.name = scanner.nextLine();
			System.out.println("Isci icin bir sosyal guvenlik numarasi giriniz: ");
			isci1.socialSecurityNumber = scanner.nextInt();
			System.out.println("Isci icin bir maaş giriniz: ");
			isci1.wage = scanner.nextFloat();
			System.out.println("Isci icin bir çalışma saati giriniz");
			isci1.workingHours = scanner.nextInt();
			isci1.displayInfo();
			isci1.displaySalary();
		}
		catch(Exception e) {
			System.out.println("cant creat an emploee" + e.getMessage());
		}
	}
}
