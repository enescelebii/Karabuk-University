
public class pyramid extends shape3D {

	public pyramid(double depth, double height, double width) {
		super(depth, height, width);

	}

	@Override
	double getArea() {
		return 1.7*depth*depth;
	}

	@Override
	double getVolume() {
		return (0.33)* depth * height * super.getWidth();
	}
}
