
public class zoo {
	animal[] animals;

	zoo(animal[] animals) {
		this.animals = animals;
	}

	void printAnimals() {
		for (animal a : animals) {
			System.out.println("Hayvan ismi: " + a.getName() + " Tipi: " + a.getType());
		}
	}
}
