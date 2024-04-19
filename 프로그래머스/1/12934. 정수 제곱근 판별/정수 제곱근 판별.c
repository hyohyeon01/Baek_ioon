#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long long solution(long long n) {
    long long answer = 0;
    int check = 0;
    for(long long i = 1; i <= n; i++){
        if(n == i*i){
            answer = (i + 1) * (i + 1);
            check++;
            break;
        }
    }
    if(check == 0){
        answer = -1;
    }
    return answer;
}