#include <stdio.h>
#include <stdbool.h>

bool numTest(int n) {
    int i = 2;
    if (n < 2) return false;        // 2 미만 → 소수 아님
    else if (n == 2) return true;   // 2 → 소수
    while (1) {
        if (n % i == 0) return false;   // 나누어 떨어지면 소수 아님
        else if (i * i > n) break;      // √n 초과하면 검사 종료
        i++;
    }
    return true; // 소수임
}

int main() {
    int j = 0;
    int res = 0;

    for (j = 1; j <= 20; j++) {
        if (numTest(j)) res += j;   // j가 소수면 누적 합산
    }

    printf("%d", res);
    return 0;
}
