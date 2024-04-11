#include <stdio.h>

int main(void) {

	int num;
	int n;
	int answer = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%1d", &num);
		answer += num;
	}
	printf("%d", answer);

	return 0;
}