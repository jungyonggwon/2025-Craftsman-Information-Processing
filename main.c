// main.c
#include <stdio.h>
#include <stdlib.h>

static void print_matrix(int *a, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) printf("%2d ", a[i*n + j]);
        printf("\n");
    }
}

static void clear_matrix(int *a, int n) {
    for (int i = 0; i < n*n; i++) a[i] = 0;
}

// 1) |i - j| 패턴
static void fill_abs_diff(int *a, int n) {
    clear_matrix(a, n);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            a[i*n + j] = (i > j) ? (i - j) : (j - i);
}

// 2) ↘ 대각선(안티대각선)으로 1부터 채우기 (s = i+j 기준)
static void fill_diagonal_down_right(int *a, int n) {
    clear_matrix(a, n);
    int num = 1;
    for (int s = 0; s <= 2*(n-1); s++) {
        int r_start = (s < n) ? 0 : (s - (n - 1));
        int r_end   = (s < n) ? s : (n - 1);
        for (int i = r_start; i <= r_end; i++) {
            int j = s - i;
            a[i*n + j] = num++;
        }
    }
}

// 3) 시계 방향 나선형
static void fill_spiral(int *a, int n) {
    clear_matrix(a, n);
    int num = 1;
    int top = 0, left = 0, bottom = n - 1, right = n - 1;
    while (top <= bottom && left <= right) {
        for (int j = left; j <= right; j++) a[top*n + j] = num++;
        top++;
        for (int i = top; i <= bottom; i++) a[i*n + right] = num++;
        right--;
        if (top <= bottom) {
            for (int j = right; j >= left; j--) a[bottom*n + j] = num++;
            bottom--;
        }
        if (left <= right) {
            for (int i = bottom; i >= top; i--) a[i*n + left] = num++;
            left++;
        }
    }
}

// 4) 세로 지그재그
static void fill_vertical_zigzag(int *a, int n) {
    clear_matrix(a, n);
    int num = 1;
    for (int j = 0; j < n; j++) {
        if (j % 2 == 0) {
            for (int i = 0; i < n; i++) a[i*n + j] = num++;
        } else {
            for (int i = n - 1; i >= 0; i--) a[i*n + j] = num++;
        }
    }
}

int main(void) {
    int n, mode;
    // 빠르게 테스트하려면 아래 기본값 사용:
    // n = 4; mode = 0;  // 0이면 전 패턴 시연
    // 그리고 위 scanf 두 줄을 주석 처리

    if (printf("N (배열 크기, 2~10): "), scanf("%d", &n) != 1) return 0;
    if (n < 2 || n > 10) { printf("범위를 벗어났습니다.\n"); return 0; }
    printf("모드 선택: 0=ALL, 1=abs, 2=diag, 3=spiral, 4=zigzag : ");
    if (scanf("%d", &mode) != 1) return 0;

    int *a = (int*)malloc(sizeof(int) * n * n);
    if (!a) { printf("메모리 부족\n"); return 0; }

    if (mode == 0 || mode == 1) {
        printf("\n[1] |i-j| 패턴\n");
        fill_abs_diff(a, n);
        print_matrix(a, n);
    }
    if (mode == 0 || mode == 2) {
        printf("\n[2] ↘ 대각선 채우기 (1부터)\n");
        fill_diagonal_down_right(a, n);
        print_matrix(a, n);
    }
    if (mode == 0 || mode == 3) {
        printf("\n[3] 시계 방향 나선형\n");
        fill_spiral(a, n);
        print_matrix(a, n);
    }
    if (mode == 0 || mode == 4) {
        printf("\n[4] 세로 지그재그\n");
        fill_vertical_zigzag(a, n);
        print_matrix(a, n);
    }

    free(a);
    return 0;
}