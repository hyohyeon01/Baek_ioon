#include <stdio.h>

int main(void) {

	int a;

	scanf("%d", &a);


	for (int i = 0; i < a; i++)
	{
		for (int j = 1; j < a - i; j++)
		{
			printf(" ");
		}
		for (int j = 0; j <= i; j++)
		{
			printf("*");
		}
		for (int j = 0; j < i; j++)
		{
			printf("*");
		}

		printf("\n");
	}



	for (int i = 0; i < a - 1; i++)
	{
		for (int j = 0; j <= i; j++) {
			printf(" ");
		}
		for (int j = 0; j < (a - 1) - i; j++)
		{
			printf("*");
		}
		for (int j = 1; j < (a - 1) - i; j++)
		{
			printf("*");
		}
		printf("\n");


	}
	return 0;
}