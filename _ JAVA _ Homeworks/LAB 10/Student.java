
public abstract class Student {
	private int id;
	private float mid, fin;

	public Student(int id, float mid, float fin) {
		super();
		this.id = id;
		this.mid = mid;
		this.fin = fin;
	}

	abstract float computeTotalScore();

	float computeBaseScore() {
		return mid * 0.4f + fin * 0.6f;
	}

}
