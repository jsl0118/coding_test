#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int fibo(int num) {
	if (num > 1) {
		return fibo(num - 1) + fibo(num - 2);
	}
	else {
		if (num == 0) return 0;
		else return 1;
	}
}
int main() {
	int n;
	scanf("%d", &n);
	printf("%d", fibo(n));
	return 0;
}