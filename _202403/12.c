#include <stdio.h>
#define MAX 10   // 10번 반복 (출력 개수 제한)

int main() {
    int cur = 1, prev = 0, tmp;  // 현재값(cur), 이전값(prev), 임시저장(tmp)

    for (int i = 0; i < MAX; i++) {
        printf("%d", cur);   // 현재값 출력

        tmp = prev;          // 이전값을 tmp에 저장
        prev = cur;          // prev를 현재값으로 갱신
        cur = cur + tmp;     // cur = cur + 이전값(피보나치 점화식)

        if (i % 5 == 4)      // 5번째마다 줄바꿈
            printf("\n");
        else
            printf("-");
    }
    return 0;
}
