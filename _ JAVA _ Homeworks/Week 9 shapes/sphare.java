
public class sphare extends shape3D {

	public sphare(double height, double radius) {
		super(height, radius);
	}

	@Override
	double getVolume() {
		return (4 / 3) * super.PI * super.radius * super.radius * super.radius; // 4/3 π r³
	}

	@Override
	double getArea() {
		return 4 * PI * radius * radius;
	}
}
