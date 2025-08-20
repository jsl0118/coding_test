#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);

	int bin[1000001];
	bin[1] = 1;
	bin[2] = 2;

	for (int i = 3; i <= n; i++) {
		bin[i] = (bin[i - 1] + bin[i - 2]) % 15746;
	}
	printf("%d", bin[n]);
	return 0;

}