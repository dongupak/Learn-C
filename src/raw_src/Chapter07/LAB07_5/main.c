#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int size = 45;
    int numbers[size];

    // 배열 초기화
    for (int i = 0; i < size; i++)
        numbers[i] = i + 1; // 1 ~ 10

    // 배열 셔플 
    srand(time(NULL));
    for (int i = size - 1; i > 0; i--) {
        int j = rand() % (i + 1); // 0부터 i까지의 난수 생성
        // 두 요소를 교환
        int temp = numbers[i];
        numbers[i] = numbers[j];
        numbers[j] = temp;
    }

    printf("추천 로또 번호 :[");    // 출력
    for (int i = 0; i < 6; i++)
        printf("%2d ", numbers[i]);
    printf("]");
}