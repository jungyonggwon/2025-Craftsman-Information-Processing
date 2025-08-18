// [2024년 3회 20번 기출 해설]
// 문제: 오버로딩(Overloading)과 제네릭(Generic) 메서드의 실행 흐름을 묻는 문제
// 주의: 패키지(package) 선언을 추가해서 폴더 구조(2024-03)를 그대로 활용할 수 있게 함
// → java 실행 시 반드시 패키지명까지 포함해서 실행해야 함
//    ex) javac 2024-03/Main.java
//        java -cp . _2024_03.Main

package _202403;  // ← 폴더명에 맞춰 설정 (숫자 시작 안 되므로 앞에 '_' 붙임)


// q1 클래스: 다양한 test 메서드 오버로딩 정의
class q1 {
    private String ans;   // ans: 문자열 누적 저장용

    // 생성자: ans를 빈 문자열로 초기화
    q1() {
        this.ans = "";
    }

    // test() : ans를 그대로 출력
    void test() {
        System.out.print(ans);
    }

    // test(T i) : 제네릭 메서드. 어떤 타입이든 받아서 문자열로 변환 후 ans에 이어붙임
    <T> void test(T i) {
        this.ans += i.toString();
    }

    // test(int i) : int 전용 오버로딩. (i*2)를 계산 후 ans에 이어붙임
    void test(int i) {
        this.ans += i * 2;
    }
}


// Main 클래스 (실행 시작점)
public class Main {
    public static void main(String[] args) {
        q1 a = new q1();   // q1 객체 생성 (ans = "")

        // (1) 문자열 "abs" 전달 → 제네릭 test(T) 호출됨
        // ans = "" + "abs" = "abs"
        a.test("abs");

        // (2) 출력 메서드 test() 호출됨 → 현재 ans("abs")를 출력
        // 화면 출력: abs
        a.test();

        // (3) 1.0 (double) 전달 → 제네릭 test(T) 호출됨
        // ans = "abs" + "1.0" = "abs1.0"
        a.test(1.0);

        // (4) 정수 2 전달 → int 전용 test(int) 호출됨
        // ans = "abs1.0" + (2*2) = "abs1.04"
        a.test(2);

        // 최종적으로 ans = "abs1.04"
        // 하지만 이후 출력 메서드 test()를 호출하지 않았기 때문에
        // 실제 화면 출력은 (2) 단계에서의 "abs"만 찍힘
    }
}


/*
[실행 과정 정리]
1. a.test("abs") → ans = "abs"
2. a.test()      → ans를 출력 → "abs"
3. a.test(1.0)   → ans = "abs1.0"
4. a.test(2)     → ans = "abs1.04"

[최종 ans 값] "abs1.04"
[실제 출력 결과] "abs"

[핵심 해설]
- 메서드 오버로딩 시, 전달되는 인자의 타입에 따라 호출되는 메서드가 달라진다.
- String → 제네릭, double → 제네릭, int → int 오버로딩 호출됨.
- 출력은 test() 호출한 시점에만 수행된다.
*/
