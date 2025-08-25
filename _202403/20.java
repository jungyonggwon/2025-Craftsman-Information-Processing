// 문제 요지 정리
// - q1에는 세 메서드가 있음:
//   1) void test()               -> 현재 ans를 "출력" (변경 X)
//   2) <T> void test(T i)        -> ans += i.toString()
//   3) void test(int i)          -> ans += (i * 2)         // int 전용(더 구체적)
// - main 순서: "abs"(String) -> test() -> 1.0(double) -> 2(int)
// - 오버로딩 선택 규칙: 더 "구체적인" 시그니처가 우선됨 (int 전용이 제네릭보다 우선)
// - 실제 출력은 test()에서 한 번만 발생

class q1 {
    private String ans;

    q1() {
        this.ans = "";                // 초기값: 빈 문자열
    }

    void test() {
        System.out.print(ans);        // 현재 ans를 출력(줄바꿈 없음). ans 자체는 안 바뀜
    }

    <T> void test(T i) {              // 제네릭: 어떤 타입이든 toString()한 걸 이어 붙임
        this.ans += i.toString();
    }

    void test(int i) {                // int 전용: 값의 두 배를 문자열로 이어 붙임
        this.ans += i * 2;            // 예: i=2면 "4"를 이어 붙임
    }
}

public class Main {
    public static void main(String[] args) {
        q1 a = new q1();

        a.test("abs");   // ① String -> 제네릭 test(T) 선택 -> ans = "abs"
        a.test();        // ② 현재 ans 출력 -> 콘솔에 "abs" 출력 (줄바꿈 없음)
        a.test(1.0);     // ③ double -> 제네릭 test(T) 선택 -> ans = "abs1.0"
        a.test(2);       // ④ int    -> int 전용 test(int) 선택 -> ans = "abs1.04"

        // 주의: 여기서는 추가 출력이 없음. 최종 ans는 "abs1.04"지만
        // 화면에 실제로 보이는 출력은 ②에서 출력된 "abs" 한 번뿐.
    }
}
