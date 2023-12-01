
public class Main {

	public static void main(String[] args) {
		animal animal0 = new animal("papagan", AnimalTypes.BIRD);
		animal animal1 = new animal("Yılan", AnimalTypes.REPTILE);
		animal animal2 = new animal("ton baligi", AnimalTypes.FISH);
		animal animal3 = new animal("cat", AnimalTypes.MAMAL);
		animal[] animals = { animal0, animal1, animal2, animal3 };
		zoo myZoo = new zoo(animals);
		myZoo.printAnimals();
	}

}
