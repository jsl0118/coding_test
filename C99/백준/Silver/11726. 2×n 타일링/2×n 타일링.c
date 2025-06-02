#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
long long int tile(int);
int main()
{
	int num;
	scanf("%d", &num);
	printf("%lld", tile(num));
	return 0;
}
long long int tile(int n)
{
	long long int arr[1001];
	arr[1] = 1, arr[2] = 2;
	for (int i = 3; i <= n; i++) {
			arr[i] = (arr[i - 1] + arr[i - 2])%10007;
	}
	return arr[n];
}