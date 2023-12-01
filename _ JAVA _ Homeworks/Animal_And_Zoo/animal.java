
public class animal {
	private String name;
	private AnimalTypes type;

	public animal(String name, AnimalTypes type) {
		setName(name);
		setType(type);
	}

	public String toString() {
		return "Hayvan ismi: " + getName() + " Tipi: " + type;
	}

	void setName(String name) {
		this.name = name;
	}

	String getName() {
		return name;
	}

	void setType(AnimalTypes type) {
		this.type = type;
	}

	AnimalTypes getType() {
		return type;
	}
}
