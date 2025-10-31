#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 50
#define RANGE 100

int main(void) {
    int i;

    // 랜덤 시드 초기화
    srand(time(NULL));
    // 1 ~ 100 사이의 난수 생성 후 출력
    for (i = 0; i < SIZE; i++)
        printf("%d ", rand() % RANGE + 1);  // 1~100
}