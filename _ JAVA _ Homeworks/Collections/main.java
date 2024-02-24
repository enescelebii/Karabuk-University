import java.util.ArrayList;
import java.util.Collection;
import java.util.LinkedList;
import java.util.List;
import java.util.ListIterator;

public class main {

	public static void main(String[] args) {
		//create ArrayList
		Collection <String> list = new ArrayList<>();
		
		//add element to ArrayList

		list.add("jack");

		list.add("mike");

		list.add("hulk");
		
		//create LinkedList
		LinkedList<String> list2 = new LinkedList<String>();

		list2.add("Abant"); // Add elements to LinkedList

		list2.add("Mengen");

		list2.add("Gerede");

		ListIterator<String> iter = list2.listIterator(); // Obtaining ListIterator

		System.out.println("Forward iteration:");
		while(iter.hasNext()) {
			System.out.println(iter.next());
		}
		while(iter.hasPrevious()) {
			System.out.println(iter.previous());
		}
		
	}

}
