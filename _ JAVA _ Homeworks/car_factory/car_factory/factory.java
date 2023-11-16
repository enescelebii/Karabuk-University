package car_factory;

public class factory {
	car[] cars;
	factory(car[] cars){
		this.cars = cars;
	}
	void printAllCarsInfo(){
		for(car c : cars) {
			System.out.println(c.getCarInfo());;
		}
	}
}
