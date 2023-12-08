
public class rectangle extends shape2D {

	public rectangle(double height, double width) {
		super(height, width);
	}

	@Override
	double getArea() {
		return super.height * super.getWidth();
	}
}
