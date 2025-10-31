#include <stdio.h>

#define SIZE  3
int main(void) {
    int m[SIZE] = { 10, 20, 30 }, n[SIZE] = { 10, 20, 30 };

    printf("m의 주소 = %p\n", m);   // 배열 m의 주소값을 출력
    printf("n의 주소 = %p\n", n);   // 배열 n의 주소값을 출력
    return 0;
}