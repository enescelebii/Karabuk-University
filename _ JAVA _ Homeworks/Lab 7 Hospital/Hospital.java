
public class Hospital {

	public static void main(String[] args) {
		patient hasta1 = new patient("enes");
		patient hasta2 = new patient ("ahmet");
		patient hasta3 = new patient ("selim");
		patient hasta4 = new patient ("omer");
		patient hasta5 = new patient ("goksel");
		patient hasta6 = new patient ("azra");
		patient patients[] = {hasta1,hasta2,hasta3,hasta4,hasta5,hasta6};
		for(patient p : patients) {
			System.out.println(p.toString());
		}
	}

}
