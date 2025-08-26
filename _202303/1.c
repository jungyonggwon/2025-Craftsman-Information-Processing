#include <stdio.h>    
// stdio for printf           
// printf 사용을 위한 표준 입출력 헤더
#include <string.h>   
// string for strlen/strcpy   
// strlen, strcpy 사용을 위한 문자열 헤더
#include <stdlib.h>   
// stdlib for malloc/free     
// 동적 메모리 malloc/free 헤더

int main()                              
// program entry point                 
// 프로그램 시작 지점
{
    char a[] = "A B c  D e  F ! ";      
    // sample string with spaces          
    // 공백이 포함된 예제 문자열
    delBl(a);                           // remove spaces from a               // a에서 공백 제거 함수 호출
    printf("%s", a);                    // print result                       // 결과 문자열 출력
    return 0;                           // normal termination                  // 정상 종료
}

void delBl(char a[])                    // delete all spaces in string a      // 문자열 a의 모든 공백 제거
{
    int len = strlen(a);                // current length (without '\0')      // 현재 길이(널 문자는 제외)
    char* str = (char*)malloc(sizeof(char) * len); // temp buffer             // 임시 버퍼 동적 할당
    int i, k = 0;                       // i: read index, k: write index      // i: 읽기 인덱스, k: 쓰기 인덱스

    for(i = 0; i < len; i++)            // scan every character               // 모든 문자를 순회
    {
        if (a[i] != ' ')                // if not a space                     // 공백이 아니면
            str[k++] = a[i];            // copy to temp and advance k         // 임시 버퍼에 복사하고 k 증가
    }
    str[k] = '\0';                      // terminate with null                // 널 문자로 문자열 종료
    strcpy(a, str);                     // copy back to original              // 원래 배열 a로 복사
    free(str);                          // release temp buffer                // 임시 메모리 해제
}
