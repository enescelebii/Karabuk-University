
public class circle {
	
	private double radius = 1.0;
	private String color  = "red";
	
	public circle(double radius,String color) {
		this.color=color;
		this.radius = radius;
	}
	public circle(double radius) {
		this(radius,"red");
	}
	public circle() {
		this(5.0,"blue");
	}
	@Override
	public String toString() {
		return "Color is "+this.color+" Radius is "+this.radius;
	}
	
	public double getArea() {
		return this.radius*this.radius*3.14;
	}
	
	public double getRadius() {
		return radius;
	}
	public void setRadius(double radius) {
		this.radius = radius;
	}
	public String getColor() {
		return color;
	}
	public void setColor(String color) {
		this.color = color;
	}
	
}
