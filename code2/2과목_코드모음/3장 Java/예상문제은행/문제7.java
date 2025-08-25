public class Test {
	public static void main(String[] args) {
		StringBuffer sb = new StringBuffer( );
		sb.append("KOREA");
		sb.insert(3, "HRD");
		System.out.print(sb.toString( ));
	}
}