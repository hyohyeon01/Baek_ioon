#include <stdio.h>

int main(void) {
	int a[100];
	int max = 0;
	int index = 0;

	for (int i = 0; i < 9; i++)
	{
		scanf("%d", &a[i]);
		if (max < a[i])
		{
			max = a[i];
			index = i + 1;
		}
	}
	printf("%d\n%d", max, index);

	return 0;
}