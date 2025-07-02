#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int N, M;
    scanf("%d %d", &N, &M);
    int A[100][100], B[100][100];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%d", &A[i][j]);
		}
    }
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%d", &B[i][j]);
			B[i][j] += A[i][j];
        }
    }
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }
    return 0;
}