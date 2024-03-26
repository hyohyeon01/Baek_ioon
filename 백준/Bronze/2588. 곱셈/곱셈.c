#include <stdio.h>

int main(void) {

	int a; // 100
	int b; // 10
	int c; // 1

	int d; // 100
	int e; // 10
	int f; // 1

	scanf("%1d%1d%1d\n", &a, &b, &c);
	scanf("%1d%1d%1d", &d, &e, &f);


	//(100 * a + 10 * b + c)* f;


	printf("%d\n", (100 * a + 10 * b + c) * f);
	printf("%d\n", (100 * a + 10 * b + c) * e);
	printf("%d\n", (100 * a + 10 * b + c) * d);
	printf("%d\n", (100 * a + 10 * b + c) * (100 * d + 10 * e + f));


	return 0;
}