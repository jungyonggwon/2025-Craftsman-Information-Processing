public class Test
{
	public static void main(String[] args) {
		String str = "HELLO!@#WORLD/-";
		String res = str.replaceAll("[^ㄱ-ㅎㅏ-ㅣ가-힣a-zA-Z0-9,.]","*");
		System.out.print(res);
	}
}