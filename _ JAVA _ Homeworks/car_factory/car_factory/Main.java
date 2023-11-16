package car_factory;

public class Main {

	public static void main(String[] args) {
		try {
			car mercedes = new car(2000,260,"mercedes");
			car astonmartin = new car(2018,"astonmartin");
			car togg = new car(2021);
			car[] arabalar  = {mercedes,astonmartin,togg};
			factory fabrika = new factory(arabalar);
			fabrika.printAllCarsInfo();
		}catch (Exception e) {
			System.out.println(e.getMessage());;
		}
	}
}
