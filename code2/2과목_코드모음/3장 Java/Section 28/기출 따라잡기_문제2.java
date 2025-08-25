class TestClass {
	int a, b, c;
}
public class Main {
	public static void main(String[] args) {
		TestClass Myint = new TestClass();
		Myint.a = 8;
		Myint.b = 10;
		hrd(Myint);
		System.out.println("a = " + Myint.a);
		System.out.println("b = " + Myint.b);
		System.out.println("c = " + Myint.c);
	}
	static void hrd(TestClass Myint) {
		if (Myint.a++ >= Myint.b--)
			Myint.c = Myint.a - Myint.b;
		else
			Myint.c = Myint.a + Myint.b;
	}
}