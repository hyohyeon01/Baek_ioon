#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int left, int right) {
    int answer = 0;
   int total = 0;

for (int i = left; i <= right; i++)
{
	for (int j = 1; j <= i; j++) {
		if (i % j == 0) {
			total += 1;
		}
	}
	if (total % 2 == 0)
	{
		answer += i;
	}
	else
	{
		answer -= i;
	}
	total = 0;
}
    
    return answer;
}