#include <stdio.h>

int main(void) {

	int array[101];
	int a;
	int b;
	int num = 0;

	
	scanf("%d", &a);
	for (int i = 0; i < a; i++)
	{
		scanf("%d", &array[i]); //array[i]값에 뭐가 들어가는지
	}
	scanf("%d", &b);
	for (int i = 0; i < a; i++)
	{
		if (b == array[i]) { //array[i]의 값이 b와 일치한다면
			num++;
		}
	}
	printf("%d", num);
	return 0;
}