public class hrdkorea {
	public static void main(String[ ] args) {
		int cnt = 0;
		int sum = 0;
		for (int i = 0; i <= 7; i++)
		{
			if (i % 2 == 1)
			{
				cnt = cnt + 1;
				sum = sum + i;
			}
		}
		System.out.printf(cnt + ", " + sum);
	}
}