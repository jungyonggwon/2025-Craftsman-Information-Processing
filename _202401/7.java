// 문제 핵심 요약
// - Pos 객체 두 개 생성: (1,1), (2,2)
// - for문에서 i=0,1에 대해 list[i].sum(i) 호출하여 res에 누적
// - sum() 과 sum(int x) 는 "오버로딩": 같은 이름, 매개변수 시그니처만 다름
// - sum(int x) 의 x는 "매개변수(지역변수)"로서 필드 this.x 와는 다른 별개 변수 (섀도잉/shadowing)
// - 최종 출력값은 4

public class Main {

    // 내부(정적) 클래스 Pos: 좌표 (x,y)를 가진다.
    static class Pos {
        private int x = 0, y = 0;

        // 생성자: 전달받은 x,y를 "필드"에 저장한다.
        Pos(int x, int y) {
            this.x = x; // this.x = 필드, x = 매개변수
            this.y = y; // this.y = 필드, y = 매개변수
        }

        // ① 매개변수 없는 sum(): "필드 x + 필드 y"를 반환
        public int sum() {
            return x + y; // == this.x + this.y
        }

        // ② 매개변수 하나를 받는 sum(int x): "매개변수 x + 필드 y"를 반환
        //    ⚠ 여기서 x는 '매개변수(지역변수)'라서 필드 this.x 와 다르다.
        //      이름이 같아도 범위(scope)가 달라서 매개변수 x가 우선(섀도잉).
        public int sum(int x) {
            return x + y; // == (매개변수 x) + (필드 this.y)
        }
    }

    public static void main(String[] args) {
        // 배열 선언 스타일 설명:
        //  - 권장(Java 스타일):   Pos[] list = new Pos[2];
        //  - 허용(C 스타일):      Pos list[] = new Pos[2];
        //    → 둘 다 문법적으로 OK. 여러 변수 선언 시 혼동이 적은 Pos[] list 권장.
        Pos[] list = new Pos[2];        // 인덱스 0..1
        list[0] = new Pos(1, 1);        // 필드: x=1, y=1
        list[1] = new Pos(2, 2);        // 필드: x=2, y=2

        int res = 0;

        // i = 0..(list.length-1)  → 0, 1
        for (int i = 0; i < list.length; i++) {
            // 호출되는 메서드는 sum(int) (오버로딩 분해 규칙에 의해)!
            // i가 매개변수 x로 들어가므로 계산식은 "i + (해당 객체의 y)" 가 된다.
            res += list[i].sum(i);

            // ★ 진행 상황을 머릿속으로 추적:
            // i=0 → list[0].sum(0) → 0 + (list[0].y=1) = 1  → res=1
            // i=1 → list[1].sum(1) → 1 + (list[1].y=2) = 3  → res=1+3=4
        }

        System.out.print(res); // 최종 출력: 4
    }
}
