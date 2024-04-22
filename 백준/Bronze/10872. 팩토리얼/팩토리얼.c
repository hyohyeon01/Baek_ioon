#include <stdio.h>

int main(void){
    
    int num;
    int total = 1;
    scanf("%d", &num);
    
    for(int i = 1; i <= num; i++){
        total *= i;
    }
    printf("%d", total);
    
    
    return 0;
}