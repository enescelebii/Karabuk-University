import java.util.Scanner;

public class PostOfficeTest {

	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		post post = new post("naber","KARABUK","ISTANBUL");
		post_office karabuk = new post_office("KARABUK");
		post_office istanbul = new post_office("ISTANBUL");
		karabuk.send(post);
		istanbul.recieve(post);
	}
}
