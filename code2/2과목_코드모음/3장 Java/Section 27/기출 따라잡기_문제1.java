public class Test {
	public static void main(String[] args) {
		int i;
		int num[] = {2, 1, 3, 7, 4, 9};
		int numb[] = new int[10];
		for (i = 0; i < num.length; i++)
			numb[i] = num[i];
		for (i = 0; i < numb.length; i++)
			System.out.printf("%d", numb[i]);
	}
}