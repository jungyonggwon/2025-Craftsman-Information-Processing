#include <stdio.h>     
// EN: Standard I/O header for printf
// KO: printf 사용을 위한 표준 입출력 헤더

// EN: Function to print an integer in binary recursively
// KO: 정수를 이진수로 재귀적으로 출력하는 함수
int printBin(int a)
{
    // EN: Base case → if a is 0 or 1, print it directly
    // KO: 기본 조건 → a가 0 또는 1이면 바로 출력
    if (a == 0 | a == 1) 
        printf("%d", a);
    else
    {
        // EN: Recursive call with a/2 (integer division)
        // KO: a/2로 재귀 호출 (정수 나눗셈)
        printBin(a/2);

        // EN: Print remainder when divided by 2 (last bit)
        // KO: 2로 나눈 나머지(마지막 비트)를 출력
        printf("%d", a%2);
    }
}

int main()
{ 
    // EN: Variable x initialized with 11
    // KO: 변수 x에 11 대입
    int x = 11;

    // EN: Call function to print binary representation of 11
    // KO: 11의 이진수를 출력하는 함수 호출
    printBin(x);

    // EN: Normal program termination
    // KO: 프로그램 정상 종료
    return 0;
}
