#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int ch;
	int co;
	int a;

	scanf("%d %d", &ch, &co);

	for (int i = 0; i < ch; i++)
	{
		scanf("%d", &a);
		if (a < co) {
			printf("%d ", a);
		}
	}


	return 0;
}