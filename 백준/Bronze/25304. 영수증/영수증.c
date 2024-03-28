#include <stdio.h>

int main(void) {

	int answer = 0;
	int sum;
	int num;
	int a;
	int b;

	scanf("%d\n", &sum);
	scanf("%d\n",&num);
	for (int i = 1; i <= num; i++)
	{
		scanf("%d %d", &a, &b);
		answer += a * b;
	}

	if (answer == sum)
	{
		printf("Yes");
	}
	else
	{
		printf("No");
	}




	return 0;
}