#include <stdio.h>

int main() {

	int i;
	int n;
	int min = 1000000;
	int max = -1000000;

	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		int num;
		scanf("%d", &num);
		if (max < num)
		{
			max = num;
		}
		if (min > num)
		{
			min = num;
		}
	}
	printf("%d %d", min, max);

	return 0;
}