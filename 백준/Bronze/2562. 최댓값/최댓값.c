#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int num[10];
	int max = 0;
	int a = 0;
	for (int i = 0; i < 9; i++) {
		scanf("%d", &num[i]);
		if (num[i] > max) {
			max = num[i];
			a = i + 1;
		}
	}
	printf("%d\n", max);
	printf("%d", a);

	return 0;
}