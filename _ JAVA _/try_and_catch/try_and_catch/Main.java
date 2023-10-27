package try_and_catch;

import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		
		
		
		try {
			System.out.println("Enter a value");
			int value1 = scanner.nextInt();
			System.out.println("Enter another value");
			int value2 = scanner.nextInt();
			
			System.out.println(value1/value2);
		}
		catch(Exception e){
			System.out.println("there is an exception about: "+e.getMessage());
		}
				

	}

}
