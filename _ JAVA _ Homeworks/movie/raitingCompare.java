import java.util.Comparator;

public class raitingCompare implements Comparator<movie>{

	@Override
	public int compare(movie o1, movie o2) {
		return o1.raiting - o2.raiting;
	}
	
}
