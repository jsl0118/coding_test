#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int* arr;

int partition(int left, int right) {
    // --- 랜덤 피벗 선택 ---
    int pivot_index = left + rand() % (right - left + 1);

    // 피벗을 가장 왼쪽으로 이동
    int tmp = arr[pivot_index];
    arr[pivot_index] = arr[left];
    arr[left] = tmp;

    int pivot = left;
    int low = left + 1;
    int high = right;

    while (low <= high) {
        while (low <= right && arr[low] <= arr[pivot]) low++;
        while (high >= left && arr[high] > arr[pivot]) high--;

        if (low >= high) break;

        int t = arr[low];
        arr[low] = arr[high];
        arr[high] = t;
    }

    int t = arr[high];
    arr[high] = arr[pivot];
    arr[pivot] = t;

    return high;
}

void quick_sort(int left, int right) {
    if (left < right) {
        int q = partition(left, right);
        quick_sort(left, q - 1);
        quick_sort(q + 1, right);
    }
}

int main() {
    int N;
    scanf("%d", &N);

    arr = (int*)malloc(sizeof(int) * N);

    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    srand(time(NULL)); // 랜덤 시드 초기화

    quick_sort(0, N - 1);

    for (int i = 0; i < N; i++) {
        printf("%d\n", arr[i]);
    }

    free(arr);
    return 0;
}
