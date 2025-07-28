#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int arr[1000];
	int N, temp;
	scanf("%d", &N);
	for (int i=0; i < N; i++) {
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i < N; i++) {
		int min = i;
		for (int j = i; j < N; j++) {
			if (arr[min] > arr[j]) {
				min = j;
			}
		}
		temp = arr[min];
		arr[min] = arr[i];
		arr[i] = temp;
	}
	for (int i = 0; i < N; i++) {
		printf("%d\n", arr[i]);
	}
	return 0;
}