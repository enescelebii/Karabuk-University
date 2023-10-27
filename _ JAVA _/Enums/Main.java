
public class Main {

	public static void main(String[] args) {
		Teacher teacher1 = new Teacher(1);
		Teacher teacher2 = new Teacher(2);
		Teacher teacher3 = new Teacher(3);
		Teacher teacher4 = new Teacher(4);
		Teacher[] hocalar = {teacher1,teacher2,teacher3,teacher4};
		for(Teacher a : hocalar) {
			System.out.println("Teacher id:"+a.id+" "+a.ders);
		}
	}

}
