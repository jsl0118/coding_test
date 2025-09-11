#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
    int N;
    scanf("%d", &N);

    int* dp = (int*)malloc((N + 1) * sizeof(int));
    dp[1] = 0; // 1은 연산 횟수 0

    for (int i = 2; i <= N; i++) {
        dp[i] = dp[i - 1] + 1; // 기본적으로 -1 하는 경우
        if (i % 2 == 0 && dp[i] > dp[i / 2] + 1) {
            dp[i] = dp[i / 2] + 1;
        }
        if (i % 3 == 0 && dp[i] > dp[i / 3] + 1) {
            dp[i] = dp[i / 3] + 1;
        }
    }

    printf("%d\n", dp[N]);
    free(dp);
    return 0;
}

