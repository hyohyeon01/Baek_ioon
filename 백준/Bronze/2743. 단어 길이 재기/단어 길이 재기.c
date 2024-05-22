#include <stdio.h>

int main(void) {
	
	char n[101];
	int ch = 0;
	scanf("%s", n);

	for (int i = 0; n[i] != '\0'; i++) {
		ch++;
	}
	printf("%d", ch);

	return 0;
}