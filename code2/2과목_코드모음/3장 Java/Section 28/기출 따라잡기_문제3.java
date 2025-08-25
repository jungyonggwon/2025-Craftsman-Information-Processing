public class Test {
	static int cycle(int[] arr, int i) {
		if (i <= 0) return 0;
		return arr[i] % 3 + cycle(arr, i - 1);
	}
	public static void main(String[] args) {
		int[] arr = { 5, 4, 3, 2, 1 };
		System.out.print(cycle(arr, 4));
	}
}