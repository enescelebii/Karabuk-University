import java.util.Comparator;

public class nameCompare implements Comparator<movie>{

	
	@Override
	public int compare(movie o1, movie o2) {
		
		return o1.name.charAt(0)-o2.name.charAt(0);
	}
	
}
