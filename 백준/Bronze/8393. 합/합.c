#include <stdio.h>

int main(void) {

	int a;
	int answer = 0;

	scanf("%d", &a);

	for (int i = 1; i <= a; i++)
	{
		answer += i;
	}
	printf("%d", answer);

	return 0;
}