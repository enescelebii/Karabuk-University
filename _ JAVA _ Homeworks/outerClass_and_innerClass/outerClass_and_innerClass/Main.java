package outerClass_and_innerClass;

public class Main {

	public static void main(String[] args) {
		OuterClass myOuter = new OuterClass();

		OuterClass.InnerClass myInner = new OuterClass.InnerClass();

		System.out.println(myInner.y + myOuter.x);
	}

}
