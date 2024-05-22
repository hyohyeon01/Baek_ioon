#include <stdio.h>

int main(void) {

	int count;
	int n[101];
	int ch;
	int a = 0;
	scanf("%d", &count);

	for (int i = 0; i < count; i++)
	{
		scanf("%d", &n[i]);
	}
	scanf("%d", &ch);
	for (int i = 0; i < count; i++)
	{
		if (n[i] == ch) {
			a++;
		}
	}
	printf("%d", a);
	return 0;
}