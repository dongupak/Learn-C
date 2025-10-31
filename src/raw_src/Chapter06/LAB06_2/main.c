#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

int main(void) {
    int numbers[SIZE];

    // 배열 초기화
    for (int i = 0; i < SIZE; i++)
        numbers[i] = i + 1; // 1 ~ 10

    // 배열 셔플 
    srand(time(NULL));
    for (int i = SIZE - 1; i > 0; i--) {
        int j = rand() % (i + 1); // 0부터 i까지의 난수 생성
        // 두 요소를 교환
        int temp = numbers[i];
        numbers[i] = numbers[j];
        numbers[j] = temp;
    }

    printf("셔플된 배열: ");    // 출력
    for (int i = 0; i < SIZE; i++)
        printf("%d ", numbers[i]);
}