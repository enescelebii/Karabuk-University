public abstract class shape3D extends shape2D {
	double depth;

	public shape3D(double depth, double height, double width) {
		super(height, width);
		this.depth = depth;

	}

	public shape3D(double height, double radius) {
		super(radius);
		this.depth = height;
	}

	abstract double getVolume();

	@Override
	public String toString() {
		return "Volume: " + getVolume() + " Area: " + getArea();
	}

}
