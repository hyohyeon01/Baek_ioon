#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// lottos_len은 배열 lottos의 길이입니다.
// win_nums_len은 배열 win_nums의 길이입니다.
int* solution(int lottos[], size_t lottos_len, int win_nums[], size_t win_nums_len) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = (int*)malloc(sizeof(int) * 2);
    int a = 0; //최저 등수
    int c = 0; //0의 개수 세기
    
    int to = 0; //최고 등수
    int arr[] = {0,6,5,4,3,2,1};
    
    for(int i = 0; i <lottos_len; i++){
        for(int j = 0; j < win_nums_len; j++){
            if(lottos[i] == win_nums[j]){
                a++;
            }
        }
        if(lottos[i] == 0){
                c++;
            }
    }
    
    to = a + c;
    
    answer[0] = arr[to];
    answer[1] = arr[a];
    
    if(a == 0){
        answer[1] = 6;
    }
    if(to == 0){
        answer[0]= 6;
    }
    
    return answer;
}