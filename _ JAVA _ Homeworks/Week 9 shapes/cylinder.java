
public class cylinder extends shape3D {

	public cylinder(double height, double radius) {
		super(height, radius);
	}

	@Override
	double getArea() {
		return 2*PI*(radius+height);
	}

	@Override
	public double getVolume() {
		return PI * radius * radius * depth;
	}
}
