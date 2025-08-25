// 문제 요지 정리
// - q1 클래스에는 3개의 오버로딩된 메서드가 있음:
//   1) void test()               → 현재 ans를 출력 (출력만, ans 내용은 안 바뀜)
//   2) <T> void test(T i)        → 어떤 타입이든 문자열로 변환해서 ans에 이어붙임
//   3) void test(int i)          → int 전용, ans에 (i*2)를 문자열로 이어붙임
// - main 실행 순서: "abs"(String) → test() → 1.0(double) → 2(int)
// - 오버로딩 규칙: int 전용이 제네릭보다 우선됨
// - 따라서 콘솔 출력은 test() 호출 한 번 뿐이므로 "abs" 만 찍힘
// - 최종 ans는 "abs1.04" 이지만, 문제 요구상 출력은 "abs"

class q1 {
    private String ans;

    q1() {
        this.ans = "";                // 생성자: ans를 빈 문자열로 초기화
    }

    void test() {
        System.out.print(ans);        // 현재 ans 출력 (줄바꿈 없음)
    }

    <T> void test(T i) {              // 제네릭 메서드: 어떤 타입이든 toString() 후 이어붙임
        this.ans += i.toString();
    }

    void test(int i) {                // int 전용: (i * 2)를 문자열로 이어붙임
        this.ans += i * 2;
    }
}

// 파일명이 20.java 이므로 public class 이름도 _20 이어야 함
public class _20 {
    public static void main(String[] args) {
        q1 a = new q1();

        a.test("abs");   // ans = "abs"
        a.test();        // ans 출력 -> 콘솔에 "abs"
        a.test(1.0);     // ans = "abs1.0"
        a.test(2);       // ans = "abs1.04"

        // 출력은 test()에서 한 번만 발생하므로 실제 콘솔에는 "abs" 만 찍힘
    }
}
