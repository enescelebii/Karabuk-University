
public class isci {
	public String name;
	public int socialSecurityNumber;
	public float wage;
	public int workingHours;
	
	
	public void displayInfo() {
		System.out.println("Calisanin ismi:" + name + "\nNumarasi: "+socialSecurityNumber);
	}
	public void displaySalary() {
		System.out.println("Calisanin maasi: "+wage*workingHours);
	}
}
