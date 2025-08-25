#include <stdio.h>

int main(void) {
    int calc, x = 40, y = 60, z = 30;

    // 삼항 연산자: (조건) ? (참식) : (거짓식)
    // x < y  →  40 < 60  →  참이므로 '참식'만 평가됨.
    // 'y++' 은 post-increment(후치 증가): "증가 전 값"을 사용한 다음 y가 1 증가.
    // 따라서 calc 는 60이 대입되고, y 는 61이 된다. (--z 는 실행되지 않음)
    calc = (x < y) ? y++ : --z;

    printf("%d/%d/%d\n", calc, y, z);  // 60/61/30
    return 0;
}
