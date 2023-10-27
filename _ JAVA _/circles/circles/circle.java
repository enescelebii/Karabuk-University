package circles;

public class circle {
	private final double PI = 3.141519;
	private double radius;
	circle(double radius){
		this.radius = radius;
	}
	double computeArea() {
		return (Math.pow(radius, 2) * PI);
	}
}
