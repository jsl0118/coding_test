#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int n, result = 0;
	long long int k, a[10];
	scanf("%d %lld", &n, &k);
	for (int i = 0; i < n; i++) {
		scanf("%lld", &a[i]);
	}
	for (int i = n-1; i >0; i--) {
		if (k >= a[i]) {
			result += (k / a[i]);
			k %= a[i];
		}
		else if (k == 0) break;
	}
	if (k) result += k / a[0];
	printf("%d", result);
	return 0;
}