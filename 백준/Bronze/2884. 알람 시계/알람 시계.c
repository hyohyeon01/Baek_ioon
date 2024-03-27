#include <stdio.h>

int main(void) {

	int hour;
	int mi;

	scanf("%d %d", &hour, &mi);

	if (mi < 45)
	{
		if (hour == 0)
		{
			printf("%d %d", 23, mi + 15);
		}
		else
		{
			printf("%d %d", hour - 1, mi + 15);
		}
	}
	else
	{
		printf("%d %d", hour, mi - 45);
	}

	return 0;
}