package Time;

import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		System.out.println("bir saat giriniz");
		try {
			Time1 zaman = new Time1(scanner.nextInt(), scanner.nextInt(), scanner.nextInt());
			System.out.println(zaman.toUniversalString());
			System.out.println(zaman.toString());
		} catch (Exception fuck) {
			System.out.println("cant do that");
		}
	}

}
