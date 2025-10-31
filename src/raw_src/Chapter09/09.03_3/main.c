#include <stdio.h>

int main(void) {
    int a[4] = { 10, 20, 30, 40 }; // 배열 a의 선언과 초기화
    // 선언과 초기화 코드 생략
    int* x = a;  // 포인터 배열 초기화

    // 포인터 배열을 통해 각 변수의 값 출력
    for (int i = 0; i < 4; i++)
        printf("*(x+%d) 값: %d\n", i, *(x + i));
}