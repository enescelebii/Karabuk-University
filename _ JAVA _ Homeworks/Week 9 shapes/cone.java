
public class cone extends shape3D {
	public cone(double height, double radius) {
		super(height, radius);
	}

	@Override
	double getArea() {
		return (PI*radius*radius)+(2*PI*radius*height);
	}

	@Override
	double getVolume() {
		return PI * radius * radius * depth; // π r^2 * height
	}
}
