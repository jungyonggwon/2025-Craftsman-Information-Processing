#include <stdio.h>

// 두 정수 포인터가 가리키는 값을 맞바꾼다.
void intswap(int *x, int *y) {
    int t = *x;
    *x = *y;
    *y = t;
}
// ↑ intswap의 핵심 동작(값 교환). :contentReference[oaicite:1]{index=1}

// c가 가리키는 값이 짝수면 a↔b 교환, 홀수면 a↔c 교환
void testfunc(int *a, int *b, int *c) {
    if (*c % 2 == 0)
        intswap(a, b);
    else
        intswap(a, c);
}
// ↑ testfunc의 분기 로직(짝/홀에 따라 교환 대상이 달라짐). :contentReference[oaicite:2]{index=2}

// (주의) 이 gcd는 b==0이면 1을 반환하는 '비표준' 버전이다.
// 보통 gcd는 b==0이면 a를 반환하지만, 본 문제는 1을 반환하도록 구성됨.
int gcd(int a, int b) {
    if (b == 0) return 1;           // ← 여기서 1을 반환
    else        return gcd(b, a % b);
}
// ↑ 비표준 gcd 정의(시험 포인트). :contentReference[oaicite:3]{index=3}

int main(void) {
    int a = 5;          // ❶
    int b = 4;          // ❷
    int test1 = 15;     // ❸
    int test2 = 12;     // ❹
    int test = gcd(test1, test2);   // ❺ gcd(15,12) → 1 (아래 해설) :contentReference[oaicite:4]{index=4}

    switch (test % 2) {             // test=1 ⇒ 1%2=1 ⇒ case 1로 진입
    case 1:
        testfunc(&a, &b, &test2);   // test2=12(짝수) ⇒ a↔b 교환 → (a,b)=(4,5)
        /* break; 없음! → default까지 '폴스루'로 실행됨 */  // 폴스루 설명. :contentReference[oaicite:5]{index=5}
    default:
        testfunc(&a, &b, &test1);   // test1=15(홀수) ⇒ a↔test1 교환 → a=15, test1=4
    }
    printf("%d-%d", a, b);          // 최종 출력: 15-5
    return 0;
}
// main의 선언/스위치/printf까지의 구조. :contentReference[oaicite:6]{index=6}
