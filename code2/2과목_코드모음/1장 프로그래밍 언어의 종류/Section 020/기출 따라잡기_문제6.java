public class Test {
	public static void main(String[] args) {
		String str1 = "HELloWorLD!";
		String str2 = "heLLOwORld!";
		if (str1.equals(str2))
			System.out.print(str1.toUpperCase());
		else if (str1.equalsIgnoreCase(str2))
			System.out.print(str1.toLowerCase());
		else
			System.out.print(str2);
	}
}