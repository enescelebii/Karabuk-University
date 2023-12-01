
public class cylinder extends circle{
	private double height = 1.0;

	
	public cylinder(double height,double radius,String color) {
		super(radius,color);
		this.height=height;
	}
	public cylinder(double height,double radius) {
		this(height,radius,"blue");
	}
	public cylinder(double height) {
		this(height,5.0,"blue");
	}
	
	public cylinder() {
		this(120,5.0,"blue");
	}
	
	public double getHeight() {
		return height;
	}

	public void setHeight(double height) {
		this.height = height;
	}
	@Override
	public String toString() {
		return "cylinder height=" + height + ", " + super.toString()+ " Area : "+getArea();
	}
	@Override
	public double getArea() {
		return super.getArea()*height;
	}
}
