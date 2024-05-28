#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	unsigned a[999];
	int num;

	a[0] = 1;
	a[1] = 1;

	scanf("%u", &num);

	for (int i = 2; i < num; i++)
	{
		a[i] = a[i - 1] + a[i - 2];
	}
	
	printf("%d", a[num - 1]);


	return 0;
}