#include <stdio.h>

int main(void){
    
    int num;
    scanf("%d", &num);
    
    for(int i = 0; i < num; i++){
        for(int j = 0; j < i; j++){
            printf(" ");
        }
        for(int h = 0; h < num - i; h++){
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}