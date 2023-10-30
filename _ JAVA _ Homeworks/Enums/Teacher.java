
public class Teacher {
	Branch ders;
	int id;
	Teacher(int i){
		switch(i) {
		case 1:
			id = 1;
			ders = Branch.ENG;
			break;
		case 2:
			id = 2;
			ders = Branch.CS;
			break;
		case 3:
			id = 3;
			ders = Branch.MATH;
			break;
		case 4:
			id = 4;
			ders = Branch.PHYSICS;
			break;
		}
	}
}
