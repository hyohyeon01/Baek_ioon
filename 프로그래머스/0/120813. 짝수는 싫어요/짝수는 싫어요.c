#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int n) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = (int*)malloc(sizeof(int) * n);
    int i;
    int y = 0;
    if(n % 2 == 0){
        for(i = 1; i <= n; i += 2){
            answer[y] = i;
            y++;
        }
        *(answer + y) -= i;
    }else{
        for(i = 1; i <= n; i += 2){
            answer[y] = i;
             y++;
        }
    }
    return answer;
}