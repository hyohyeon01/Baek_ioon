#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool solution(int x) {
    int temp = x;
    bool answer = true;
    int a = 0;
    while(x>0){
        a += x % 10;
        x /= 10;
    }
    if(temp % a == 0){
        answer = true;
    }
    else{
        answer = false;
    }
    return answer;
}