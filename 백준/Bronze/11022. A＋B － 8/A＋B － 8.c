#include <stdio.h>

int main(void) {

	int a;
	int b; 
	int n;
	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		scanf("%d %d", &a, &b);
		printf("Case #%d: %d + %d = %d\n", i,a,b,a+b);
	}


	return 0;
}
