
public class circle extends shape2D {

	public circle(double radius) {
		super(radius);
	}

	@Override
	double getArea() {
		return PI * radius * radius;
	}
}
