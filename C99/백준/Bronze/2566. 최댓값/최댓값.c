#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int grid[10][10];
	int x, y, max=0;
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			scanf("%d", &grid[i][j]);
			if (max < grid[i][j]) {
				max = grid[i][j];
				x = i, y = j;
			}
		}

	}
	printf("%d\n%d %d", max, x+1, y+1);
	return 0;
}