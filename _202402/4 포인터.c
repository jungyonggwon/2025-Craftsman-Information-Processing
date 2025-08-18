#include <stdio.h>

int main() {
    int a = 10;       // 변수 a에 10 저장
    int *p;           // int형 포인터 p 선언
    p = &a;           // p에 a의 주소 저장 (p는 a를 가리킴)

    printf("a 값: %d\n", a);       // 10
    printf("a 주소: %p\n", &a);    // a의 메모리 주소
    printf("p 값(주소): %p\n", p); // p가 가리키는 주소 (a의 주소와 같음)
    printf("*p 값: %d\n", *p);     // p가 가리키는 값 → a의 값 (10)

    *p = 20;  // p가 가리키는 값(a)을 20으로 변경
    printf("a 값 변경 후: %d\n", a); // 20 출력

    return 0;
}
