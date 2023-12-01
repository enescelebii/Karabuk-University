
public class patient {
	private int patientId = 1;
	private String name;
	static int counter = 1;

	public patient(String name) {
		this.name = name;
		patientId = counter;
		counter++;
	}

	@Override
	public String toString() {
		return "patient [patientId=" + patientId + ", name=" + name + "]";
	}

	public int getPatientId() {
		return patientId;
	}

	public void setPatientId(int patientId) {
		this.patientId = patientId;
	}

	public String getName() {
		return name;
	}

	public void setName(String name) {
		this.name = name;
	}

}
