// 문제 요지:
// i = 0..9에 대해 s = i^2, t = s % 10 (마지막 자리수).
// 크기가 5인 배열 test(유효 인덱스 0..4)에 test[t] = i를 시도.
// t가 5..9면 배열 범위를 벗어나 예외(ArrayIndexOutOfBoundsException) 발생 → cnt++.
// 최종 cnt를 출력.

// 배열 선언 스타일 설명:
//  - 권장(Java 스타일):   int[] test = new int[5];   // []를 타입에 붙임 → 여러 변수 선언 시 혼동 적음
//  - 허용(C 스타일):      int test[] = new int[5];   // []를 변수명에 붙임 → 문법상 OK, 시험 문제에도 자주 등장
//  차이 예시:
//     int a[], b;   // a는 배열, b는 '일반 int' (헷갈릴 수 있음)
//     int[] a, b;   // a와 b 둘 다 배열 (권장)

import java.lang.Math;

public class _5 {
    public static void main(String[] args) {
        int s, t, cnt = 0;

        // 권장 표기 (int[] 이름)
        int[] test = new int[5];   // 유효 인덱스: 0,1,2,3,4

        // C 스타일(문제에서 흔히 보이는 표기)도 가능:
        // int test[] = new int[5];

        for (int i = 0; i < 10; i++) {     // i: 0..9 (10개)
            s = (int) Math.pow(i, 2);      // s = i^2
            t = s % 10;                    // t = 마지막 자리수 (0..9)

            try {
                test[t] = i;               // t가 0..4면 정상 대입
            } catch (ArrayIndexOutOfBoundsException e) {
                // t가 5,6,7,8,9면 여기로 들어옴
                cnt++;
            }
        }

        System.out.println(cnt);           // 정답: 5
    }
}
