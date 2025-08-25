interface Cals {
	public void get(int v);
}
class Test implements Cals {
	public void get(int v) {
		System.out.print(v*v);
	}
}
public class Main {
	public static void main(String[] args) {
		Cals a = new Test();
		a.get(10);
	}
}