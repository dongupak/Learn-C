#include <stdio.h>

int main(void) {
    int a[4] = { 10, 20, 30, 40 }; // 배열 a의 선언과 초기화
    int(*x)[4] = &a;            // 배열 포인터 초기화

    // 배열 포인터를 통해 a 배열의 원소 출력
    for (int i = 0; i < 4; i++)
        printf("(*x)[%d] 값: %d\n", i, (*x)[i]);
}