import java.util.ArrayList;
import java.util.Collection;
import java.util.Collections;
import java.util.Comparator;

import javax.swing.plaf.synth.SynthOptionPaneUI;

public class main {

	public static void main(String[] args) {
		
		ArrayList<movie> list = new ArrayList<movie>();
		
		list.add(new movie(5,"enes",2006));
		list.add(new movie(6,"omer",2004));
		list.add(new movie(7,"goksel",2003));
		
		raitingCompare rc = new raitingCompare();
		nameCompare nc = new nameCompare();
		
		System.out.println((int)(5.6));
		Collections.sort(list);
		for(movie movie: list) {
			System.out.println(movie.year);
		}
		Collections.sort(list, rc);
		for(movie movie: list) {
			System.out.println(movie.raiting);
		}
		Collections.sort(list, nc);
		for(movie movie: list) {
			System.out.println(movie.name);
		}
	}
}
