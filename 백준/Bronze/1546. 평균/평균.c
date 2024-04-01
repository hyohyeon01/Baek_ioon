#include <stdio.h>

int main(void) {


	int a[100001];
	int num;
	int max = 0;
	int soso = 0;

	scanf("%d", &num);

	for (int i = 0; i < num; i++)
	{
		scanf("%d", &a[i]);
		soso += a[i];
		if (max < a[i])
		{
			max = a[i];
		}
	}
	printf("%.2f", (float)soso / num/ max * 100);

	return 0;
}