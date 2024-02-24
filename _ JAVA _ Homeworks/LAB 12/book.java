
public class book implements Comparable<book>{
	String name;
	double price;
	
	
	public book(String name, double price) {
		super();
		this.name = name;
		this.price = price;
	}
	
	public double totalPrice() {
		return price + 0.08*price;
	}
	
	@Override
	public int compareTo(book o) {
		
		return (int)(totalPrice() - o.totalPrice());
	}

	@Override
	public String toString() {
		return String.format("book name : %-10s price : %s", name, totalPrice());
	}

	
	

	

	
}
