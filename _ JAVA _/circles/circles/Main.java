package circles;
import java.util.*;
public class Main {

	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		System.out.println("3 tane daire icin yari cap girin");
		circle c1 = new circle(scanner.nextDouble());
		circle c2 = new circle(scanner.nextDouble());
		circle c3 = new circle(scanner.nextDouble());
		circle[] circles = {c1,c2,c3};
		for(circle a : circles) {
			System.out.println(a.computeArea());
		}
	}

}
