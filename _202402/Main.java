import java.lang.Math;
public class Main
{
    public static void main(String[] args)
    {
        int s, t, cnt = 0;
        int test[] = new int[5];
        for (int i = 0; i < 10; i++)
        {
            s = (int)Math.pow(i,2);
            t = (s % 10);


            try {
                test[t] = i;
            }
            catch(ArrayIndexOutOfBoundsException e) {
                cnt++;
            }
        }
        System.out.printIn(cnt);
    }
}