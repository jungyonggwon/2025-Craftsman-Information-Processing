class q1{
    private String ans;

    q1(){
        this.ans="";
    }

    void test(){
        System.out.print(ans);
    }

    <T>void test(T i){
        this.ans+=i.toString();
    }

    void test(int i){
        this.ans+=i*2;
    }
}

public class Main{
    public static void main(String[]args){
        q1 a=new q1();
        a.test("abs");
        a.test();
        a.test(1.0);
        a.test(2);
    }
}