
public class movie implements Comparable<movie>{
	public int raiting;
	public String name;
	public int year;
	
	
	public movie(int raiting, String name, int year) {
		super();
		this.raiting = raiting;
		this.name = name;
		this.year = year;
	}
	public int getRaiting() {
		return raiting;
	}
	public void setRaiting(int raiting) {
		this.raiting = raiting;
	}
	public String getName() {
		return name;
	}
	public void setName(String name) {
		this.name = name;
	}
	public int getYear() {
		return year;
	}
	public void setYear(int year) {
		this.year = year;
	}
	@Override
	public int compareTo(movie o) {
		// TODO Auto-generated method stub
		return year - o.year;
	}

	
	
	
}
