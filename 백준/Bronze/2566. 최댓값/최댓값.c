#include <stdio.h>

int main(void) {

	int arr[9][9];
	int M = 0;
	int a;
	int b;
	for (int i = 0; i < 9; i++)
	{
		for(int j = 0; j < 9; j++){
			scanf("%d", &arr[i][j]);
		}
	}
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++) {
			if (arr[i][j] >= M) {
				M = arr[i][j];
				a = i;
				b = j;
			}
		}
	}
	printf("%d\n", M);
	printf("%d %d", a+1, b+1);

	return 0;
}