import java.util.Collections;
import java.util.Iterator;
import java.util.LinkedList;
import java.util.ListIterator;

public class main {

	public static void main(String[] args) {
		
		LinkedList<book> list = new LinkedList<book>();
		list.add(new book("ask",900));
		list.add(new book("para",200));
		list.add(new book("okul",300));
		list.add(new book("irade",800));
		
		Collections.sort(list);
		Iterator ptr = list.iterator();
		
		while(ptr.hasNext()) {
			System.out.println(ptr.next());
		}
	}

}
