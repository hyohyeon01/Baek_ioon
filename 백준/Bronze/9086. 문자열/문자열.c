#include <stdio.h>
#include <string.h>

int main(void) {

	int num;
	char a[1000];

	scanf("%d", &num);

	for (int i = 0; i < num; i++)
	{
		scanf("%s", a);

		if (strlen(a) > 2)
		{
			printf("%c%c\n", a[0], a[strlen(a) - 1]);
		}
		else if (strlen(a) == 2) {
			printf("%c%c\n", a[0], a[1]);
		}
		else
		{
			printf("%c%c\n", a[0], a[0]);
		}
	}


	return 0;
}