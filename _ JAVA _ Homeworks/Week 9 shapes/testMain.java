
public class testMain {

	public static void main(String[] args) {

		shape2D obj0 = new circle(2);
		shape2D obj1 = new square(3);
		shape2D obj2 = new rectangle(4, 5);
		shape3D obj3 = new cylinder(6, 7);
		shape3D obj4 = new sphare(8, 8);
		shape3D obj5 = new pyramid(10, 11, 12);
		shape3D obj6 = new cone(13, 14);

		shape2D[] ikiBoyutluCisimler = { obj0, obj1, obj2 };
		shape3D[] ucBoyutluCisimler = { obj3, obj4, obj5, obj6 };

		for (shape2D i : ikiBoyutluCisimler) {
			System.out.println(i.getClass().getName()+" "+i.toString());
		}
		for (shape3D j : ucBoyutluCisimler) {
			System.out.println(j.getClass().getName()+" "+j.toString());
		}
		//obj6 = ((shape3D)obj6);
	}

}
