package car_factory;

public class car {
	private String brand;
	private int maxSpeed;
	private int year;
	public car(int year,int maxSpeed,String brand) throws Exception{
		setBrand(brand);
		setMaxSpeed(maxSpeed);
		setYear(year);
	}
	car(int year,String brand) throws Exception{
		this(year,180,brand); // 180 is default maxSpeed
	}
	car(int year) throws Exception{
		this(year,180,"mclaren"); // 180 and mclaren is default parameters
	}
	
	public String getCarInfo() {
		return "Car brand: " +brand+" Max Speed: "+maxSpeed+" Year: "+year;
	}
	
	
	
	public String getBrand() {
		return brand;
	}
	public void setBrand(String brand) {
		this.brand = brand;
	}
	public int getMaxSpeed() {
		return maxSpeed;
	}
	public void setMaxSpeed(int maxSpeed) {
		this.maxSpeed = maxSpeed;
	}
	public int getYear() {
		return year;
	}
	public void setYear(int year) throws Exception {
		if(year>2022)
			throw new Exception("YANLIŞ YIL GIRIS YAPTINIZ !!!");
		this.year = year;
	}
	
}
