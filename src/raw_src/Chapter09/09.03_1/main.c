#include <stdio.h>

int main(void) {
    int a = 10, b = 20, c = 30, d = 40;
    int* x[4] = { &a, &b, &c, &d };  // 포인터 배열 초기화

    // 포인터 배열을 통해 각 변수의 값 출력
    for (int i = 0; i < 4; i++)
        printf("x[%d]이 가리키는 값: %d\n", i, *x[i]);
}