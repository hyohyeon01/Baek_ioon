#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// num_list_len은 배열 num_list의 길이입니다.
int solution(int num_list[], size_t num_list_len) {
    int answer = 0;
    int a = 0;
    int b = 0;
    for(int i = 0; i < num_list_len; i += 2){
        a += num_list[i];
    }
    for(int i = 1; i < num_list_len; i += 2){
        b += num_list[i];
    }
    if(a > b){
        answer = a;
    }
    else{
        answer = b;
    }
    return answer;
}