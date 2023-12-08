
public abstract class shape2D {
	final double PI = 3.14;
	double height;
	double radius;
	private double width;

	public shape2D(double height, double width) {
		this.height = height;
		this.width = width;
	}

	public shape2D(double radius) {
		this.radius = radius;
	}

	abstract double getArea();

	@Override
	public String toString() {
		return "Area: " + getArea();
	}

	public double getWidth() {
		return width;
	}

	public void setWidth(double width) {
		this.width = width;
	}

}
