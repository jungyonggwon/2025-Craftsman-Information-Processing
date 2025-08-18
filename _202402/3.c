#include <stdio.h>
#include <stdbool.h>

// test 함수: a가 150보다 작은지 판별
// 150 미만이면 true, 아니면 false 반환
bool test(int a) {
    bool ans = a < 150 ? true : false;
    return ans;
}

// fact 함수: 재귀를 이용한 팩토리얼 계산
// fact(0) = 1, fact(1) = 1
// fact(n) = n * fact(n-1)
int fact(int i) {
    if (i < 2) return 1;   // 0! = 1, 1! = 1
    else return i * fact(i - 1);
}

int main() {
    int ans = 0;   // 조건을 만족한 횟수를 세는 변수

    // i = 0 ~ 9까지 반복
    for (int i = 0; i < 10; i++) {
        // fact(i) 값이 150보다 작으면 ans++
        if (test(fact(i)))
            ans++;
    }

    // 최종 결과 출력
    printf("%d", ans);
    return 0;
}

/*
📌 실행 과정 해설
i=0 → fact(0)=1 → 1<150 → true → ans=1
i=1 → fact(1)=1 → 1<150 → true → ans=2
i=2 → fact(2)=2 → 2<150 → true → ans=3
i=3 → fact(3)=6 → 6<150 → true → ans=4
i=4 → fact(4)=24 → 24<150 → true → ans=5
i=5 → fact(5)=120 → 120<150 → true → ans=6
i=6 → fact(6)=720 → 720<150 → false
i=7 → fact(7)=5040 → false
i=8 → fact(8)=40320 → false
i=9 → fact(9)=362880 → false

👉 true가 나온 횟수 = 총 6번
✅ 최종 출력 결과 = 6
*/
