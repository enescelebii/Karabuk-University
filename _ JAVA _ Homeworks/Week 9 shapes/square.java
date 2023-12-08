
public class square extends shape2D {

	public square(double width) {
		super(width, width);
	}

	@Override
	double getArea() {
		return super.height * super.height;
	}
}
