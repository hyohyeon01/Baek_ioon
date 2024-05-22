#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int num;
	int max = -1000000;
	int min = 1000000;
	int n;
	scanf("%d", &num);

	for (int i = 0; i < num; i++)
	{
		scanf("%d", &n);
		if (max < n) {
			max = n;
		}
		if (min > n) {
			min = n;
		}
	}

	printf("%d %d", min,  max);

	return 0;
}