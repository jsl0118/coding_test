#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main() {
	char n[101];
	scanf("%s", n);
	int length = strlen(n);
	int num = 1;
	for (int i = 0; i < length/2; i++) {
		if (n[i] == n[length - i-1]) continue;
		else {
			num = 0;
			break;
		}
	}
	printf("%d", num);
	return 0;
}