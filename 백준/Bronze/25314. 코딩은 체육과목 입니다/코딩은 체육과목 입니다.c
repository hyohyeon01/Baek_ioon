#include <stdio.h>

int main(void) {

	int a;
	char aa[] = "long";
	scanf("%d", &a);
	
	for (int i = 1; i <= a; i++)
	{
		if (i % 4 == 0) {
			printf("%s ", aa);
		}
	}
	printf("int");


	return 0;
}
