#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long long solution(int price, int money, int count) {
    long long answer = 0;
    long long a = 0;
    for(int i = 1; i <= count; i++ ){
        a += i * price;
    }
    if(a >= money){
        answer = a - money;
    }
    
    return answer;
}